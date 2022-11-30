#ifndef DETECTIVE_HPP
#define DETECTIVE_HPP

//include below after rawan finishes journal class
//#include "../header/Journal.hpp"
#include <string>
#include <iostream>
#include "ClueFlag.hpp"

using namespace std;

class Detective {
  private:
    int userPoints;
    int gameStatus = 0;

  public:
    Detective();
    void setPoints(int);
    int getPoints();

    void setGameOverFlag();
    int getGameOverFlag();

    ClueFlag motelClue;
    ClueFlag dinerClue;
    ClueFlag hollandsClue;
    ClueFlag countryClubClue;
    ClueFlag mansonsClue;
    ClueFlag pearlsTClue;



};

#endif