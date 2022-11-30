#include "../header/Detective.hpp"

Detective::Detective() {
    userPoints = 0;
}

void Detective::setPoints(int addPoints) {
    userPoints = userPoints + addPoints;
}

int Detective::getPoints() {
    return userPoints;
}


void Detective::setGameOverFlag(){ //call to change status from false to true
    gameStatus = -999;
}

int Detective::getGameOverFlag(){
    return gameStatus;
}