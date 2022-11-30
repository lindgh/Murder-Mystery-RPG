#include <iostream>

#include "header/Locations.hpp"
#include "header/Diner.hpp"
#include "header/Detective.hpp"
#include "header/Motel.hpp"
#include "header/PearlsTaxidermy.hpp"
#include "header/Story.hpp"
#include "header/Hollands.hpp"
#include "header/OpeningScene.hpp"

using namespace std;


int main() {

    system("clear");
    Detective *d = new Detective(); //create player

    //below was testing 
    // cout << "country club clue: " << d->countryClubClue.getFlag() << endl;
    // Story startGame;

    //being game
    startGame.buildStory(d);

    
    // startGame.displayMenu(d);

    // d->setPoints(50);
    // startGame.displayMenu(d);

    // d->setPoints(70);
    // startGame.displayMenu(d);

    

    delete d;

    return 0;

}
