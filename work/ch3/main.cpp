/* File Corresponds To Chapter 3 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Chapter Overview
 *  => User Interactivity & Variables
 * */
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Common Variable Types
    int whole_number;
    char letter;
    double number_with_decimals;

    // Declaring a list of vars of the same type
    int a, b, c, d; // => Not Recommended, Readability Issues

    // To Get User Input, use cin(). Example (1):
    int userEnteredInteger;
    cout << "Please Enter An Integer For The Program" << endl;
    cin >> userEnteredInteger;

    // Example 1 COUT
    cout << "The User Has Entered The Integer: " << userEnteredInteger << endl;

    // Assignment
    cout << "PRE-ASSIGNMENT" << endl;
    cout << "a: " << (a) << endl;
    cout << "b: " << (b) << endl;
    cout << "c: " << (c) << endl;
    cout << "d: " << (d) << endl;
    a = 1;
    b = 3;
    c = 5;
    d = 1;
    cout << "POST-ASSIGNMENT" << endl;
    cout << "a: " << (a) << endl;
    cout << "b: " << (b) << endl;
    cout << "c: " << (c) << endl;
    cout << "d: " << (d) << endl;

    // Comparison
    cout << "COMPARISON" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "b == c: " << (b == c) << endl;
    cout << "c == d: " << (c == d) << endl;
    cout << "d == a: " << (d == a) << endl;

    // Basic Arithmetic
    cout << "BASIC ARITHMETIC" << endl;
    cout << "a + b: " << (a+b) << endl;
    cout << "b - c: " << (b-c) << endl;
    cout << "c * d: " << (c*d) << endl;
    cout << "d / a: " << (d/a) << endl;

    // Basic Arithmetic Shorthand
    cout << "SHORTHAND ARITHMETIC" << endl;
    cout << "a += a: " << (a += a) << endl;
    cout << "b -= b: " << (b -= b) << endl;
    cout << "c *= c: " << (c *= c) << endl;
    cout << "d /= a: " << (d /= a) << endl;

    // INCREMENT/DECREMENTS
    int incStart = 0;
    cout << "INCREMENT/DECREMENTS" << endl;
    cout << "Post-Increment a++: " << (incStart++) << endl;
    cout << "Pre-Increment ++a: " << (++incStart) << endl;
    cout << "Pre-Decrement --a: " << (--incStart) << endl;
    cout << "Post-Decrement a--: " << (incStart--) << endl;

    // c++ variables are case sensitive, and naming is important.
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;

    val1 = val2 * val3; // No one knows what this is

    // More descriptive naming conventions
    int area = 0;
    int width = 3;
    int height = 4;

    area = width * height; // Suddenly this becomes a formula for getting the area of a square.

    cout << "Area of the square is: " << area;

    // Storing Strings
    string my_string;
    my_string = "Hello World From A String Variable";

    cout << my_string;

    return 0;
}
