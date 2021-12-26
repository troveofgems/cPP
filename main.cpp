/* File Corresponds To Chapter 8 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Chapter Overview
 * => Randomness
 * */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    // Truly random numbers can be hard for a computer to generate, however, C++ offers a way of quickly
    // generating pseudo-random values. In order to do so, a seed must be supplied and called once, then the rand()
    // may be called as necessary. The time() is generally supplied as the seed.

    cout << "Attempt Random Number Generator: " << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    return 0;
}
