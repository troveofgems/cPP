/* File Corresponds To Chapter 7 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 2
 *  Write a program that outputs all the lyrics of the Twelve Days Of Christmas using switch-case.
 *  Be sure to take advantage of fall-through cases.
 * */
#include <iostream>
#include <string>

using namespace std;

int main() {
    for(int daysOfChristmas = 1; daysOfChristmas <= 12; daysOfChristmas += 1) {
        bool firstDayOfChristmas = daysOfChristmas == 1;

        switch(daysOfChristmas) {
            case 12:
                if (daysOfChristmas == 12) cout << "On the twelfth day of Christmas my true love sent to me" << endl;
                cout << "Twelve lords a leaping," << endl;
            case 11:
                if (daysOfChristmas == 11) cout << "On the eleventh day of Christmas my true love sent to me" << endl;
                cout << "Eleven ladies dancing," << endl;
            case 10:
                if (daysOfChristmas == 10) cout << "On the tenth day of Christmas my true love sent to me" << endl;
                cout << "Ten pipers pipping," << endl;
            case 9:
                if (daysOfChristmas == 9) cout << "On the ninth day of Christmas my true love sent to me" << endl;
                cout << "Nine drummers drumming," << endl;
            case 8:
                if (daysOfChristmas == 8) cout << "On the eighth day of Christmas my true love sent to me" << endl;
                cout << "Eight maids a milking," << endl;
            case 7:
                if (daysOfChristmas == 7) cout << "On the seventh day of Christmas my true love sent to me" << endl;
                cout << "Seven swans a swimming," << endl;
            case 6:
                if (daysOfChristmas == 6) cout << "On the sixth day of Christmas my true love sent to me" << endl;
                cout << "Six geese a laying," << endl;
            case 5:
                if (daysOfChristmas == 5) cout << "On the fifth day of Christmas my true love sent to me" << endl;
                cout << "Five gold rings," << endl;
            case 4:
                if (daysOfChristmas == 4) cout << "On the fourth day of Christmas my true love sent to me" << endl;
                cout << "Four colly birds," << endl;
            case 3:
                if (daysOfChristmas == 3) cout << "On the third day of Christmas my true love sent to me" << endl;
                cout << "Three french hens," << endl;
            case 2:
                if (daysOfChristmas == 2) cout << "On the second day of Christmas my true love sent to me" << endl;
                cout << "Two turtle doves," << endl;
            case 1:
                if (firstDayOfChristmas) {
                    cout << "On the first day of Christmas my true love sent to me" << endl;
                    cout << "A partridge in a pear tree." << endl << endl;
                    break;
                } else {
                    cout << "And a partridge in a pear tree." << endl << endl;
                    break;
                }
                break;
            default:
                cout << "Something went wrong..." << endl;
                break;
        }
    }
    return 0;
}