#ifndef COUNTRY_CLUB_HPP
#define COUNTRY_CLUB_HPP

#include <iostream>
#include "Choice.hpp"
#include "Locations.hpp"

using namespace std;

class CountryClub : public Location
{
public:
    virtual void playScene();

private:
    void setDecisions();
};

#endif // COUNTRY_CLUB_HPP