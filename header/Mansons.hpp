#ifndef MANSONS_HPP
#define MANSONS_HPP

#include <iostream>
#include "Choice.hpp"
#include "Locations.hpp"

using namespace std;

class Mansons : public Location
{
public:
    virtual void playScene();

private:
    void setDecisions();
};

#endif // MANSONS_HPP