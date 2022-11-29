#include "../header/Story.hpp"
#include "../header/Detective.hpp"
#include "../header/Locations.hpp"
#include "../header/OpeningScene.hpp"
#include "../header/Diner.hpp"
#include <iostream>
using namespace std;




void Story::buildStory(Detective *d){

    int nextLocation;

    // Places to input:
    Motel m;
    Diner diner;
    //Hollands crime scene
    CountryClub cc; 
    Mansons mcs; 
    PearlsTaxidermy pt; 


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
        validate(nextLocation, 7, 1);
        
        switch (nextLocation){
            case 1: m.playScene(d);
            break;
            case 2: diner.playScene(d);
            break;
            case 3: cc.playScene(d);
            break;
            case 4: mcs.playScene(d);
            break;
            case 5: pt.playScene(d);
        }

    }


}

