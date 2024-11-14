#include <JuceHeader.h>
#include <iostream>
#include <cmath>

int readSoundFile(juce::AudioBuffer<float>* buffer, double& sampleRate);
int writeSoundFile(juce::AudioBuffer<float>& buffer, double sampleRate);
void process(juce::AudioBuffer<float>& inBuffer, juce::AudioBuffer<float>& outBuffer, int keepBits);
short keep_bits_from_16(short input, int keepBits);

//==============================================================================
int main()
{
    // specify number of bits to crush
    int keepBits = 4; 

    // read the source file into buffer
    juce::AudioBuffer<float> inBuffer;
    double sampleRate = 0.0;
    if (readSoundFile(&inBuffer, sampleRate) == 1) return 1;

    // create buffer
    juce::AudioBuffer<float> outBuffer(inBuffer.getNumChannels(), inBuffer.getNumSamples());

    // process audio data with bit reduction
    process(inBuffer, outBuffer, keepBits);

    // write the processed audio to file
    if (writeSoundFile(outBuffer, sampleRate) == 1) return 1;

    return 0;
}

// bit reduction
short keep_bits_from_16(short input, int keepBits)
{
    int shiftAmount = 16 - keepBits;
    short reduced = (input >> shiftAmount) << shiftAmount; // remove bits and shift back
    return reduced;
}

// process function applying bit quantization
void process(juce::AudioBuffer<float>& inBuffer, juce::AudioBuffer<float>& outBuffer, int keepBits)
{
    for (int channel = 0; channel < inBuffer.getNumChannels(); ++channel)
    {
        const float* channelReadData = inBuffer.getReadPointer(channel);
        float* channelWriteData = outBuffer.getWritePointer(channel);

        for (int sample = 0; sample < inBuffer.getNumSamples(); ++sample)
        {
            // convert float to short, apply bit reduction, and convert back to float
            short intSample = static_cast<short>(channelReadData[sample] * 32767.0f);
            intSample = keep_bits_from_16(intSample, keepBits);
            channelWriteData[sample] = intSample / 32767.0f;
        }
    }
}

// read audio file and store in a float buffer
int readSoundFile(juce::AudioBuffer<float>* buffer, double& sampleRate)
{
    juce::File file("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.6/sine.wav");
    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();

    std::unique_ptr<juce::AudioFormatReader> reader(formatManager.createReaderFor(file));
    
    if (reader)
    {
        buffer->setSize(reader->numChannels, static_cast<int>(reader->lengthInSamples));
        sampleRate = reader->sampleRate;

        reader->read(buffer, 0, static_cast<int>(reader->lengthInSamples), 0, true, true);
        return 0;
    }
    std::cerr << "failed to open source file." << std::endl;
    return 1;
}

// write the audio file as a 24-bit AIFF file
int writeSoundFile(juce::AudioBuffer<float>& buffer, double sampleRate)
{
    juce::File file("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.6/reduct.aiff");
    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();

    juce::AiffAudioFormat aiffFormat;
    std::unique_ptr<juce::AudioFormatWriter> writer(aiffFormat.createWriterFor(
        new juce::FileOutputStream(file),
        sampleRate,
        buffer.getNumChannels(),
        24,
        {},
        0));

    if (writer)
    {
        if (writer->writeFromAudioSampleBuffer(buffer, 0, buffer.getNumSamples()))
            return 0;

        std::cerr << "failed to write to output file." << std::endl;
        return 1;
    }
    
    std::cerr << "failed to create writer for output file." << std::endl;
    return 1;
}
