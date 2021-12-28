/* File Corresponds To Chapter 9 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Chapter Overview
 * => What if you can't figure out what to do?
 * */
#include <iostream>
#include <string>

using namespace std;

bool isPrime(int number);
bool isDivisible(int number, int divisor);

int main() {
    // The purpose of this chapter is to guide users on how to break problems down into smaller,
    // more manageable pieces in order to complete an objective. For Example, Printing all prime numbers from 1-100
    for (int i = 0; i < 100; i += 1) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}

bool isPrime(int number) {
    for (int i = 2; i < number; i += 1) {
        if (isDivisible(number, i)) {
            return false;
        }
    }
    return true;
}

bool isDivisible(int number, int divisor) {
    return ((number % divisor) == 0);
}