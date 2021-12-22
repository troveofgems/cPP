/* File Corresponds To Chapter 4 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 1
 *  Write a program that asks for two users' ages. Indicate who is older, and behave differently if BOTH users are over
 *  the age of 100.
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    bool firstUserIsOlder = false;
    bool secondUserIsOlder = false;
    bool agesAreTheSame = false;
    bool firstUserIsACentennial = false;
    bool secondUserIsACentennial = false;
    bool bothUsersAreCentennials = false;

    int first_users_age = 0;
    int second_users_age = 0;

    cout << "Age Checker Program" << endl << endl;
    // User 1 Age
    cout << "What is the first user's age? " << endl;
    cin >> first_users_age;

    // User 2 Age
    cout << "What is the second user's age? " << endl;
    cin >> second_users_age;

    agesAreTheSame = (first_users_age == second_users_age);
    firstUserIsACentennial = first_users_age >= 100;
    secondUserIsACentennial = second_users_age >= 100;
    firstUserIsOlder = first_users_age > second_users_age;
    secondUserIsOlder = second_users_age > first_users_age;
    bothUsersAreCentennials = firstUserIsACentennial && secondUserIsACentennial;

    if (bothUsersAreCentennials) {
        cout << "Wow!! Both of your are soooooooooooooo old!" << endl;

        if (agesAreTheSame) {
            cout << "And super wow!! You're both the same age!!" << endl;
        } else if (!agesAreTheSame && firstUserIsOlder) {
            cout << "The First User Is Older Than The Second User" << endl;
        } else if (!agesAreTheSame && secondUserIsOlder) {
            cout << "The Second User Is Older Than THe First User" << endl;
        } else {
            cout << "Something went wrong, please contact the admin." << endl;
            return 1;
        }
    } else if (firstUserIsOlder) {
        cout << "The First User Is Older Than The Second User" << endl;
    } else if (secondUserIsOlder) {
        cout << "The Second User Is Older Than THe First User" << endl;
    } else {
        cout << "Something went wrong, please contact the admin." << endl;
        return 1;
    }
    return 0;
}
