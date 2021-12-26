/* File Corresponds To Chapter 8 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Chapter Overview
 * => Randomness
 * */
#include <iostream>
#include <string>
//#include <cstdlib> // Old Way
//#include <ctime> // Old Way
#include <random>

using namespace std;

/*int randRange(int low, int high) { // Old Way
    return rand() % (high - low + 1) + low;
}*/

int main() {
/*    srand(time(NULL));*/ // Old Way
    // Truly random numbers can be hard for a computer to generate, however, C++ offers a way of quickly
    // generating pseudo-random values. In order to do so, a seed must be supplied and called once, then the rand()
    // may be called as necessary. The time() is generally supplied as the seed.

/*    cout << "Attempt Random Number Generator: " << endl;
    cout << rand() << endl;
    cout << rand() << endl;*/

    // It's possible to limit the return values by creating a custom randomRange function. If this isn't done,
    // the min default possible value is 32676. The computer will generally generate far greater numbers.
    // On init run: 1854552121 & 571031481 were returned.
    // Example using Range:
/*    for (int i = 0; i < 1000; i += 1) {
        cout << randRange(0, 1000) << endl;
    }*/

    // Bugs and Randomness
    /*
     * To test bugs in your code when you have random values, you can disable the srand() which will
     * result in the rand() returning the same values. What if you can't turn off the call to srand()?
     * save the seed value each time the program is run, then if you find a bug you can change YOUR debug program
     * to the same random seed that allowed you to find the bug in the first place.
     * Example:
     * int srand_seed = 3543000;
     * cout << srand_seed << endl;
     * srand(srand_seed);
     * */

    /*************************************/
    /*********** ~2022 Update ************/
    /*************************************/
    // Stephan T Lavavej(stl) suggests the new C++11 random functions and suggests the rand() is dangerous.

    // We now use random_device once to seed the random number generator named mt. random_device() is slower than
    // mt199937 but does not need to be seeded because it requests random data from your operating system
    // which in turn sources data from various locations like rdrand...

    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1.0, 10.0);

    for (int i = 0; i < 200; i += 1) {
        cout << dist(mt) << endl;
    }

    return 0;
}
