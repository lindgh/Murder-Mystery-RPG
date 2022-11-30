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

    if(gameOver){
        //break out of buildStory and go to main with gameOverflag
    }


    //if !gameOver, player has decided to investigated.
    //populate map of locations.
    while (!gameOver){
        //print locations menu => displayMenu should return string of next location
        // nextLocation = displayMenu();
 
        // Location::validateInput(nextLocation,2,1);

        
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

