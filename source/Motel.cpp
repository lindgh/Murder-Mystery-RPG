#include "../header/Motel.hpp"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;



void Motel::playScene(){  //going to change return type to string
    string nextLocation;

   
    int choice;

    
        cout << "You arrive at the mostly deserted motel and make your way up the creaky stairs. " <<
                "As you pass the halls, you look for room 204. \n201 \n202 \n203. You suddenly " <<
                "get a strong whiff of bleach. That is odd. This room's door is left ajar. And your room " <<
                "is just past it.\n\n";
        cout << "Would you like to do?\n";
        cout << "Enter '1' to explore room 203\n";
        cout << "Enter '2' to continue to your room\n";
        cout << "\nEnter your choice: ";

        //validate input
        Location::validateInput(choice,2,1);

        switch (choice){
            case 1: Motel::exploreRoom();
            //get string for next location
            nextLocation = exploreRoom();
            break;
            case 2: goToMyRoom();
            //get string for next location
            nextLocation  = goToMyRoom();
            break;
        }

        //return nextLocation;

    
}

string Motel::goToMyRoom(){
    //clear terminal 
    system("clear");
    cout << "Someone probably forgot to close their door. Maybe minding your business is for the "
            "best... You make your way to your room and take a rest...\n";

            //flag here to stop
    cout << "Press any key to continue";
    cin.ignore();

    system("clear");
    cout << "After relaxing, it is the next day. Where would you like to go?";

    //CALL TO MENU CLASS to display available locations.
    //AT this point, only available locations are:
    // 1) Diner
    // 2) Motel (same place)

    //user input => return string name of next location with exitFlag
    return "";

}

//once here, after exploring, "force player to go to their room."
string Motel::exploreRoom(){

    int choice;
    //clear terminal
    system("clear");
    cout << "You walk into room 203. The room is empty thankfully. Whoever was here however, "
    "left the room in disarray.\n";
    
    //initial menu, will change in switch statement
    cout << "What would you like to do in this room?\n";
    cout << "Enter '1' to explore the bathroom\n";
    cout << "Enter '2' to investigate the table with drawers\n";
    cout << "Enter '3' to investigate the nightstand next to the bed";
    cout << "\nEnter your choice: ";

    Location::validateInput(choice, 3,1); //validate input first


    while( "something does not equal to exit"){ 
     switch (choice){
            case 1: exploreBathroom();
            break;
            case 2: exploreDrawers();
            break;
            case 3: exploreNightStand();
            break;
            // case 4:  //need to think about this one, kinda sketchy...
            // break;
        }

        //display menu
    }

    return "";
}

void Motel::exploreBathroom(){

}

void Motel::exploreDrawers(){

}

void Motel::exploreNightStand(){

}

