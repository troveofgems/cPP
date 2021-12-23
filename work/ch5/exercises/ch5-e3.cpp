/* File Corresponds To Chapter 5 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 3
 *  Write a program that computes a running sum of inputs from the user, terminating when the user gives an
 *  input value of 0
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int runningSum = 0;
    int userEnteredValue = 1;
    bool endProgram = false;

    while (!endProgram) {
        cout << "Enter 0 To Exit The Program, otherwise, select an integer to add" << endl;
        cin >> userEnteredValue;
        if (userEnteredValue == 0) {
            endProgram = true;
        } else {
            runningSum += userEnteredValue;
            cout << "The Running Sum Is: " << runningSum << endl;
        }
    }
    return 0;
}
