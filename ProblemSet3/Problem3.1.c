//converts midi to frequency on user input, just input correct midi note to view frequency

#include <stdio.h>
#include <math.h>

//define midi_to_frequency function
float midi_to_frequency(int note) {
    return 440.0 * pow(2.0, (note - 69) / 12.0);
}

int main() {
    int midi_note;
    float frequency;

    //input and validate MIDI note
    printf("Enter a MIDI note number: ");
    while (scanf("%d", &midi_note) != 1 || midi_note < 0 || midi_note > 127) {
        //if invalid, print error and re-prompt
        printf("Invalid MIDI note detected, try again: ");
        while (getchar() != '\n');  // clear input buffer
    }

    //MTOF: convert MIDI note to frequency
    frequency = midi_to_frequency(midi_note);

    //print the frequency
    printf("The frequency of MIDI note %d is %.2f Hz.\n", midi_note, frequency);

    return 0;
}
