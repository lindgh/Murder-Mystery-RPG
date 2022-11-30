#ifndef STORY_HPP
#define STORY_HPP

#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include "Locations.hpp"
#include "OpeningScene.hpp"



using namespace std;

class Story
{
public:
    void displayMenu(Detective *d); //display locations
    void buildStory(Detective *d); //call in main manage everything
    void guessKiller(); 
    void createWorld();


private:
    unordered_map<string , Location*> storeLocation;
    bool clueFound;
    bool gameOver;


};

#endif // LOCATIONS_HPP