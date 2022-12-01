#include "../header/Motel.hpp"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;



void Motel::playScene(Detective *d){ 
    int choice;

        clearStream();
        cout << "\nYou arrive at the mostly deserted motel and make your way up the creaky stairs. " <<
                "As you pass the halls, you look for room 204. \n\n201 \n\n202 \n\n203. You suddenly " <<
                "get a strong whiff of bleach. That is odd. This room's door is left ajar. And your room " <<
                "is just past it.\n";
        continuePrompt();
        cout << "Would you like to do?\n";
        cout << "[Enter '1' to explore room 203]\n";
        cout << "[Enter '2' to continue to your room]\n";
        cout << "\nEnter your choice: ";

        //validate input
        Location::validateInput(choice,2,1);
        clearStream();

        switch (choice){
            case 1: exploreRoom(d);
            break;
            case 2: goToMyRoom();
            break;
        }
}

void Motel::goToMyRoom(){
    //clear terminal 

    cout << "Someone probably forgot to close their door. Maybe minding your business is for the "
            "best... You make your way to your room and rest...\n";

            //flag here to stop
    continuePrompt();


}

void Motel::exitRoom203AfterExplore(){

    cout << "\nAfter exploring room 203, you decide to head to your own room. "
         << "Best to rest up for more investigating later...\n\n";

            //flag here to stop
    continuePrompt();


}

//once here, after exploring, "force player to go to their room."
void Motel::exploreRoom(Detective *d){

    int choice;
    //clear terminal
    
    cout << "\nYou walk into room 203. The room is empty thankfully. Whoever was here however, "
    "left the room in disarray.\n\n";
    
    //initial menu, will change in switch statement 
    cout << "What would you like to do in this room?\n";
    cout << "[Enter '1' to explore the bathroom]\n";
    cout << "[Enter '2' to investigate the table with drawers]\n";
    cout << "[Enter '3' to investigate the nightstand next to the bed]";
    cout << "\nEnter your choice: ";

    Location::validateInput(choice, 3,1); //validate input first
    clearStream();

    while(choice != 4){ 
     switch (choice){
            case 1: exploreBathroom(d);
            break;
            case 2: exploreDrawers();
            break;
            case 3: exploreNightStand();
            break;
        }

        //display menu
        cout << "\nWhat would you like to do now?\n";
        cout << "[Enter '1' to explore the bathroom]\n";
        cout << "[Enter '2' to investigate the table with drawers]\n";
        cout << "[Enter '3' to investigate the nightstand next to the bed]\n";
        cout << "[Enter '4' to leave room now]\n";
        cout << "\nEnter your choice: ";
        validateInput(choice, 4,1); //validate input first
        clearStream();
    } //end while loop

    //if exiting room after exploring
    if(choice == 4){
        exitRoom203AfterExplore();
    }


}


//clues found in bathroom -> trashcan: receipt and pack of cinammon gums.
void Motel::exploreBathroom(Detective *d){
 

    cout << "\nYou enter the bathroom. It looks fairly plain, with nothing too outside of the " 
         << "ordinary for used motel bathroom. \n\nThe faucet is dripping. Quite questionable behavior "
         << "on the part of the room owner, but than again, you are snooping arround uninveited. "
         << "Maybe the trash can holds some secrets.\n";
         continuePrompt();

    cout << "Huh, that's odd. It only has two things in it: an empty packet of cinnamon gum and a receipt "
         << "from the Leaky Diner. Very curious. You inspect the receipt further. \"One blueberry muffin, 2 raw eggs in a cup.\" An aquired "
         << "taste for sure...\n";
         continuePrompt();


    if (d->motelClue.getFlag() == false) {
        cout << "[*You have gained 10 points*]\n[*New location unlocked: Diner*]\n" << endl;
        d->setPoints(10);
        d->motelClue.setFlag(true);
        cout << "[Your points currently: " << d->getPoints() << "]" << endl;
        continuePrompt();
    }
}

void Motel::exploreDrawers(){


    cout << "\nAs you make your way to the drawers, you glance around the room. " 
         <<"It looks as if it was untouched, save for the drawers left flung open.\n\n";

    cout << "All the drawers are empty, except for two. You inspect them further. In one, "
         <<"you find a week-old article about Mr. Holland's recent business ventures. In the other, "
         << "you find a jump rope. Interesting.\n";

        
    continuePrompt();
    

}

void Motel::exploreNightStand(){

    cout << "\nYou look around the room and see some items on the night stand next to the bed. ";
    cout << "You see a packet of cigarettes... and a half eaten cinnamon bun, with ants "
         << "crawling all over the sugary bread. Yuck!\n";

    continuePrompt();   

}

