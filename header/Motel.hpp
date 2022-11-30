#ifndef MOTEL_HPP
#define MOTEL_HPP

#include <string>
#include <iostream>
#include <vector>
#include "Locations.hpp" //inheritance class

using namespace std;

class Motel: public Location {
public:
    void playScene(Detective *d); // needes to be implemented for each sub class


    //outer functions that if left, go back to playScene function
    void exploreRoom(Detective *d);
    void goToMyRoom();

    //-----functions to explore INSIDE exploreRoom only----
    void exploreBathroom(Detective *d);
    void exploreDrawers();
    void exploreNightStand();
    void exitRoom203AfterExplore();
    //-----------------------------------------------------

private:

    string name = "Motel"; //stores the name of this location

};

#endif // MOTEL_HPP