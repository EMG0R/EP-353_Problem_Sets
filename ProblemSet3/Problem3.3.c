//converts midi to frequency on user input through an array, just input number of notes and correct midi note number to view frequency


#include <stdio.h>
#include <math.h>

//define midi_to_frequency function
float midi_to_frequency(int note) {
    return 440.0 * pow(2.0, (note - 69) / 12.0);
}

//function to calculate frequencies of the notes in the chord
void frequencies_of_chord(int* chord, int size, float* frequencies) {
    for (int i = 0; i < size; i++) {
        frequencies[i] = midi_to_frequency(chord[i]);
    }
}

int main() {
    int size;

    //input number of notes
    printf("Enter the number of MIDI notes in the chord: ");
    while (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid number of notes, try again: ");
        while (getchar() != '\n'); // clear input buffer
    }

    //declare arrays for MIDI notes and frequencies
    int chord[size];
    float frequencies[size];

    int valid_input = 0;  // flag for valid input

    //input and validate midi notes
    while (!valid_input) {
        printf("Enter the MIDI notes of the chord (separated by spaces): ");
        int notes_entered = 0; // counter for valid notes entered

        for (int i = 0; i < size; i++) {
            int note;
            if (scanf("%d", &note) != 1) {
                //invalid input handling
                printf("Invalid input, try again.\n");
                while (getchar() != '\n');  // clear input buffer
                break;
            }

            //validate midi note range (0-127)
            if (note < 0 || note > 127) {
                printf("Invalid MIDI note detected, try again.\n");
                while (getchar() != '\n');  // clear input buffer
                break;
            }

            chord[i] = note;  // store valid note
            notes_entered++;
        }

        //validate if the correct number of notes was entered
        if (notes_entered == size) {
            valid_input = 1;  // input is valid
        } else {
            printf("Invalid number of notes, try again.\n");
            while (getchar() != '\n');  // clear input buffer
        }
    }

    //call function to calculate frequencies
    frequencies_of_chord(chord, size, frequencies);

    //print the frequencies
    for (int i = 0; i < size; i++) {
        printf("The frequency of MIDI note %d is %.2f Hz.\n", chord[i], frequencies[i]);
    }

    return 0;
}
