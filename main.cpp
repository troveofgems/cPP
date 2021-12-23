/* File Corresponds To Chapter 5 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Chapter Overview
 * => Loops
 * */
#include <iostream>
#include <string>

using namespace std;

int main() {
    // C++ offers Loops in three (3) Flavors:
    // do-while, for, & while

    /**
     * While Loops
     * **/
    // Simplest In Structure, Infinite Looping Is A Risk
    bool someConditionRemainsTrue = true;
    while (someConditionRemainsTrue) {
        cout << "Entering A Loop..." << endl;
        cout << "Printing this line then flipping the switch for the loop to off." << endl;
        someConditionRemainsTrue = false;
    }

    // Print 0 - 9
    int whileIterator = 0;
    while (whileIterator < 10) {
        cout << "Printing " << whileIterator << endl;
        whileIterator++;
    }

    // Print 1 - 10
    int whileIterator_2 = 0;
    while (whileIterator_2 < 10) {
        whileIterator_2++;
        cout << "Printing " << whileIterator_2 << endl;
    }

    /**
    * For Loops
    * **/
    // Incredibly Versatile and convenient, if the for returns true, this can lead to an infinite loop situation.
    for (int i = 0; i < 10; i += 1) {
        cout << "The square of " << i << " is " << i * i << endl;
    }

    /**
    * Do-While Loops
    * **/
    // Special-Purpose & Fairly rare, used to run a loop AT LEAST ONCE.
    // Only loop that should be terminated with a ;
    string some_pwd;
    do
    {
        cout << "Please Enter Your Password:" << endl;
        cin >> some_pwd;
    } while (some_pwd != "foobar");
    cout << "Password Correct. Welcome" << endl;

    /**
    * Break from loops
    * **/
    // Used to exit a loop outside its regular execution processes using an infinite loop
    string some_pwd_2;
    while(true) {
        cout << "You've been trapped in an infinite loop. Please Enter Your Password to exit:" << endl;
        cin >> some_pwd_2;
        if (some_pwd_2 == "foobar") {
            break;
        }
    }
   cout << "Welcome" << endl;

    /**
    * Continue a loop
    * **/
    // Useful when you want to skip code in the middle of the body of a loop
    int continue_example = 0;
    while(true) {
        continue_example++;
        if (continue_example == 10) {
            continue;
        }
        cout << "Continue value: " << continue_example << endl;
        if (continue_example == 13) {
            break;
        }
    }

    // Multiplication Table Example Using Nested Looping
    for (int i = 0; i < 10; i++) {
        cout << "\t" << i;
    }
    cout << endl;
    for(int i = 0; i < 10; ++i) {
        cout << i;
        for (int j = 0; j < 10; ++j) {
            cout << '\t' << i * j;
        }
        cout << endl;
    }

    // Choosing The Right Kind Of Loop

    // For
    // If you know the exact number of times you want to run a loop, use this

    // While
    // If you have a complicated loop condition or have to do a lot of math to get the next value of the loop
    // variable, consider the while loop.

    // While-Do
    // If you want to do something at least once, but have the possibility of needing to loop multiple times.
    // This is not an often used structure.
}