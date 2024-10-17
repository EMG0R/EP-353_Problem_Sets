//converts midi to frequency on user input for multiple midi notes, just enter number of notes and the midi note number to view frequency

#include <stdio.h>
#include <math.h>

//define midi_to_frequency function
float midi_to_frequency(int note) {
    return 440.0 * pow(2.0, (note - 69) / 12.0);
}

//print freqs
void print_chord_frequencies(int chord[], int size) {
    for (int i = 0; i < size; i++) {
        float frequency = midi_to_frequency(chord[i]);
        printf("The frequency of MIDI note %d is %.2f Hz.\n", chord[i], frequency);
    }
}

int main() {
    int size;

    //input number of notes
    printf("Enter the number of MIDI notes in the chord: ");
    scanf("%d", &size);

    //validate size input
    while (size <= 0) {
        printf("Invalid number of notes, try again: ");
        scanf("%d", &size);
    }

    //declare array
    int chord[size];
    
    int valid_input = 0;  // flag to check if input is valid

    //input and validate midi notes
    while (!valid_input) {
        printf("Enter the MIDI notes of the chord (separated by spaces): ");
        int notes_entered = 0; // count valid notes entered

        for (int i = 0; i < size; i++) {
            int note;
            if (scanf("%d", &note) != 1) {
                //invalid input
                printf("Invalid input, try again.\n");
                while (getchar() != '\n'); // clear buffer
                break;
            }

            //validate midi note
            if (note < 0 || note > 127) {
                printf("Invalid MIDI note detected, try again.\n");
                while (getchar() != '\n'); // clear buffer
                break;
            }

            chord[i] = note;
            notes_entered++;
        }

        //check if the correct number of notes  entered
        if (notes_entered == size) {
            valid_input = 1; // input is valid
        } else {
            printf("Invalid number of notes, try again.\n");
            while (getchar() != '\n'); // clear buffer
        }
    }

    //call function
    print_chord_frequencies(chord, size);

    return 0;
}
