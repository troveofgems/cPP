/* File Corresponds To Chapter 6 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 3
 *  Modify the password program from before to put all the password checking login into a separate function,
 *  apart from the rest of the program.
 * */

#include <iostream>
#include <string>

using namespace std;

bool checkPassword(const string& pwd, int maxAttempts) {
    return pwd != "youShallNotPass01" && maxAttempts != 0;
}

int main() {
    string password;
    int maxAttempts = 3;
    do {
        cout << maxAttempts << " tries left. " << "Please enter your password: " << endl;
        cin >> password;
        maxAttempts--;
    } while (checkPassword(password, maxAttempts));
    return 0;
}
