/* File Corresponds To Chapter 5 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 2
 *  Write a program that lets the user select from a list of options, and if the input is not one of the options
 *  reprint the list.
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int nextPokemon;
    // Pokemon Table Example Using Nested Looping
    cout << "1. PorygonZ" << endl;
    cout << "2. Arcanine" << endl;
    cout << "3. Kabutops" << endl;
    cout << "4. Venomoth" << endl;
    cout << "5. Vaporeon" << endl;
    cout << "6. Carbink" << endl;
    cout << endl;
    do {
        cout << "Which do you select?" << endl;
        cin >> nextPokemon;
    } while (
            nextPokemon != 1 &&
            nextPokemon != 2 &&
            nextPokemon != 3 &&
            nextPokemon != 4 &&
            nextPokemon != 5 &&
            nextPokemon != 6
            );
    return 0;
}
