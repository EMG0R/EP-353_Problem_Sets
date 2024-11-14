#include <JuceHeader.h>
#include <iostream>

int main()
{
    juce::File inputFile("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.1/SN.wav");
    juce::File outputFile("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.1/ReverseSN.wav");

    if (!inputFile.existsAsFile())
    {
        std::cerr << "Input file does not exist at specified path." << std::endl;
        return -1;
    }

    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();

    // load input file
    std::unique_ptr<juce::AudioFormatReader> reader(formatManager.createReaderFor(inputFile));
    if (reader == nullptr)
    {
        std::cerr << "failed to read the audio file" << std::endl;
        return -1;
    }

    // prepare an AudioBuffer
    juce::AudioBuffer<float> buffer(reader->numChannels, reader->lengthInSamples);
    reader->read(&buffer, 0, reader->lengthInSamples, 0, true, true);

    // Reverse the audio samples
    for (int channel = 0; channel < buffer.getNumChannels(); ++channel)
    {
        buffer.reverse(channel, 0, buffer.getNumSamples());
    }

    // write reversed samples
    juce::WavAudioFormat wavFormat;
    std::unique_ptr<juce::AudioFormatWriter> writer(wavFormat.createWriterFor(
        outputFile.createOutputStream().release(), reader->sampleRate, buffer.getNumChannels(),
        16, {}, 0));

    if (writer == nullptr)
    {
        std::cerr << "failed to write the audio file" << std::endl;
        return -1;
    }

    writer->writeFromAudioSampleBuffer(buffer, 0, buffer.getNumSamples());
    std::cout << "reversed audio written" << std::endl;

    return 0;
}
