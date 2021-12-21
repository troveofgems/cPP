/* File Corresponds To Chapter 3 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 1
 *  Write a program that prints your name
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string username = "";

    cout << "Hello there, what is your name?" << endl;
    cin >> username;

    string output = "It's nice to meet you " + username;

    cout << output << endl;
    return 0;
}
