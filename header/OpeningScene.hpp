#ifndef OPENINGSCENE_HPP
#define OPENINGSCENE_HPP

#include <string>
#include <iostream>
#include <vector>
#include "../header/Locations.hpp"

using namespace std;

class OpeningScene : public Location
{
  public:
    void playScene();
};

#endif 