/* File Corresponds To Chapter 4 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 2
 *  Write a program that receives a password in the form of a number. Set two numbers to be valid, then use a single
 *  statement to short-circuit the checks.
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int password_1 = 1008008;
    int password_2 = 8001001;
    int userEnteredPassword = 0;

    cout << "Password Confirmation Program" << endl << endl;
    cout << "Please Enter In Your Password" << endl;
    cin >> userEnteredPassword;

    if (userEnteredPassword == password_1 || userEnteredPassword == password_2) {
        cout << "Password Confirmed. Welcome User" << endl;
    } else {
        cout << "Invalid Password. Program Terminated. Please Try Again." << endl;
        return 1;
    }

    return 0;
}
