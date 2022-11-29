#ifndef COUNTRY_CLUB_HPP
#define COUNTRY_CLUB_HPP

#include <iostream>
#include "Choice.hpp"
#include "Locations.hpp"
#include "Detective.hpp"

using namespace std;

class CountryClub : public Location
{
public:
    void playScene(Detective *aDetective);

private:
    void setDecisions();
};

#endif // COUNTRY_CLUB_HPP