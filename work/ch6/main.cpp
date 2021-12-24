/* File Corresponds To Chapter 6 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Chapter Overview
 * => Functions
 * */
#include <iostream>
#include <string>

using namespace std;

int GLOBAL_VARIABLE__count_of_total_function_calls_made_from_program = 0;

void trackCall() {
    GLOBAL_VARIABLE__count_of_total_function_calls_made_from_program++;
}

int add(int x, int y) {
    trackCall();
    return x + y;
}

void no_arg_function() {
    trackCall();
    // Things To Note About Void Declared Functions:
    // Void functions do not return anything
    // This means that you are prevented from using the function as an expression - (no variable assignments or
    // placed into if clauses)
}

int addTen(int x) {
    trackCall();
    int result = x + 10;
    return result;
}

int getValueTen() {
    trackCall();
    int result = 10;
    return result;
}

int addTenRefactor(int x) {
    trackCall();
    int result = x + getValueTen();
    return result;
}

int changeArgument(int x) {
    trackCall();
    x = x + 5;
    return x;
}

int divide(int numerator, int denominator) {
    trackCall();
    // The structure is okay, but the use of multiple same named local variables makes this code confusing to read
    // for most people. Avoid same name variables unless absolutely needed.
    if(denominator == 0) {
        int result = 0;
        return result;
    }
    int result = numerator / denominator;
    return result;
}

// Example of a function prototype
int subtract(int x, int y);

// Example of Overloading
int computeTriangleArea(int x, int y, int z) {
    trackCall();
    return ((x + y + z) / 2);
}

int computeTriangleArea(int width, int height) {
    trackCall();
    return (width * height) / 2;
}

int main() {
    trackCall();
    int result = add(4, 5);

    // The following may not be done in C++:
    //void cannotDoThis = no_arg_function();
    //if (cannotDoThis) breakProgram();

    // The visibility of a variable is referred to as its "Scope"

    cout << "The Result Of 4 + 5 = " << result << endl;
    cout << "Math on the fly! 7 + 11 = " << add(7, 11) << endl;
    cout << "Add 10 to 7 = " << addTen(7) << endl;
    cout << "Add 10 to 5 = " << addTenRefactor(5) << endl;

    // Function Arguments as Stunt Doubles
    // Changing a function argument has no effect on the original variable. Consider:
    int y = 17;
    changeArgument(y);
    cout << "What will y print? " << y << endl; // y will print 17.

    // In C++ every set of {} defines a new, more narrow scope for variables. Review the following function:
    cout << "Cant divide by zero silly... 7 / 0 = " << divide(7, 0) << endl;

    // When should global variables be used?  Personally, I think unchanging constants. Like Plank's Constant, etc.
    // Global variables can affect code EVERYWHERE. Be careful.

    // Further: C++ does not automatically hoist functions. Don't define functions below main unless you use:
    // Function Prototypes
    cout << "Subtracting 9 - 7 = " << subtract(9, 7) << endl;

    // When should you create a function?
    // Rule of thumb is: once you've repeated (copy/pasted) code 3 times, it's time to turn it into a function.
    // Or you want to make your code easier to read.

    /**
     * NAMING AND OVERLOADING FUNCTIONS
     * **/
     // With function overloading in C++, it is possible to use the same function name with a different set of
     // argument lists. Consider:
     cout << "Triangle with base of 10 and height of 5 contains an area of " << computeTriangleArea(10, 5) << endl;
     cout << "Triangle with sides 1, 7, and 6 contains an area of " << computeTriangleArea(3, 28, 24) << endl;


    // A variable that is made available to all functions is considered a global variable. Global Variables
    // in general should be avoided.
    cout << "Through-out the lifecycle of this program " << GLOBAL_VARIABLE__count_of_total_function_calls_made_from_program
         << " calls were made to functions." << endl;
    return 0;
}

// Function Prototype Example
int subtract(int x, int y) {
    trackCall();
    return x - y;
}