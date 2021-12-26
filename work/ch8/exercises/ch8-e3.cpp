/* File Corresponds To Chapter 8 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 3
 *  Modify the program from the last exercise to solve itself. Message out how many runs it needed once complete.
 * */
#include <iostream>
#include <random>
using namespace std;

int main() {
    cout << "Welcome To The Number Guessing Program. Automated..." << endl;
    cout << "The selected number is:" << endl;
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1.0,101.0);

    int master_rgn = int(dist(mt));
    int automatedGuesses = 0;
    int automated_guess;
    bool guessCorrect = false;
    cout << master_rgn << endl;

    while(!guessCorrect) {
        automated_guess = int(dist(mt));
        if (automated_guess == master_rgn) {
            guessCorrect = true;
            cout << "It took " << automatedGuesses << " rounds to guess correctly." << endl;
        } else {
            automatedGuesses++;
        }
    }

    return 0;
}