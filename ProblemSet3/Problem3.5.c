//view multiple midi notes' pitch, velocity and midi channel based on user input, just input number of midi notes followed by correct values to view midi notes' info
#include <stdio.h>

//def the MIDINote structure
typedef struct {
    int pitch;     // MIDI note pitch (0-127)
    int velocity;  // MIDI velocity (0-127)
    int channel;   // MIDI channel (1-16)
} MIDINote;

//print the details of each MIDI note in the array
void print_notes(MIDINote notes[], int size) {
    for (int i = 0; i < size; i++) {
        printf("The MIDI note has pitch %d, velocity %d, and channel %d.\n", 
               notes[i].pitch, notes[i].velocity, notes[i].channel);
    }
}

int main() {
    int size;

    //prompt how many MIDI notes to enter
    printf("Enter the number of MIDI notes: ");
    while (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid number, please enter a positive integer: ");
        while (getchar() != '\n');  // clear input buffer
    }

    //declare array of MIDINote structures based on the input size
    MIDINote notes[size];

    //input and validate the MIDI notes
    for (int i = 0; i < size; i++) {
        printf("Enter MIDI note %d (pitch velocity channel): ", i + 1);

        while (scanf("%d %d %d", &notes[i].pitch, &notes[i].velocity, &notes[i].channel) != 3 ||
               notes[i].pitch < 0 || notes[i].pitch > 127 ||
               notes[i].velocity < 0 || notes[i].velocity > 127 ||
               notes[i].channel < 1 || notes[i].channel > 16) {
            printf("Invalid input, MIDI note values must be pitch (0-127), velocity (0-127), and channel (1-16).\n");
            printf("Please re-enter MIDI note %d (pitch velocity channel): ", i + 1);
            while (getchar() != '\n');  // clear input buffer
        }
    }

    //call function print the details of all notes
    print_notes(notes, size);

    return 0;
}
