#include <JuceHeader.h>
#include <iostream>

float readSoundFile (juce::AudioBuffer<float>* buffer);
int writeSoundFile (juce::AudioBuffer<float> buffer, float sampleRate);
void process (juce::AudioBuffer<float> inBuffer, juce::AudioBuffer<float>* outBuffer);

//==============================================================================
int main ()
{
    // read  source file into buffer
    juce::AudioBuffer<float> inBuffer;
    float sampleRate = readSoundFile(&inBuffer);
    if (!sampleRate) return 1;

    // create buffer for processing
    juce::AudioBuffer<float> outBuffer (inBuffer.getNumChannels(), inBuffer.getNumSamples());
    
    // process audio data
    process(inBuffer, &outBuffer);
    
    // write processed audio data to sound file
    if (writeSoundFile(outBuffer, sampleRate)) return 1;
}

// process function to apply noise gate
void process (juce::AudioBuffer<float> inBuffer, juce::AudioBuffer<float>* outBuffer)
{
    const float threshold = 0.02f;

    for (int channel = 0; channel < inBuffer.getNumChannels(); ++channel)
    {
        const float* channelReadData = inBuffer.getReadPointer(channel);
        float* channelWriteData = outBuffer->getWritePointer(channel);

        for (int sample = 0; sample < inBuffer.getNumSamples(); ++sample)
        {
            float inputSample = channelReadData[sample];
            
            // apply noise gate
            if (std::abs(inputSample) < threshold)
                channelWriteData[sample] = 0.0f;
            else
                channelWriteData[sample] = inputSample;
        }
    }
}

// read audio file
float readSoundFile (juce::AudioBuffer<float>* buffer)
{
    juce::File file("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.5/noisy.wav");
    
    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();

    std::unique_ptr<juce::AudioFormatReader> reader(formatManager.createReaderFor(file));
    
    if (reader)
    {
        buffer->setSize(reader->numChannels, static_cast<int>(reader->lengthInSamples));
        
        bool success = reader->read(buffer, 0, static_cast<int>(reader->lengthInSamples), 0, true, true);
        if (success)
            return reader->sampleRate;
        
        std::cerr << "failed to read samples from source file." << std::endl;
        return 0.0f;
    }
    
    std::cerr << "failed to open source file." << std::endl;
    return 0.0f;
}

// write audio file
int writeSoundFile (juce::AudioBuffer<float> buffer, float sampleRate)
{
    juce::File file("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.5/noisegate.wav");
    
    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();
    
    std::unique_ptr<juce::AudioFormatWriter> writer(formatManager.findFormatForFileExtension("wav")
                                                    ->createWriterFor(new juce::FileOutputStream(file),
                                                                       sampleRate,
                                                                       buffer.getNumChannels(),
                                                                       16,
                                                                       {},
                                                                       0));
    if (writer)
    {
        bool success = writer->writeFromAudioSampleBuffer(buffer, 0, buffer.getNumSamples());
        if (success)
            return 0;
        
        std::cerr << "failed to write the output file." << std::endl;
        return 1;
    }
    
    std::cerr << "failed to create writer for output file." << std::endl;
    return 1;
}
