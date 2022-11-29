#ifndef DINER_HPP
#define DINER_HPP

#include <string>
#include <iostream>
#include "Locations.hpp"
#include "Detective.hpp"

using namespace std;

class Diner: public Location
{
  public:
    virtual void playScene(Detective *aDetective);
    void mindYourBusiness();
    void eavesdrop();
    void talkToGentleman(Detective *aDetective);
    void dinerPrompt(Detective *aDetective);

  private:
    string name = "Diner";
};


#endif //DINER_HPP