#include "../header/PearlsTaxidermy.hpp"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;



void PearlsTaxidermy::playScene(){ 
    int choice;

    cout << "You make your way into Pearl's Taxidermy shop. The air feels stale, and you feel as "
         << "though the beady dead eyes of the mounted animals along the walls are watching your "
         << "every move. While this place is unsettling, curiosity gets the best of you. After all, "
         << " the vitcims are connected one way or another to this place...\n\n";

    cout << "Would you like to do?\n";
    cout << "Enter '1' to Approach the counter\n";
    cout << "Enter '2' to Go to the wall full of pictures\n";
    cout << "Enter '3' to Talk to the lady shelving some items\n";
    cout << "Enter '4' to Leave Pearl's Taxidermy\n";
    cout << "\nEnter your choice: ";

    //validate input
    Location::validateInput(choice,4,1);

    while( choice != 4){
        switch (choice){
            case 1: investigateCounter();
            break;
            case 2: investigateWallOfPictures();
            break;
            case 3: investigateEmployee();
            break;
        }

        cout << "\n\nWould you like to do now?\n";
        cout << "Enter '1' to Approach the counter\n";
        cout << "Enter '2' to Go to the wall full of pictures\n";
        cout << "Enter '3' to Talk to the lady shelving some items\n";
        cout << "Enter '4' to Leave Pearl's Taxidermy\n";
        cout << "\nEnter your choice: ";
        Location::validateInput(choice,4,1);

    }//end while

    if(choice == 4){
        LeaveStore();
    }

    //testing purpose
    cout <<"\n\n exiting Pearl's Taxidermy location...";
    cout <<"\nPress any key to continue";
    cin.ignore();

}



void PearlsTaxidermy::investigateCounter(){
    //clear terminal 
    system("clear");
    cout << "You go to the counter, and see the log book of all the customers open. Guess Pearl's "
         << "Taxidermy has had a slow year, since you can see all of the purchases made for the whole year on "
         << "one page so far.\n\n";

    cout << "Scanning through it, you sure see all the victems' names on it. However, you notice that "
         << "they have a black cross next to their names. Hmmm, strange...\n\n";

            //flag here to stop
    cout << "Press any key to continue";
    cin.ignore();

}



void PearlsTaxidermy::investigateWallOfPictures(){
    //clear terminal 
    system("clear");
    cout << "On the right side of the store, you see a wall of pictures decorating the place. Upon "
         << "further investigation, you see pictures of the town folks, some of them funny, and others "
         << "of clients with their purchases from here.\n\n";

    cout << "In one of them, there is a photo of Pearl and Arthur laughing, with Arthur eating a cinnamon "
         << "bun. It looks like the one from the Leaky Diner.\n\n";

    cout << "However, you see one photo that catches your eye. It is of Pearl working on a stuffed animal. But "
         << "what catches your eye is in the background. In the far left corner of the picture, it looks as though Mr. Manson "
         << "was yelling at Robert about something.\n\n";

            //flag here to stop
    cout << "Press any key to continue";
    cin.ignore();

}


//once here, after exploring, "force player to go to their room."
void Motel::exploreRoom(){

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


    while(choice != 4){ 
     switch (choice){
            case 1: exploreBathroom(); //
            break;
            case 2: exploreDrawers(); //
            break;
            case 3: exploreNightStand();
            break;
        }

        //display menu
        cout << "\nWhat would you like to do now?\n";
        cout << "Enter '1' to explore the bathroom\n";
        cout << "Enter '2' to investigate the table with drawers\n";
        cout << "Enter '3' to investigate the nightstand next to the bed\n";
        cout << "Enter '4' to leave room now\n";
        cout << "\nEnter your choice: ";
        validateInput(choice, 4,1); //validate input first
    } //end while loop

    //if exiting room after exploring
    if(choice == 4){
        exitRoom203AfterExplore();
    }


}


//clues found in bathroom -> trashcan: receipt and pack of cinammon gums.
void Motel::exploreBathroom(){
    system("clear"); 

    cout << "You enter the bathroom. It looks fairly plain, with nothing too outside of the " 
         << "ordinary for used motel bathroom. \n\nThe faucet is dripping. Quite questionable behavior "
         << "on the part of the room owner, but than again, you are snooping arround uninveited. "
         << "Maybe the trash can holds some secrets.\n\n";

    cout << "Huh, that's odd. It only has two things in it: an empty packet of cinnamon gum and a receipt "
         << "from the Leaky Diner. Very curious.\n\n";

    cout << "You inspect the receipt further. \"One blueberry muffin, 2 raw eggs in a cup.\" An aquired "
         << "taste for sure...\n\n";

    cout <<"Press any key to continue";
    cin.ignore();


}

void Motel::exploreDrawers(){
    system("clear");

    cout << "As you make your way to the drawers, you glance around the room. " 
         <<"It looks as if it was untouched, save for the drawers left flung open.\n\n";

    cout << "All the drawers are empty, except for two. You inspect them further. In one, "
         <<"you find a week-old article about Mr. Holland's recent business ventures. In the other, "
         << "you find a jump rope. Interesting.\n\n";

        
    cout <<"Press any key to continue";
    cin.ignore();
    

}

void Motel::exploreNightStand(){
    system("clear");

    cout << "You look around the room and see some items on the night stand next to the bed. ";
    cout << "You see a packet of cigarettes... and a half eaten cinnamon bun, with ants "
         << "crawling all over the sugary bread. Yuck!\n\n";

    cout <<"Press any key to continue";
    cin.ignore();    

}