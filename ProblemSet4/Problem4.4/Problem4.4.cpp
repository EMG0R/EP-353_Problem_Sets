#include <JuceHeader.h>
#include <iostream>

int main()
{
    const float attackPortion = 0.1f;
    const float decayPortion = 0.9f;

    juce::File inputFile("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/sine.wav");
    juce::File outputFile("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/enveloped.wav");

    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();

    // load input file
    std::unique_ptr<juce::AudioFormatReader> reader(formatManager.createReaderFor(inputFile));
    if (reader == nullptr)
    {
        std::cerr << "failed to read audio file." << std::endl;
        return -1;
    }

    juce::AudioBuffer<float> buffer(reader->numChannels, reader->lengthInSamples);
    reader->read(&buffer, 0, reader->lengthInSamples, 0, true, true);

    // compute attack and decay points
    int totalSamples = buffer.getNumSamples();
    int attackSamples = static_cast<int>(totalSamples * attackPortion);
    int decaySamples = totalSamples - attackSamples;

    // apply the envelope
    for (int channel = 0; channel < buffer.getNumChannels(); ++channel)
    {
        float* channelData = buffer.getWritePointer(channel);

        // attack phase
        for (int sample = 0; sample < attackSamples; ++sample)
        {
            float envelope = sample / static_cast<float>(attackSamples); // Linear interpolation from 0 to 1
            channelData[sample] *= envelope;
        }

        // decay phase
        for (int sample = attackSamples; sample < totalSamples; ++sample)
        {
            float envelope = 1.0f - ((sample - attackSamples) / static_cast<float>(decaySamples)); // Linear interpolation from 1 to 0
            channelData[sample] *= envelope;
        }
    }

    // write the enveloped buffer to the output file
    juce::WavAudioFormat wavFormat;
    std::unique_ptr<juce::AudioFormatWriter> writer(wavFormat.createWriterFor(
        outputFile.createOutputStream().release(), reader->sampleRate, buffer.getNumChannels(),
        16, {}, 0));

    if (writer == nullptr)
    {
        std::cerr << "failed to write audio file." << std::endl;
        return -1;
    }

    writer->writeFromAudioSampleBuffer(buffer, 0, buffer.getNumSamples());
    std::cout << "enveloped audio written" << std::endl;

    return 0;
}
