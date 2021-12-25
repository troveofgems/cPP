/* File Corresponds To Chapter 7 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 3
 *  Write a two-player tic-tac-toe game, allowing two humans to play against each other; use enums when possible to
 *  represent the values of the board.
 * */

#include <iostream>
#include <string>

using namespace std;

bool gameOver() {
    return true;
}

void game_playTTT() {
    bool playerNamesSet = false;
    string player_1;
    string player_2;

    int finishedSettingPlayers = 2;
    do {
        cout << "Please set player 1's name: " << endl;
        cin >> player_1;

        cout << "Please set player 2's name: " << endl;
        cin >> player_2;

        cout << "Player 1: " << player_1 << endl;
        cout << "Player 2: " << player_2 << endl << endl;
        cout << "Is this correct?, 1 - Yes / 2 - No" << endl;
        cin >> finishedSettingPlayers;
        if (finishedSettingPlayers == 1) {
            playerNamesSet = true;
        } else {
            player_1 = "";
            player_2 = "";
        }
    } while(!playerNamesSet);

    cout << "Players are now set. Initializing Board..." << endl;

    // There are 9 squares on a TTT Board [A1-A3, B1-B3, C1-C3]
    enum {TTTS_BLANK = 0, TTTS_O = 1, TTTS_X = 2};
    int board_position;

    // Board Values
    int maxAllowableMoves = 9;
    int a1 = 0, a2 = 0, a3 = 0;
    int b1 = 0, b2 = 0, b3 = 0;
    int c1 = 0, c2 = 0, c3 = 0;

    bool gameStarted = false;
    bool gameover = false;
    int startGame = 2;
    do {
        cout << "Are you ready to start the game? 1 - Yes / 2 - No" << endl;
        cin >> startGame;
        if (startGame == 1) {
            gameStarted = true;
        }
    } while(!gameStarted);

    cout << "Game & Board Values Initialized..." << endl;

    while(!gameover) {
        for (int i = 1; i <= maxAllowableMoves; i += 1) {

        }
        gameover = gameOver();
    }



/*    if (board_position == TTTS_O) {
        // Some Code
    }*/

}

int main() {
    // Game Menu
    int gameInput = 0;

    cout << "Welcome, here is the game menu:" << endl;
    cout << "1. Tic-Tac-Toe" << endl;
    cout << "0 To Exit Program" << endl;
    cin >> gameInput;

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



/* File Corresponds To Chapter 8 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Chapter Overview
 * => Randomness
 * */
/*
#include <iostream>
#include <string>

using namespace std;

int main() {
     return 0;
}
*/
