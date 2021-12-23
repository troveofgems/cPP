/* File Corresponds To Chapter 5 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 4
 *  Write a program that prompts the user for a password and only allows 3 attempts.
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    int maxAttempts = 3;
    do {
        cout << maxAttempts << " tries left. " << "Please enter your password: " << endl;
        cin >> password;
        maxAttempts--;
    } while (password != "youShallNotPass01" && maxAttempts != 0);
    return 0;
}
