#include <JuceHeader.h>
#include <cmath>

int main()
{
    const double sampleRate = 44100.0;  
    const double frequency = 440.0;     
    const int durationInSeconds = 2;   
    const int numSamples = static_cast<int>(sampleRate * durationInSeconds);

    juce::AudioBuffer<float> buffer(1, numSamples); // Mono buffer for output

    // generate triangle wave by summing odd harmonics
    for (int sample = 0; sample < numSamples; ++sample)
    {
        double currentSample = 0.0;
        double time = sample / sampleRate;

        for (int harmonic = 1; harmonic <= 19; harmonic += 2)  //odd harmonics up to 19
        {
            double harmonicAmplitude = pow(-1.0, (harmonic - 1) / 2) / (harmonic * harmonic);
            currentSample += harmonicAmplitude * std::sin(2.0 * juce::MathConstants<double>::pi * harmonic * frequency * time);
        }

        buffer.setSample(0, sample, static_cast<float>(currentSample));
    }

    // write the buffer to wav
    juce::File outputFile("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.2/triangle.wav");
    juce::WavAudioFormat wavFormat;
    std::unique_ptr<juce::AudioFormatWriter> writer(wavFormat.createWriterFor(
        outputFile.createOutputStream().release(), sampleRate, buffer.getNumChannels(),
        16, {}, 0));

    if (writer == nullptr)
    {
        std::cerr << "failed to write audio file." << std::endl;
        return -1;
    }

    writer->writeFromAudioSampleBuffer(buffer, 0, buffer.getNumSamples());
    std::cout << "triangle written" << std::endl;

    return 0;
}
