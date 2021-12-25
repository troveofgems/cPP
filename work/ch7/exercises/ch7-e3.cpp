/* File Corresponds To Chapter 7 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 3
 *  Write a two-player tic-tac-toe game, allowing two humans to play against each other; use enums when possible to
 *  represent the values of the board.
 * */

#include <iostream>
#include <string>

using namespace std;

void game_playTTT() {
    cout << "Let's begin a game of TTT" << endl;

    // There are 9 squares on a TTT Board [A1-A3, B1-B3, C1-C3]
    enum {TTTS_BLANK = 0, TTTS_O = 1, TTTS_X = 2};

    // Board Values
    int a1 = 0, a2 = 0, a3 = 0;
    int b1 = 0, b2 = 0, b3 = 0;
    int c1 = 0, c2 = 0, c3 = 0;

    if (board_position == TTTS_O) {
        // Some Code
    }

}

int main() {
    // Game Menu
    int gameInput = 0;

    cout << "Welcome, here is the game menu:" << endl;
    cout << "1. Tic-Tac-Toe" << endl;
    cout << "0 To Exit Program" << endl;

    switch(gameInput) {
        case 1:
            game_playTTT();
            break;
        case 0:
            cout << "Thank you for playing!" << endl;
            break;
        default:
            cout << "Something Went Wrong..." << endl;
            break;
    }
    return 0;
}
