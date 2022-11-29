#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <string>
#include <iostream>
#include <vector>
#include "../header/Detective.hpp"

using namespace std;

class Location
{
public:
    virtual void playScene(Detective *aDetective) = 0; // needes to be implemented for each sub class
    void validateInput(int& input, int max, int min);
    void continuePrompt();
    void clearStream();

private:
    string name;
};

#endif // RECTANGLE_HPP