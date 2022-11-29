#ifndef DETECTIVE_HPP
#define DETECTIVE_HPP

//include below after rawan finishes journal class
//#include "../header/Journal.hpp"
#include <string>
#include <iostream>

using namespace std;

class Detective {
  private:
    //include below after rawan finishes journal class
    //Journal userDiary;
    int userDecision;
    int userPoints;

  public:
    Detective();
    //include below after rawan finishes journal class
    //void interactJournal(int);
    void setDecision(int);      //userDecision is used for menus
    int getDecision();
    void setPoints(int);
    int getPoints();

};

#endif