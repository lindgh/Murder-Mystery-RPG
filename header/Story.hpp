#ifndef STORY_HPP
#define STORY_HPP

#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include "Locations.hpp"
#include "OpeningScene.hpp"
#include "Motel.hpp"
#include "CountryClub.hpp"
#include "Mansons.hpp"
#include "PearlsTaxidermy.hpp"



using namespace std;

class Story
{
public:
    void displayMenu(Detective *d, int& max); //display locations
    void buildStory(Detective *d); //call in main manage everything
    void guessKiller(); 
    void validateInput(int &input, int max, int min);



private:

    bool clueFound;
    int gameOverFlag = 0;

};

#endif // LOCATIONS_HPP