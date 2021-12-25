/* File Corresponds To Chapter 7 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Chapter Overview
 * => ENUM & Switch Case
 * */
#include <iostream>
#include <string>

using namespace std;

void playGame() {}
void loadGame() {}
void playMultiplayer() {}

int main() {
    // When If/Else Conditions begin to check for more than 4 or 5 conditions, it might be time to
    // check out switch case statements and enums.

    // Switch cases are multi-conditional checks which branch the flow of programming just like an if/else statement.
    int option = 3;
    switch(option) {
        case 0: // option == 0
            // Code To Execute
            break;
        case 1: // option == 1
            // Code To Execute
            break;
        case 2: // option == 2
            // Code To Execute
            break;
        case 3: // option == 3
            // Code To Execute
            break;
        default: // option != any defined case. Catch-All
            // Code To Execute
            break;
    }

    // Example Program
    int input = 0;

    cout << "1.  Play Game" << endl;
    cout << "2.  Load Game" << endl;
    cout << "3.  Multiplayer" << endl;
    cout << "4.  Exit" << endl;
    cout << "Selection:" << endl;
    cin >> input;

    switch(input) {
        case 1:
            playGame();
            break;
        case 2:
            loadGame();
            break;
        case 3:
            playMultiplayer();
            break;
        case 4:
            cout << "Thank you for playing!!" << endl;
            break;
        default:
            cout << "Error, bad input, quitting..." << endl;
            break;
    }

    cout << endl << endl << "Testing Enums" << endl;

    // Using ENUMs
    // The use of enums is helpful when you want to restrict a variable to a certain set of values and those values
    // are known ahead of time.
    enum RainbowColor {
        RC_RED,
        RC_ORANGE,
        RC_YELLOW,
        RC_GREEN,
        RC_BLUE,
        RC_INDIGO,
        RC_VIOLET
    };

    RainbowColor chosen_color = RC_BLUE;
    switch(chosen_color) {
        case RC_RED: // Paint Screen Red
            cout << "The queen of hearts says to paint the screen red!" << endl;
            break;
        case RC_ORANGE: // Paint Screen Orange
            cout << "The queen of hearts says to paint the screen orange!" << endl;
            break;
        case RC_YELLOW: // Paint Screen Yellow
            cout << "The queen of hearts says to paint the screen yellow!" << endl;
            break;
        case RC_GREEN: // Paint Screen Green
            cout << "The queen of hearts says to paint the screen green!" << endl;
            break;
        case RC_BLUE: // Paint Screen Blue
            cout << "The queen of hearts says to paint the screen blue!" << endl;
            break;
        case RC_INDIGO: // Paint Screen Indigo
            cout << "The queen of hearts says to paint the screen indigo!" << endl;
            break;
        case RC_VIOLET: // Paint Screen Violet
            cout << "The queen of hearts says to paint the screen violet!" << endl;
            break;
        default: // Handle Unexpected Types
            cout << "The queen of hearts says to paint the screen black!" << endl;
            break;
    }

    return 0;
}
