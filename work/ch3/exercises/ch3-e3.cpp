/* File Corresponds To Chapter 3 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 3
 *  Write a program that reads in two numbers and uses division to compute an EXACT result.
 * */

#include <iostream>

using namespace std;

int main() {
    double firstNumber, secondNumber;

    cout << "Please Provide Your First Number" << endl;
    cin >> firstNumber;

    cout << "Please Provide Your Second Number To Divide By " << firstNumber << ":" << endl;
    cin >> secondNumber;

    double test = (firstNumber / secondNumber);

    cout << firstNumber << " / " << secondNumber << " = " << test << endl;
    return 0;
}
