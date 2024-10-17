//view one midi note's pitch, velocity and midi channel based on user input, just input correct values for a midi note to view it
#include <stdio.h>

//def MIDINote structure
typedef struct {
    int pitch;     // MIDI note pitch (0-127)
    int velocity;  // MIDI velocity (0-127)
    int channel;   // MIDI channel (1-16)
} MIDINote;

//print the details of the MIDI note
void print_note(MIDINote note) {
    printf("The MIDI note has pitch %d, velocity %d, and channel %d.\n", 
            note.pitch, note.velocity, note.channel);
}

int main() {
    MIDINote note;

    //pitch and validate
    printf("Enter the pitch (0-127): ");
    while (scanf("%d", &note.pitch) != 1 || note.pitch < 0 || note.pitch > 127) {
        printf("Invalid pitch, try again: ");
        while (getchar() != '\n');  // clear input buffer
    }

    //velocity and validate
    printf("Enter the velocity (0-127): ");
    while (scanf("%d", &note.velocity) != 1 || note.velocity < 0 || note.velocity > 127) {
        printf("Invalid velocity, try again: ");
        while (getchar() != '\n');  // clear input buffer
    }

    //channel and validate
    printf("Enter the channel (1-16): ");
    while (scanf("%d", &note.channel) != 1 || note.channel < 1 || note.channel > 16) {
        printf("Invalid channel, try again: ");
        while (getchar() != '\n');  // clear input buffer
    }

    //call print_note function
    print_note(note);

    return 0;
}
