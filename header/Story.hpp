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
    int displayMenu(); //display locations
    void buildStory(Detective *d); //call in main manage everything
    void guessKiller(); 
    // void createWorld(Detective *d);
    


private:
    unordered_map<string , void(Location::*)()> storeLocation;


    bool clueFound;
    bool gameOver;


};

#endif // LOCATIONS_HPP