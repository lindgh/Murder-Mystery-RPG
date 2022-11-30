#include "../header/Story.hpp"
#include "../header/Detective.hpp"
#include "../header/Locations.hpp"
#include "../header/OpeningScene.hpp"
#include <iostream>
using namespace std;

void Story::buildStory(Detective *d){

//     string nextLocation = "";
//     createWorld(); //function to populate map of all 

//     //Start with Opening Scene [always]
//     OpeningScene os;
//     os.playScene(d);

//     if(gameOver){
//         //break out of buildStory and go to main with gameOverflag
//     }

//     //if !gameOver, player has decided to investigated.
//     //populate map of locations.
//     while (!gameOver){
//         //print locations menu => displayMenu should return string of next location
//         nextLocation = displayMenu();

//         //call map

//     }


//     // Motel m(d);
//     // //Hollands crime scene
//     // CountryClub cc(d);
//     // Mansons m(d);
//     // PearlsTaxidermy pt(d);


//     //start with opening scene [always]



// }


// void Story::createWorld(){
//     // Places to input:
//     // 1) Motel m(d);
//     // 2) Hollands crime scene
//     // 3) CountryClub cc(d);
//     // 4) Mansons m(d);
//     // 5) PearlsTaxidermy pt(d);
    

//     storeLocation.insert(pair<string, Location*>("Motel", /*pointer to Motel.playScene()*/ ));
//     storeLocation.insert(pair<string, Location*>("Holland Crime Scene", /*pointer to HollandcrimeScene.playScne()*/ ));
 



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
