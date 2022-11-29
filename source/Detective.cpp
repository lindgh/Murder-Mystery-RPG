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