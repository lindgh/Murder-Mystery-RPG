#ifndef HOLLANDS_HPP
#define HOLLANDS_HPP

#include <string>
#include <iostream>
#include <vector>
#include "Locations.hpp" //inheritance class

using namespace std;

class PearlsTaxidermy: public Location {
public:

    virtual void playScene(Detective *d); // needes to be implemented for each sub class


    //outer functions that if left, go back to playScene function
    void investigateReporter();
    void investigateOfficer();
    void investigateBystander();
    void LeaveHollands();
   

private:

    string name = "Hollands"; //stores the name of this location

};

#endif // HOLLANDS_HPP
