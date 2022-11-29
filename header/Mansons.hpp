#ifndef MANSONS_HPP
#define MANSONS_HPP

#include <iostream>
#include "Choice.hpp"
#include "Locations.hpp"
#include "Detective.hpp"

using namespace std;

class Mansons : public Location
{
public:
    void playScene(Detective *aDetective);

private:
    void setDecisions();
};

#endif // MANSONS_HPP