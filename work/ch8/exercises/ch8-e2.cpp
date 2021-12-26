/* File Corresponds To Chapter 8 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 2
 *  Write a program that picks a number between 1 and 100 then let the user guess what the number is.
 *  Tell the user if they are too high, too low, or just right on the guess.
 * */
#include <iostream>
#include <random>
using namespace std;

int main() {
    cout << "Welcome To The Number Guessing Program. 1 Guess Only." << endl;
    cout << "Pick a number between 1 and 100:" << endl;
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1.0,101.0);

    int rgn = int(dist(mt));
    int input = 1;
    cin >> input;

    if (input == rgn) {
        cout << "Woah Go Buy A Lotto Ticket!! You got this one right!!" << endl;
    } else if (input > rgn) {
        cout << "Your guess was a bit too high there buddy...better luck next time!" << endl;
    } else if (input < rgn ) {
        cout << "Your guess was a bit too low there buddy...better luck next time!" << endl;
    } else {
        cout << "Error: Invalid Value Supplied" << endl;
    }

    return 0;
}