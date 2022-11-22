#ifndef MOTEL_HPP
#define MOTEL_HPP

#include <string>
#include <iostream>
#include <vector>
#include "Locations.hpp" //inheritance class

using namespace std;

class Motel: public Location {
public:
    // Location("Motel", string); //name, and clue 
    // void displayName();            // display the name of the location
    // void displayClue();            // display the clue we have
    // bool isClueFound();            // return if the clue found
    // bool insertClue(string);       // insert a clue into the cluse vector
    virtual void playScene(); // needes to be implemented for each sub class

// private:
//     string name;            // store the name of the location
//     bool clueFound;         // store whether or not the clue was found out
//     vector<string> clues(); // store the clues in this location

    string exploreRoom();
    string goToMyRoom();
    void validateInput(int& input, int max, int min);


private:

    string name = "Motel"; //stores the name of this location


    string promptPlayer = "What would you like to do?";
    string userInput = "";
    string exitflag = "exitLocation";






};

#endif // MOTEL_HPP