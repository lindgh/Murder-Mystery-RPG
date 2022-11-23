#include <iostream>

#include "header/Locations.hpp"
//#include "header/OpeningScene.hpp"
#include "header/Motel.hpp"

using namespace std;

int main() {

    //Testing motel object
    Motel m;
    m.playScene();

    cout <<"\n\nExited Motel Location\n\n";


    //After exiting playScene, call menu class for location, to get next location 

    return 0;
}