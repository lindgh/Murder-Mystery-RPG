#ifndef OPENINGSCENE_HPP
#define OPENINGSCENE_HPP

#include <string>
#include <iostream>
#include <vector>
#include "Locations.hpp"
#include "Detective.hpp"

using namespace std;

class OpeningScene: public Location
{
  public:
    virtual void playScene(Detective *aDetective);
    

  private:
    string name = "Opening Scene";
    void continuePrompt();
    void clearStream();
};

#endif //OPENINGSCENE_HPP