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

    Story startGame;

    //Motel m;
    //Diner di;
    //Hollands h;
    //CountryClub c;
    //Mansons ms;
    //PearlsTaxidermy p;

    //c.playScene(d);

    startGame.buildStory(d);

    delete d;

    return 0;

}
