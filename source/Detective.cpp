#include "../header/Detective.hpp"

Detective::Detective() {
    //initialize userDiary too
    userDecision = 0;
    userPoints = 0;
}

//include below after rawan finishes journal class
//void Detective::interactJournal(int);

void Detective::setDecision(int userInput) {
    userDecision = userInput;
}

int Detective::getDecision() {
    return userDecision;
}

void Detective::setPoints(int addPoints) {
    userPoints = userPoints + addPoints;
}

int Detective::getPoints() {
    return userPoints;
}