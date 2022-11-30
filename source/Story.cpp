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

//     if(gameOver){
//         //break out of buildStory and go to main with gameOverflag
//     }


    //if !gameOver, player has decided to investigated.
    //populate map of locations.
    while (!gameOver){
        displayMenu();
        Location::validateInput(nextLocation,2,1);

        
        switch (nextLocation){
            case 1: motel.playScene(d);
            break;
            case 2: diner.playScene(d);
            break;
            case 3: countryClub.playScene(d);
            break;
            case 4: mansonsCS.playScene(d);
            break;
            case 5: pearlsT.playScene(d);
            break;
            case 6: hollandsCS.playScene(d);
        }

    }


}


void Story::displayMenu(Detective *d) {
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
}
else {
    cout << "|        1. [10 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 20) {
    cout << "|        2. Diner                             |" << endl;
}
else {
    cout << "|        2. [20 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 30) {
    cout << "|        3. Hollands Crime Scene              |" << endl;
}
else {
    cout << "|        3. [30 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 40) {
    cout << "|        4. Auburndale Country Club           |" << endl;
}
else {
    cout << "|        4. [40 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 50) {
    cout << "|        5. Mansons Crime Scene               |" << endl;
}
else {
    cout << "|        5. [50 POINTS NEEDED TO UNLOCK]      |" << endl;
}

if (d->getPoints() >= 60) {
    cout << "|        6. Pearl's Taxidermy                 |" << endl;
}
else {
    cout << "|        6. [60 POINTS NEEDED TO UNLOCK]      |" << endl;
}

//output below no matter what
cout <<     "|    ------------------------------------     |" << endl;

if (d->getPoints() >= 70) {
    cout << "|    OR: 7. Guess the killer!                 |" << endl;
}
else {
    cout << "|    OR: 7. [70 POINTS NEEDED TO UNLOCK]      |" << endl;
}

//output below no matter what
cout <<     "|                                             |\n" <<
            "===============================================\n" << endl; 

}
