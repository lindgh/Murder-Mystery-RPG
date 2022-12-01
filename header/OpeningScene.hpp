#ifndef OPENINGSCENE_HPP
#define OPENINGSCENE_HPP

#include <string>
#include <iostream>
#include "Locations.hpp"
#include "Detective.hpp"

using namespace std;

class OpeningScene: public Location
{
  public:
    virtual void playScene(Detective *d);

  private:
    string name = "Opening Scene";
};

#endif //OPENINGSCENE_HPP