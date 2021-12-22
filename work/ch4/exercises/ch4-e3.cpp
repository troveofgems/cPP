/* File Corresponds To Chapter 4 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 3
 *  Write a program that implements a small calculator that takes as input: the arithmetic type and two values, then
 *  prints the result to the screen.
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string arithmeticType;
    arithmeticType = "";
    double value_1, value_2;
    value_1 = 0;
    value_2 = 0;

    cout << "What you like like to do? Addition (+), Subtraction (-), Multiplication (*), or Division (/). Use The Symbol." << endl << endl;
    cin >> arithmeticType;

    cout << "What is the first number?" << endl;
    cin >> value_1;

    cout << "What is the second number?" << endl;
    cin >> value_2;

    if (arithmeticType == "+") {
        cout << value_1 << " + " << value_2 << " = " << value_1 + value_2 << endl;
    } else if (arithmeticType == "-") {
        cout << value_1 << " - " << value_2 << " = " << value_1 - value_2 << endl;
    } else if (arithmeticType == "*") {
        cout << value_1 << " * " << value_2 << " = " << value_1 * value_2 << endl;
    } else if (arithmeticType == "/") {
        cout << value_1 << " / " << value_2 << " = " << value_1 / value_2 << endl;
    } else {
        cout << "Invalid command supplied." << endl;
        return 1;
    }
    return 0;
}
