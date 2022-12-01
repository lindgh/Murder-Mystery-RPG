#include "../header/Story.hpp"
#include "../header/Detective.hpp"
#include "../header/Locations.hpp"
#include "../header/OpeningScene.hpp"
#include "../header/Diner.hpp"
#include "../header/Hollands.hpp"
#include <iostream>
using namespace std;




void Story::buildStory(Detective *d){

    int nextLocation;
    int max; //used for displayMenu function

    // Places to input:
    Motel motel;
    Diner diner;
    Hollands hollandsCS;
    CountryClub countryClub; 
    Mansons mansonsCS; 
    PearlsTaxidermy pearlsT; 


    //Start with Opening Scene [always]
    OpeningScene os;
    os.playScene(d);
    gameOverFlag = d->getGameOverFlag();

    while (gameOverFlag != -999){

        displayMenu(d, max);
        validateInput(nextLocation,max,1);

        switch (nextLocation){
            case 1: motel.playScene(d);
            break;
            case 2: diner.playScene(d);
            break;
            case 3: hollandsCS.playScene(d);
            break;
            case 4: countryClub.playScene(d);
            break;
            case 5: mansonsCS.playScene(d);
            break;
            case 6: pearlsT.playScene(d);
            break;
            case 7: guessKiller(d);
            break;
        }

        // displayMenu(d, max);
        // validateInput(nextLocation,max,1);
        gameOverFlag = d->getGameOverFlag();

    }//end while

    cout << "\nThank you for playing Murder Mystery: A Text-Based RPG!\n" << endl;


}


void Story::displayMenu(Detective *d, int &m) {
/* actual format below
============================================

Where would you like to go?   
--------------------------------
    1. Motel
    2. Diner
    3. Hollands Crime Scene
    4. Auburndale Country Club
    5. Mansons Crime Scene
    6. Pearl’s Taxidermy
--------------------------------
OR: 7. Guess the killer! 
============================================
*/

//output below no matter what
cout <<   "\n===============================================\n" <<
            "|                                             |\n" <<
            "|    Where would you like to go?              |\n" <<
            "|    ------------------------------------     |" << endl;


if (d->getPoints() >= 10) {
    cout << "|        1. Motel                             |" << endl;
    m = 1; //set bounds to only Motel
}
else {
    cout << "|        1. [10 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 20) {
    cout << "|        2. Diner                             |" << endl;
    m = 2; //set bounds to 2 locations
}
else {
    cout << "|        2. [20 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 30) {
    cout << "|        3. Hollands Crime Scene              |" << endl;
    m = 3;
}
else {
    cout << "|        3. [30 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 40) {
    cout << "|        4. Auburndale Country Club           |" << endl;
    m = 4;
}
else {
    cout << "|        4. [40 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 50) {
    cout << "|        5. Mansons Crime Scene               |" << endl;
    m = 5;
}
else {
    cout << "|        5. [50 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 60) {
    cout << "|        6. Pearl's Taxidermy                 |" << endl;
    m = 6;
}
else {
    cout << "|        6. [60 POINTS NEEDED TO UNLOCK]      |" << endl;
}

//output below no matter what
cout <<     "|    ------------------------------------     |" << endl;

if (d->getPoints() >= 70) {
    cout << "|    OR: 7. Guess the killer!                 |" << endl;
    m = 7;
}
else {
    cout << "|    OR: 7. [70 POINTS NEEDED TO UNLOCK]      |" << endl;
}

//output below no matter what
cout <<     "|                                             |\n" <<
            "===============================================\n" << endl; 

cout << "Enter your choice: ";

}





void Story::validateInput(int &input, int max, int min)
{
    bool invalid;
    int num;
    do
    {
        cin >> num;
        // checks to make sure a char value was not entered.
        while (cin.fail()) // returns true if input failure occurs
        {
            cin.clear();
            cin.ignore(50, '\n');
            cout << "Error, please enter an integer: ";
            cin >> num;
        }

        // at this point, know that userInput is a number
        invalid = num < min || num > max;
        if (invalid && num < 0)
        {
            cout << "Please enter a number greater than 0: ";
        }
        else if (invalid)
        {
            // cout << "Please enter a number in the range 1 - 3: ";
            cout << "Please enter a number in the range " << min << " - "
                 << max << ": ";
        }

    } while (invalid); // Will validate that userInput is not a char, and
                       //  within bounds of menu options.
    input = num;       // at this point, num would be valid.
}

void Story::guessKiller(Detective *d)
{
    vector<string> suspects;
    string guess;

    suspects.push_back("Arthur");
    suspects.push_back("Waitress");
    suspects.push_back("Pearl");
    suspects.push_back("Robert");

    cout << "   ----Guess the killer----    " << endl;
    cout << "   ----   Suspects     ----    \n" << endl;

    for (vector<string>::iterator iter  = suspects.begin(); iter != suspects.end(); ++iter) 
    {
        cout << "\t" << *iter << endl;
    }

    cout << endl << "Enter your choice: ";
    cin >> guess;

    if (guess == "Arthur") 
    {
        cout << "You guessed the killer correctly!!!" << endl;
        return;
    }

    cout << "You DIE! The killer gets you:(" << endl;
    cout << "\n\n\n\n\n[GAME OVER]\n\n\n\n\n-----";

    d->setGameOverFlag();

    return;
}

