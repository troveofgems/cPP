/* File Corresponds To Chapter 5 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 7
 *  Write a program that provides the option of tallying up the results of a poll with 3 possible values. The first
 *  input is the poll question, the next three inputs are the possible answers (1, 2, 3) respectively. Answers
 *  are tallied until a 0 is entered. The program should then show the results of the poll.
 *  Bonus: Try making bar graph that shows the results properly scaled to fit the screen no matter the number of
 *  results.
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Welcome to the Poller Program" << endl;

    string poll_question;
    int poll_question_confirmation = 0;
    bool poll_question_set = false;
    do { // Set the poll question
        cout << "What would you like to poll?" << endl;
        getline(cin, poll_question);
        cout << "The poll will be set to " << "\n\t" << poll_question << endl;
        cout << "Is this correct? Enter 1 to continue, 0 to reset..." << endl;
        cin >> poll_question_confirmation;
        if (poll_question_confirmation == 1) {
            poll_question_set = true;
        }
    } while(!poll_question_set);

    string firstPossibleAnswer;
    string secondPossibleAnswer;
    string thirdPossibleAnswer;
    int poll_answer_confirmation = 0;
    bool poll_answers_set = false;
    do { // Set the poll answers
        cout << "It's time to set the answers for the poll question" << endl;
        cout << "What is the first possible answer?" << endl;
        cin >> firstPossibleAnswer;
        cout << "What is the second possible answer?" << endl;
        cin >> secondPossibleAnswer;
        cout << "What is the third and final possible answer?" << endl;
        cin >> thirdPossibleAnswer;
        cout << "Final Answers are:" << endl;
        cout << "1. " << firstPossibleAnswer << endl;
        cout << "2. " << secondPossibleAnswer << endl;
        cout << "3. " << thirdPossibleAnswer << endl;
        cout << "Is this correct? Enter 1 to continue, 0 to reset..." << endl;
        cin >> poll_answer_confirmation;
        if (poll_question_confirmation == 1) {
            poll_answers_set = true;
        }
    } while(!poll_answers_set);

    bool beginPoll = false;
    int userInit = 0;
    cout << "Are you ready to begin the poll?, 1 - yes, 0 - to hold" << endl;
    cin >> userInit;
    while (userInit == 0) {
        cout << "Enter 1 When Ready To Start" << endl;
        cin >> userInit;
        if (userInit == 1) {
            beginPoll = true;
        }
    }

    int userAnswer = 0;
    int correctAnswer = 3;
    int running_poll_total_correct = 0;
    int running_poll_total_incorrect = 0;
    int running_poll_total_users = 0;
    do {
        cout << "Enter 0 To Exit the Poll" << endl;
        cout << poll_question << endl;
        cout << firstPossibleAnswer << endl;
        cout << secondPossibleAnswer << endl;
        cout << thirdPossibleAnswer << endl;
        cin >> userAnswer;
        if (userAnswer == correctAnswer) {
            running_poll_total_users += 1;
            running_poll_total_correct += 1;
        } else if (userAnswer != 0){
            running_poll_total_users += 1;
            running_poll_total_incorrect += 1;
        } else if (userAnswer == 0) {
            break;
        }
        beginPoll = true;
    } while(beginPoll);

    cout << "Total Users Who Answered The Poll: " << running_poll_total_users << endl;
    cout << "Total Correct: " << running_poll_total_correct << endl;
    cout << "Total Incorrect: " << running_poll_total_incorrect << endl;

    return 0;
}
