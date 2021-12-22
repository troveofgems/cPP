/* File Corresponds To Chapter 4 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Chapter Overview
 * => If Statements
 * */
#include <iostream>
#include <string>

using namespace std;

int main() {
    // IF STATEMENTS
    // Two styles of If Syntax
    bool trueVal = true;
    bool falseVal = false;
    if (trueVal) cout << "This statement will run. We Are Not Inside An If Block." << endl; // Single Statement Execution
    if (falseVal) { // Multi Statement Execution
        cout << "This statement will NOT run. But it is inside an If Block." << endl;
    }

    /***** CONSIDER *******************/
    if (5 < 10) {
        cout << "Five is less than Ten. Shocker!" << endl;
        cout << "This line wouldn't be possible without if-block declaration." << endl;
    }
    /***** VERSUS *******************/
    if (5 < 10)
        cout << "Five is less than Ten. Shocker!" << endl;
    cout << "This line will run regardless of the if condition because it's not block scoped as in the example above." << endl;

    /**TAKE AWAY**/
    // Always use if {} blocked statements. It's easier for readability and quicker debugging

    // EXPRESSIONS
    int userEnteredNumber = 0;
    bool userEnteredTwo;
    cout << "Enter a number " << endl;
    cin >> userEnteredNumber;

    if (userEnteredNumber < 10) {
        cout << "You have entered a value less than 10: " << userEnteredNumber << endl;
    }

    userEnteredTwo = userEnteredNumber == 2;
    if (userEnteredTwo) {
        cout << "You specifically chose the number 2" << endl;
    }

    // Relational Operators In C++
    // > greater than
    // < less than
    // >= greater than or equal to
    // <= less than or equal to
    // == equal to
    // != not equal to
    // The result of all comparison operators is a boolean**

    double someUserEnteredNumber = 0;
    cout << "Please Enter Another Number. Testing for Neg/0/Pos values" << endl;
    cin >> someUserEnteredNumber;

    if (someUserEnteredNumber == 0) {
        cout << "The number you entered is 0 exactly" << endl;
    } else if (someUserEnteredNumber < 0) {
        cout << "You've entered a negative number" << endl;
    } else if (someUserEnteredNumber > 0) {
        cout << "You've entered a positive number" << endl;
    }

    // Test a password
    string my_pwd;
    cout << "Enter Your Password: " << endl;
    cin >> my_pwd;
    if (my_pwd == "xyzzy") {
        cout << "Successfully Logged In" << endl;
    } else {
        cout << "Bzzt! Wrong Password" << endl;
        return 0;
    }

    // Boolean Ops OOP
    // !
    // ==, <, >, <=, >=, !=
    // &&
    // ||

    if (!0) {
        cout << "Results to True" << endl;
    }

    if (!1) {
        cout << "Results to False" << endl;
    }

    // Short Circuiting
    int x;
    cout << "Please Provide an integer value for x" << endl;
    cin >> x;
    if (x != 0 && 10 / x < 2) { // If 0, the rest of the statement will not be run.
        cout << "10 / x is less than 2" << endl;
    }

    // Boolean Conditionals
    if (1 && 2) {
        cout << "This runs, 1 and 2 exist." << endl;
    }
    if (1 || 2) {
        cout << "Check for 2 is short circuited" << endl;
    }

    cout << "Completed Run" << endl;
    return 0;
}
