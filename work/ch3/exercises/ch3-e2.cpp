/* File Corresponds To Chapter 3 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 2
 *  Write a program that reads in two numbers and uses addition to compute the result.
 * */

#include <iostream>

using namespace std;

int main() {
    int firstInteger, secondInteger;

    cout << "Please Provide Your First Integer" << endl;
    cin >> firstInteger;

    cout << "Please Provide Your Second Integer To Add To " << firstInteger << ":" << endl;
    cin >> secondInteger;

    cout << firstInteger << " + " << secondInteger << " = " << firstInteger+secondInteger << endl;
    return 0;
}
