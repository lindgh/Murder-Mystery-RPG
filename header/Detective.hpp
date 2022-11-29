#ifndef DETECTIVE_HPP
#define DETECTIVE_HPP

//include below after rawan finishes journal class
//#include "../header/Journal.hpp"
#include <string>
#include <iostream>

using namespace std;

class Detective {
  private:
    int userPoints;

  public:
    Detective();
    void setPoints(int);
    int getPoints();

};

#endif