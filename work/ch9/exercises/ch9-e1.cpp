/* File Corresponds To Chapter 9 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 1
 *  Write a program that will convert a user supplied number input from -999,999 to 999,999 and output the english text.
 *  Keep it simple - No Decimals.
 * */
#include <iostream>
#include <string>

using namespace std;

string translateNumber(int number);
string setTextToNumber(int number, int separator, string textLabel);
string handlePredictableTranslations(int number, int numberLength);
string handleUnpredictableTranslations(int number);

int main() {
    int input = 0;
    string str_input;

    cout << "Welcome To Number To English Text Converter" << endl;
    cout << "Please enter a number between -999,999 and 999,999:" << endl;
    cin >> input;

    bool isZero = input == 0;
    bool isPositive = input >= 0;
    bool isNegative = input <= 0;

    if (isZero) {
        str_input = "Zero";
    } else if (isPositive) {
        str_input += "Positive ";
        str_input += translateNumber(input);
    } else if (isNegative) {
        str_input += "Negative ";
        str_input += translateNumber(abs(input));
    } else {
        cout << "Something went wrong." << endl;
        return 1;
    }
    cout << input << " resolves to" << endl << str_input << endl;
    return 0;
}

string translateNumber(int number) {
    string number_as_str = to_string(number);
    string translation;

    cout << "Work with: " << number << endl;
    cout << "String Length: " << number_as_str.length() << endl;
    bool isLessThan_20 = number < 20;

    if (isLessThan_20) {
        translation += handleUnpredictableTranslations(number);
    } else {
        int numberStrLength = number_as_str.length();
        translation += handlePredictableTranslations(number, numberStrLength);
    }

    return translation;
}

string setTextToNumber(int number, int separator, string textLabel) {
    int numberOfConcern = number / separator;
    cout << "Number of concern is: " << numberOfConcern << endl;
    string translation = handleUnpredictableTranslations(numberOfConcern);
    return translation + "-" + textLabel;
}

string handlePredictableTranslations(int number, int numberStrLength) {
    string translation;
    cout << "Inside Predictable Translations now" << numberStrLength << endl;
    switch(numberStrLength) {
        case 6: // One hundred thousand
            translation += setTextToNumber(number, 100000, "hundred thousand, ");
        case 5: // ten thousand
            translation += setTextToNumber(number, 10000, "x thousand, ");
            // This is a special case...
        case 4: // one thousand
            translation += setTextToNumber(number, 1000, "thousand, ");
        case 3: // one hundred
            cout << number << endl;
            translation += setTextToNumber(number, 10000, "hundred and ");
        case 2: // ten
            translation += handleUnpredictableTranslations(number);
            break;
        default:
            cout << "Something went wrong...hPT()" << endl;
            break;
    }
    cout << "To Return: " << translation << endl;
    return translation;
}

string handleUnpredictableTranslations(int number) {
    string number_translation = "Zero";
    switch(number) {
        case 19:
            number_translation = "Nineteen";
            break;
        case 18:
            number_translation = "Eighteen";
            break;
        case 17:
            number_translation = "Seventeen";
            break;
        case 16:
            number_translation = "Sixteen";
            break;
        case 15:
            number_translation = "Fifteen";
            break;
        case 14:
            number_translation = "Fourteen";
            break;
        case 13:
            number_translation = "Thirteen";
            break;
        case 12:
            number_translation = "Twelve";
            break;
        case 11:
            number_translation = "Eleven";
            break;
        case 10:
            number_translation = "Ten";
            break;
        case 9:
            number_translation = "Nine";
            break;
        case 8:
            number_translation = "Eight";
            break;
        case 7:
            number_translation = "Seven";
            break;
        case 6:
            number_translation = "Six";
            break;
        case 5:
            number_translation = "Five";
            break;
        case 4:
            number_translation = "Four";
            break;
        case 3:
            number_translation = "Three";
            break;
        case 2:
            number_translation = "Two";
            break;
        case 1:
            number_translation = "One";
            break;
        default:
            break;
    }
    return number_translation;
}