/* File Corresponds To Chapter 8 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 1
 *  Write a program that simulates a coin flip. Run it many times, do the results look random? Yep!
 * */
#include <iostream>
#include <string>
#include <random>
using namespace std;

int main() {
    cout << "Welcome To The Coin Toss Program. 10 Auto Tosses" << endl;
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(0,1);

    for (int i = 0; i < 10; i += 1) {
        bool coinTossResult = dist(mt) >= 0.5;
        string tossResult = "tails";
        if (coinTossResult == 1) tossResult = "heads";
        cout << "Coin Toss #" << i + 1 << ": " << tossResult << endl;
    }
    return 0;
}