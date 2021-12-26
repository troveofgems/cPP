/* File Corresponds To Chapter 8 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 4
 *  Make a "slot machine" game that randomly displays the results of a slot machine to a player. Have three or more
 *  possible values for each wheel of the machine. Don't worry about the spinning aspect. Just choose the results
 *  and display them and print out the winnings (choose your own winning combos)
 * */
#include <iostream>
#include <random>
using namespace std;

int handlePayout(int wheelValue, int modifier) {
    int payout  = wheelValue * modifier;
    cout << "Congratulations!! You've won! Your Payout was: " << endl << endl;
    cout << wheelValue << ", " << modifier << endl;
    cout << "!!!!!!!!!!! $" << payout << ".00!!!!!!!!!!!!!!!!!!!!!" << endl;
    return payout;
}

int pullTheLever() {
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1.0,4.0);
    // Wheel 1
    int slot_wheel_1a = int(dist(mt));
    int slot_wheel_1b = int(dist(mt));
    int slot_wheel_1c = int(dist(mt));
    // Wheel 2
    int slot_wheel_2a = int(dist(mt));
    int slot_wheel_2b = int(dist(mt));
    int slot_wheel_2c = int(dist(mt));
    // Wheel 3
    int slot_wheel_3a = int(dist(mt));
    int slot_wheel_3b = int(dist(mt));
    int slot_wheel_3c = int(dist(mt));

    // Visually Represent the Machine
    cout << "-------------" << endl;
    cout << "| " << slot_wheel_1a << " | " << slot_wheel_2a << " | " << slot_wheel_3a << " |" << endl;
    cout << "| " << slot_wheel_1b << " | " << slot_wheel_2b << " | " << slot_wheel_3b << " |" << endl;
    cout << "| " << slot_wheel_1c << " | " << slot_wheel_2c << " | " << slot_wheel_3c << " |" << endl;
    cout << "-------------" << endl;

    bool vertical_wheel_1_win = ((slot_wheel_1a == slot_wheel_1b) && (slot_wheel_1b == slot_wheel_1c));
    bool vertical_wheel_2_win = ((slot_wheel_2a == slot_wheel_2b) && (slot_wheel_2b == slot_wheel_2c));
    bool vertical_wheel_3_win = ((slot_wheel_3a == slot_wheel_3b) && (slot_wheel_3b == slot_wheel_3c));

    bool horizontal_wheel_1_win = ((slot_wheel_1a == slot_wheel_2a) && (slot_wheel_2a == slot_wheel_3a));
    bool horizontal_wheel_2_win = ((slot_wheel_1b == slot_wheel_2b) && (slot_wheel_2b == slot_wheel_3b));
    bool horizontal_wheel_3_win = ((slot_wheel_1c == slot_wheel_2c) && (slot_wheel_2c == slot_wheel_3c));

    bool diag_1_win = ((slot_wheel_1a == slot_wheel_2b) && (slot_wheel_2b == slot_wheel_3c));
    bool diag_2_win = ((slot_wheel_1c == slot_wheel_2b) && (slot_wheel_2b == slot_wheel_3a));

    bool fullBoardWin = (
            vertical_wheel_1_win && vertical_wheel_2_win && vertical_wheel_3_win &&
            horizontal_wheel_1_win && horizontal_wheel_2_win && horizontal_wheel_3_win
    );

    cout << "vertical_wheel_1_win " << vertical_wheel_1_win << endl;
    cout << "vertical_wheel_2_win " << vertical_wheel_2_win << endl;
    cout << "vertical_wheel_3_win " << vertical_wheel_3_win << endl;

    cout << "horizontal_wheel_1_win " << horizontal_wheel_1_win << endl;
    cout << "horizontal_wheel_2_win " << horizontal_wheel_2_win << endl;
    cout << "horizontal_wheel_3_win " << horizontal_wheel_3_win << endl;

    cout << "diag1_win " << diag_1_win << endl;
    cout << "diag2_win " << diag_2_win << endl;

    cout << "fullboard_win " << fullBoardWin << endl;

    int winnings = 0;
    if (fullBoardWin) {
        winnings = handlePayout(slot_wheel_1a, 7);
    } else if (diag_1_win) {
        winnings = handlePayout(slot_wheel_1a, 4);
    } else if (diag_2_win) {
        winnings = handlePayout(slot_wheel_1c, 4);
    } else if (horizontal_wheel_3_win) {
        winnings = handlePayout(slot_wheel_1c, 3);
    } else if (horizontal_wheel_2_win) {
        winnings = handlePayout(slot_wheel_1b, 3);
    } else if (horizontal_wheel_1_win) {
        winnings = handlePayout(slot_wheel_1a, 3);
    } else if (vertical_wheel_3_win) {
        winnings = handlePayout(slot_wheel_3a, 3);
    } else if (vertical_wheel_2_win) {
        winnings = handlePayout(slot_wheel_2a, 3);
    } else if (vertical_wheel_1_win) {
        winnings = handlePayout(slot_wheel_1a, 3);
    }
    return winnings;
}

int main() {
    cout << "Welcome To The Slot Machine Program" << endl;
    bool userSittingDown = true;
    int user_winnings_pot = 50;
    while (userSittingDown) {
        int input;
        cout << endl << endl;
        cout << "Your Current Pot: $" << user_winnings_pot << ".00" << endl;
        cout << "Would you like to pull the lever for 5$? 1 - Yes, 2 - No, cash out" << endl;
        cin >> input;
        if (input == 1) {
            int userPullValue = pullTheLever();
            int new_pot = ((user_winnings_pot - 5) + userPullValue);
            user_winnings_pot = new_pot;
            if (user_winnings_pot <= 0) {
                userSittingDown = false;
                int deficit = abs(user_winnings_pot);
                if (deficit == 0) {
                    cout << "Ouch!! You've lost all your money!" << endl;
                } else {
                    cout << "Ouch!! You've lost all your money! And possibly owe the house: $" << deficit
                         << ".00...run!!!" << endl;
                };
            }
        } else if (input == 2) {
            userSittingDown = false;
            cout << "You've walked away with $" << user_winnings_pot << ".00, how fun!!" << endl;
        }
    }
    return 0;
}