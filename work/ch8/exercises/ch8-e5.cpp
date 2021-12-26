/* File Corresponds To Chapter 8 - Jumping Into C++ Alex Allain ISB:978-0-9889278-0-3
 *  Practice Problem 4
 *  Make a poker game!, provide 5 cards to a player then let the player choose new cards, which after evaluate the
 *  hand. Is this easy to do? What problems am I going to have keeping track of the cards that have been drawn already?
 *  Is this easier or harder than the slot machine?
 * */
#include <iostream>
#include <random>
using namespace std;

int main() {
    // Without arrays this would be incredibly difficult to track, far harder than the slot machine.
    // As such, I'll pseudo-code a little, but leave this program for another time.

    // int the cards and string the card names 1-52 for the suites and the number/facecards.
    // you would have to write a shuffledeck function to shuffle the cards prior to selecting the
    // top five cards from the deck and giving them to the player. From there the dealer will add three cards
    // to the center table, allowing the player to chose to keep or discard cards from their hand up to 2 more turns,
    // each time the dealer placing another card face up on the table.
    // after the second card is placed from the dealer, the turns end and the hands are evaluated for a winning
    // pot.
    return 0;
}