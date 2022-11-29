#include "../header/Story.hpp"
#include "../header/Detective.hpp"
#include "../header/Locations.hpp"
#include "../header/OpeningScene.hpp"
#include <iostream>
using namespace std;

void Story::buildStory(Detective *d){

    string nextLocation = "";
    createWorld(); //function to populate map of all 

    //Start with Opening Scene [always]
    OpeningScene os;
    os.playScene(d);

    if(gameOver){
        //break out of buildStory and go to main with gameOverflag
    }

    //if !gameOver, player has decided to investigated.
    //populate map of locations.
    while (!gameOver){
        //print locations menu => displayMenu should return string of next location
        nextLocation = displayMenu();

        //call map

    }


    // Motel m(d);
    // //Hollands crime scene
    // CountryClub cc(d);
    // Mansons m(d);
    // PearlsTaxidermy pt(d);


    //start with opening scene [always]



}


void Story::createWorld(){
    // Places to input:
    // 1) Motel m(d);
    // 2) Hollands crime scene
    // 3) CountryClub cc(d);
    // 4) Mansons m(d);
    // 5) PearlsTaxidermy pt(d);
    

    storeLocation.insert(pair<string, Location*>("Motel", /*pointer to Motel.playScene()*/ ));
    storeLocation.insert(pair<string, Location*>("Holland Crime Scene", /*pointer to HollandcrimeScene.playScne()*/ ));
 



}