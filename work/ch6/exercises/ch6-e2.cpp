/* File Corresponds To Chapter 6 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 1
 *  Make the calculator program perform computations in a separate function for each type of computation.
 * */
#include <iostream>
#include <string>

using namespace std;

void song_bottlesOfBeer() {
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
}

void pokemonMessage(string selectedPokemon) {
    cout << "Go " << selectedPokemon << ", I know you can do it!" << endl;
}

void bringOutYourPokemon(int pokemon) {
    if (pokemon == 1) {
        pokemonMessage("PorygonZ");
    } else if (pokemon == 2) {
        pokemonMessage("Arcanine");
    } else if (pokemon == 3) {
        pokemonMessage("Kabutops");
    } else if (pokemon == 4) {
        pokemonMessage("Venomoth");
    } else if (pokemon == 5) {
        pokemonMessage("Vaporeon");
    } else if (pokemon == 6) {
        pokemonMessage("Carbink");
    }
}

void selectAPokemon() {
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
    return bringOutYourPokemon(nextPokemon);
}

int add(int x, int y) {
    cout << x << " + " << y << " = " << x + y;
    return 0;
}

int subtract(int x, int y) {
    cout << x << " - " << y << " = " << x - y;
    return 0;
}

int multiply(int x, int y) {
    cout << x << " * " << y << " = " << x * y;
    return 0;
}

int divide(int x, int y) {
    if (y == 0) {
        cout << "Cannot divide by 0" << endl;
    }
    cout << x << " / " << y << " = " << x / y;
    return 0;
}

int performACalculation(int calcType) {
    int x, y;
    x = 0;
    y = 0;

    cout << "What is the first number?" << endl;
    cin >> x;

    cout << "What is the second number?" << endl;
    cin >> y;

    cout << "Performing Calculation..." << endl;

    if (calcType == 1) {
        add(x, y);
    } else if (calcType == 2) {
        subtract(x, y);
    } else if (calcType == 3) {
        multiply(x, y);
    } else if (calcType == 4) {
        divide(x, y);
    }
    return 0;
}

void useCalculator() {
    int nextAction;
    // Calculator Actions Table
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << endl;
    do {
        cout << "Which type of calculation would you like to perform?" << endl;
        cin >> nextAction;
    } while (
            nextAction != 1 &&
            nextAction != 2 &&
            nextAction != 3 &&
            nextAction != 4
            );
    performACalculation(nextAction);
}

int main() {
    int nextAction;
    nextAction = 0;
    do {
        cout << "Please Select an option from the menu: " << endl;
        cout << "1. Select A Pokemon" << endl;
        cout << "2. Play 99 Bottles Of Beer Song" << endl;
        cout << "3. Use The Calculator" << endl;
        cin >> nextAction;
    } while (
            nextAction != 1 &&
            nextAction != 2 &&
            nextAction != 3
            );

    cout << "Selection Made:..." << nextAction << endl;
    if (nextAction == 1) {
        selectAPokemon();
    } else if (nextAction == 2) {
        song_bottlesOfBeer();
    } else if (nextAction == 3) {
        useCalculator();
    }

    return 0;
}