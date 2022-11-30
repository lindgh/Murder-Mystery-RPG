#ifndef MOTEL_HPP
#define MOTEL_HPP

#include <string>
#include <iostream>
#include <vector>
#include "Locations.hpp" //inheritance class

using namespace std;

class Motel: public Location {
public:
    // Location("Motel", string); //name, and clue 
    // void displayName();            // display the name of the location
    // void displayClue();            // display the clue we have
    // bool isClueFound();            // return if the clue found
    // bool insertClue(string);       // insert a clue into the cluse vector
    void playScene(Detective *d); // needes to be implemented for each sub class


    //outer functions that if left, go back to playScene function
    //might be changing back to void, we will see
    void exploreRoom();
    void goToMyRoom();

    //-----functions to explore INSIDE exploreRoom only----
    void exploreBathroom();
    void exploreDrawers();
    void exploreNightStand();
    void exitRoom203AfterExplore();
    //-----------------------------------------------------




private:

    string name = "Motel"; //stores the name of this location

};

#endif // MOTEL_HPP