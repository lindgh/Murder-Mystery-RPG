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

    Detective *d = new Detective(); //create player

    //being game
    Story startGame;
    startGame.displayMenu(d);

    d->setPoints(50);
    startGame.displayMenu(d);

    d->setPoints(70);
    startGame.displayMenu(d);

    //startGame.buildStory(d);

    delete d;

    return 0;

}
