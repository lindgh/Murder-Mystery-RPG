#ifndef PEARLSTAXIDERMY_HPP
#define PEARLSTAXIDERMY_HPP

#include <string>
#include <iostream>
#include <vector>
#include "Locations.hpp" //inheritance class

using namespace std;

class PearlsTaxidermy: public Location {
public:

    virtual void playScene(); // needes to be implemented for each sub class


    //outer functions that if left, go back to playScene function
    void investigateCounter();
    void investigateWallOfPictures();
    void investigateEmployee();
    void LeaveStore();
    void gameOver();

private:

    string name = "Pearls Taxidermy"; //stores the name of this location

};

#endif // PEARLSTAXIDERMY_HPP