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

void setGameover(int player) {
    if (player == 1) {
        cout << "Player 1 Wins" << endl;
    } else if (player == 2) {
        cout << "Player 2 Wins" << endl;
    }
    gameOver();
}

void checkForWinningCombo(int a1, int a2, int a3, int b1, int b2, int b3, int c1, int c2, int c3) {
    //1, 4, 7 = (a1 == b1 == c1)
    //2, 5, 8 = (a2 == b2 == c2)
    //3, 6, 9 = (a3 == b3 == c3)

    //1, 2, 3 = (a1 == a2 == a3)
    //4, 5, 6 = (b1 == b2 == b3)
    //7, 8, 9 = (c1 == c2 == c3)

    //1, 5, 9 = (a1 == b2 == c3)
    //3, 5, 7 = (a3 == b2 == c1)
    if (a1 != 0 && (a1 == b1 == c1)) setGameover(a1);
    if (a2 != 0 && (a2 == b2 == c2)) setGameover(a2);
    if (a3 != 0 && (a3 == b3 == c3)) setGameover(a3);

    if (b1 != 0 && (a1 == a2 == a3)) setGameover(b1);
    if (b2 != 0 && (b1 == b2 == b3)) setGameover(b2);
    if (b3 != 0 && (c1 == c2 == c3)) setGameover(b3);

    if (c1 != 0 && (a1 == b2 == c3)) setGameover(c1);
    if (c2 != 0 && (a3 == b2 == c1)) setGameover(c2);
    if (c3 != 0 && (a3 == b2 == c1)) setGameover(c3);
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

    // Board Values
    int maxAllowableMoves = 9;
    int a1 = 0, a2 = 0, a3 = 0;
    int b1 = 0, b2 = 0, b3 = 0;
    int c1 = 0, c2 = 0, c3 = 0;
    // There are 8 possible winning combinations

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
        for (int i = 1; i <= maxAllowableMoves + 1; i += 1) {
            bool player1Turn = i % 2 == 1;
            bool player2Turn = i % 2 == 0;
            if (player2Turn) {
                int board_position = 0;
                cout << player_2 << "'s Turn" << endl;

                // Print the board
                cout << "Current Game Board" << endl;
                cout << "-------------" << endl;
                cout << "| " << a1 << " | " << a2 << " | " << a3 << " | " << endl;
                cout << "| " << b1 << " | " << b2 << " | " << b3 << " | " << endl;
                cout << "| " << c1 << " | " << c2 << " | " << c3 << " | " << endl;
                cout << "-------------" << endl;

                cout << "Which square would you like to select?" << endl;
                // Print the board
                cout << "-------------" << endl;
                cout << "| 1 | 2 | 3 | " << endl;
                cout << "| 4 | 5 | 6 | " << endl;
                cout << "| 7 | 8 | 9 |" << endl;
                cout << "-------------" << endl;
                cin >> board_position;
                switch(board_position) {
                    case 1:
                        if (a1 == TTTS_BLANK) {
                            a1 = TTTS_X;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 2:
                        if (a2 == TTTS_BLANK) {
                            a2 = TTTS_X;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 3:
                        if (a3 == TTTS_BLANK) {
                            a3 = TTTS_X;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 4:
                        if (b1 == TTTS_BLANK) {
                            b1 = TTTS_X;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 5:
                        if (b2 == TTTS_BLANK) {
                            b2 = TTTS_X;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                        break;
                    case 6:
                        if (b3 == TTTS_BLANK) {
                            b3 = TTTS_X;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 7:
                        if (c1 == TTTS_BLANK) {
                            c1 = TTTS_X;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 8:
                        if (c2 == TTTS_BLANK) {
                            c2 = TTTS_X;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 9:
                        if (c3 == TTTS_BLANK) {
                            c3 = TTTS_X;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    default:
                        cout << "Invalid Selection Made" << endl;
                        break;
                }
                checkForWinningCombo(a1, a2, a3, b1, b2, b3, c1, c2, c3);
            } else if (player1Turn) {
                int board_position = 0;
                cout << player_1 << "'s Turn" << endl;

                // Print the board
                cout << "Current Game Board" << endl;
                cout << "-------------" << endl;
                cout << "| " << a1 << " | " << a2 << " | " << a3 << " | " << endl;
                cout << "| " << b1 << " | " << b2 << " | " << b3 << " | " << endl;
                cout << "| " << c1 << " | " << c2 << " | " << c3 << " | " << endl;
                cout << "-------------" << endl;

                cout << "Which square would you like to select?" << endl;
                // Print the board
                cout << "-------------" << endl;
                cout << "| 1 | 2 | 3 | " << endl;
                cout << "| 4 | 5 | 6 | " << endl;
                cout << "| 7 | 8 | 9 |" << endl;
                cout << "-------------" << endl;
                cin >> board_position;

                // Winning Combinations
                //1, 4, 7 = (a1 == b1 == c1)
                //2, 5, 8 = (a2 == b2 == c2)
                //3, 6, 9 = (a3 == b3 == c3)
                //1, 2, 3 = (a1 == a2 == a3)
                //4, 5, 6 = (b1 == b2 == b3)
                //7, 8, 9 = (c1 == c2 == c3)
                //1, 5, 9 = (a1 == b2 == c3)
                //3, 5, 7 = (a3 == b2 == c1)



                switch(board_position) {
                    case 1:
                        if (a1 == TTTS_BLANK) {
                            a1 = TTTS_O;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 2:
                        if (a2 == TTTS_BLANK) {
                            a2 = TTTS_O;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 3:
                        if (a3 == TTTS_BLANK) {
                            a3 = TTTS_O;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 4:
                        if (b1 == TTTS_BLANK) {
                            b1 = TTTS_O;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 5:
                        if (b2 == TTTS_BLANK) {
                            b2 = TTTS_O;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                        break;
                    case 6:
                        if (b3 == TTTS_BLANK) {
                            b3 = TTTS_O;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 7:
                        if (c1 == TTTS_BLANK) {
                            c1 = TTTS_O;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 8:
                        if (c2 == TTTS_BLANK) {
                            c2 = TTTS_O;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    case 9:
                        if (c3 == TTTS_BLANK) {
                            c3 = TTTS_O;
                            break;
                        } else {
                            cout << "Invalid Selection Made" << endl;
                            break;
                        }
                    default:
                        cout << "Invalid Selection Made" << endl;
                        break;
                }
                checkForWinningCombo(a1, a2, a3, b1, b2, b3, c1, c2, c3);
            }
        }
        gameover = gameOver();
    }
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
