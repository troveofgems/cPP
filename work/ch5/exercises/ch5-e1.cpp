/* File Corresponds To Chapter 5 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 1
 *  Write a program that prints out the entire lyrics to a full rendition of '99 Bottles Of Beer'
 *
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    // x Bottle(s) of beer on the wall, x Bottle(s) of Beer,
    // Take one (it) down, pass it around, x-1 Bottles of Beer on the wall.

    // We are going to run the loop 99 times. Use a For Loop
    for (int bottlesOfBeer = 99; bottlesOfBeer > 0; bottlesOfBeer--) {

        bool penultimateBottle = bottlesOfBeer == 2;
        bool lastLonelyBottle = bottlesOfBeer == 1;

        string bottle_label_1 = "Bottles";
        string genericSpecifier = "one";
        string bottle_label_2 = bottle_label_1;

        if (penultimateBottle) { // penultimate bottle
            bottle_label_2 = "Bottle";
        } else if (lastLonelyBottle) { // lastLonelyBottle
            bottle_label_1 = "Bottle";
            genericSpecifier = "it";
        }

        cout << bottlesOfBeer << " " << bottle_label_1 << " of beer on the wall, " << bottlesOfBeer << " " << bottle_label_1 << " of Beer," << endl;
        cout << "Take " << genericSpecifier << " down, pass it around, " << bottlesOfBeer - 1 << " " << bottle_label_2 << " of Beer on the wall.";
        cout << endl << endl;
    }
    return 0;
}
