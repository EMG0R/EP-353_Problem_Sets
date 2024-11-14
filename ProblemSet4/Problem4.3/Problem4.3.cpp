#include <JuceHeader.h>
#include <cmath>
#include <iostream>

// global variables
const float kSampleRate = 44100.0f;
const float kSec = 1.0f;
const int kNumFrames = static_cast<int>(kSampleRate * kSec);
const int kNumChannels = 1;         
const float kFrequency = 250.0f;     
const float kLfoFrequency = 2.0f;    
const float kAmplitude = 0.25f;      

int main()
{
    juce::File destFile("/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.3/tremolo.wav");

    // audio format and register the wav format
    juce::AudioFormatManager formatManager;
    formatManager.registerBasicFormats();

    // create buffer
    juce::AudioBuffer<float> buffer(kNumChannels, kNumFrames);

    // generate sine wave with tremolo
    for (int sample = 0; sample < buffer.getNumSamples(); ++sample)
    {
        float time = sample / kSampleRate;

        // sine wave at 250 Hz
        float sineWave = kAmplitude * std::sin(2.0f * juce::MathConstants<float>::pi * kFrequency * time);

        // LFO
        float lfo = (std::sin(2.0f * juce::MathConstants<float>::pi * kLfoFrequency * time) + 1.0f) / 2.0f;

        // apply  LFO to sine wave
        float tremoloWave = sineWave * lfo;

        // set the sample in the buffer
        buffer.setSample(0, sample, tremoloWave);
    }

    // unique_ptr for the writer
    std::unique_ptr<juce::AudioFormatWriter> writer(formatManager.findFormatForFileExtension("wav")
                                          ->createWriterFor(new juce::FileOutputStream(destFile),
                                                             kSampleRate,
                                                             kNumChannels,
                                                             16,
                                                             {},
                                                             0));

    if (writer)
    {
       // write  buffer to file
       writer->writeFromAudioSampleBuffer(buffer, 0, buffer.getNumSamples());
       std::cout << "Tremolo wave written to /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.3/tremolo.wav" << std::endl;
    }
    else
    {
       std::cerr << "failed to write output" << std::endl;
    }

    return 0;
}
