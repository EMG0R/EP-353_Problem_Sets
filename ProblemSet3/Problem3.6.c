//view transposed midi notes' pitch, velocity and midi channel based on user input, just input number of midi notes followed by correct values to view midi notes' info and then the transposition value to see transposed result
#include <stdio.h>

//define the MIDINote structure
typedef struct {
    int pitch;     // midi note pitch (0-127)
    int velocity;  // midi velocity (0-127)
    int channel;   // midi channel (1-16)
} MIDINote;

//function to print the details of midi note
void print_notes(MIDINote notes[], int size) {
    for (int i = 0; i < size; i++) {
        printf("the midi note has pitch %d, velocity %d, and channel %d.\n", 
               notes[i].pitch, notes[i].velocity, notes[i].channel);
    }
}

//function to transpose the notes by a certain number of steps
void transpose_notes(MIDINote* notes, int size, int steps) {
    for (int i = 0; i < size; i++) {
        notes[i].pitch += steps;
        // ensure pitch remains within the valid range (0-127)
        if (notes[i].pitch > 127) {
            notes[i].pitch = 127;
        } else if (notes[i].pitch < 0) {
            notes[i].pitch = 0;
        }
    }
}

int main() {
    int size, steps;

    // ask user how many midi notes to enter
    printf("enter the number of midi notes: ");
    while (scanf("%d", &size) != 1 || size <= 0) {
        printf("invalid number, please enter a positive integer: ");
        while (getchar() != '\n');  // clear input buffer
    }

    //declare array of MIDINote structures based on the input size
    MIDINote notes[size];

    //input and validate the midi notes
    for (int i = 0; i < size; i++) {
        printf("enter midi note %d (pitch velocity channel): ", i + 1);

        //validate that all values are within their ranges
        while (scanf("%d %d %d", &notes[i].pitch, &notes[i].velocity, &notes[i].channel) != 3 ||
               notes[i].pitch < 0 || notes[i].pitch > 127 ||
               notes[i].velocity < 0 || notes[i].velocity > 127 ||
               notes[i].channel < 1 || notes[i].channel > 16) {
            printf("invalid input, midi note values must be pitch (0-127), velocity (0-127), and channel (1-16).\n");
            printf("please re-enter midi note %d (pitch velocity channel): ", i + 1);
            while (getchar() != '\n');  // clear input buffer
        }
    }

    //ask the user how many steps to transpose (0-11)
    printf("enter the number of steps to transpose (0-11): ");
    while (scanf("%d", &steps) != 1 || steps < 0 || steps > 11) {
        printf("invalid input, steps must be between 0 and 11: ");
        while (getchar() != '\n');  //clear input buffer
    }

    //transpose the notes by the number of steps
    transpose_notes(notes, size, steps);

    //print the transposed notes
    print_notes(notes, size);

    return 0;
}
