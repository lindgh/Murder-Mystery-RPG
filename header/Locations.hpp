#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <string>
#include <iostream>
#include <vector>


using namespace std;

class Location
{
public:
    // Location(string, string);
    // void displayName();            // display the name of the location
    // void displayClue();            // display the clue we have
    // void setClueFound(bool);
    // bool isClueFound();            // return if the clue found
    // bool insertClue(string);       // insert a clue into the cluse vector
    virtual void playScene() = 0; // needes to be implemented for each sub class
    void validateInput(int& input, int max, int min);

private:
    string name;            // store the name of the location
    bool clueFound;         // store whether or not the clue was found out


    vector<string> clues(); // store the clues in this location
    string userInput;
    

};

#endif // RECTANGLE_HPP