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

    //begin game
    Story startGame;
    startGame.buildStory(d);


    delete d;

    return 0;

    return 0;

}
