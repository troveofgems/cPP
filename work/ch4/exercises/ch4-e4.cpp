/* File Corresponds To Chapter 4 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 4
 *  Write a program that expands the password checker written in example 1 to take multiple usernames and
 *  passwords, then perform a check to see if they were correct. Provide the ability to prompt users again for the
 *  correct password when an incorrect one is given. Think about the level of difficulty in implementing this.
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int maxPwdAttempts = 3;
    int pwdAttempts = 0;
    string user_1_login = "admin01";
    string user_2_login = "regUser01";
    int user_1_password = 1008008;
    int user_2_password = 8001001;
    string userEnteredUsername = "";
    int userEnteredPassword = 0;

    cout << "Password Confirmation Program" << endl << endl;
    cout << "Please Enter In Your Username" << endl;
    cin >> userEnteredUsername;
    cout << "Please Enter In Your Password" << endl;
    cin >> userEnteredPassword;

    if (
            (userEnteredUsername == "admin01" && userEnteredPassword == user_1_password) ||
            (userEnteredUsername == "user01" && userEnteredPassword == user_2_password)
            ) {
        cout << "Password Confirmed. Welcome User" << endl;
    } else {
        ++pwdAttempts;
        if (pwdAttempts < maxPwdAttempts) {
            cout << "Please Try Again." << maxPwdAttempts - pwdAttempts << " tries left." << endl;
            cin >> userEnteredPassword;
            if (
                    (userEnteredUsername == "admin01" && userEnteredPassword == user_1_password) ||
                    (userEnteredUsername == "user01" && userEnteredPassword == user_2_password)
                    ) {
                cout << "Password Confirmed. Welcome User" << endl;
            } else {
                ++pwdAttempts;
                if (pwdAttempts < maxPwdAttempts) {
                    cout << "Please Try Again." << maxPwdAttempts - pwdAttempts << " tries left." << endl;
                    cin >> userEnteredPassword;
                    if (
                            (userEnteredUsername == "admin01" && userEnteredPassword == user_1_password) ||
                            (userEnteredUsername == "user01" && userEnteredPassword == user_2_password)
                            ) {
                        cout << "Password Confirmed. Welcome User" << endl;
                    } else {
                        ++pwdAttempts;
                        if (pwdAttempts < maxPwdAttempts) {
                            cout << "Please Try Again." << maxPwdAttempts - pwdAttempts << " tries left." << endl;
                            cin >> userEnteredPassword;
                            if (
                                    (userEnteredUsername == "admin01" && userEnteredPassword == user_1_password) ||
                                    (userEnteredUsername == "user01" && userEnteredPassword == user_2_password)
                                    ) {
                                cout << "Password Confirmed. Welcome User" << endl;
                            }
                        } else {
                            cout << "You have exhausted all of your tries. Program Terminated." << endl;
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}