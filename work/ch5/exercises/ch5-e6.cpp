/* File Corresponds To Chapter 5 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 6
 *  Write a program that displays the first 20 square numbers
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int i = 0; i <= 20; i += 1) {
        cout << "The square of " << i << " is " << i * i << endl;
    }
    return 0;
}
