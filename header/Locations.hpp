#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <string>
#include <iostream>

using namespace std;

class Location
{
public:
    virtual void playScene() = 0; // needes to be implemented for each sub class
    void validateInput(int &input, int max, int min);
    void setName(string);

private:
    string name;    // store the name of the location
    bool clueFound; // store whether or not the clue was found out
    string userInput;
};

#endif // RECTANGLE_HPP