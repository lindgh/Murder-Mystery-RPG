#include "../header/PearlsTaxidermy.hpp"
#include "../header/Story.hpp"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


void PearlsTaxidermy::playScene(Detective *d){ 
    int choice;

    clearStream();
    cout << "\nYou make your way into Pearl's Taxidermy shop. The air feels stale, and you feel as "
         << "though the beady dead eyes of the mounted animals along the walls are watching your "
         << "every move. While this place is unsettling, curiosity gets the best of you. After all, "
         << " the vitcims are connected one way or another to this place...";
         continuePrompt();

     if (d->pearlsTClue.getFlag() == false) {
        cout << "[*You have gained 10 points*]\n[*New menu option unlocked*]\n" << endl;
        d->setPoints(10);
        d->pearlsTClue.setFlag(true);
        cout << "[Your points currently: " << d->getPoints() << "]" << endl;
        continuePrompt();
    }

    cout << "Would you like to do?\n";
    cout << "[Enter '1' to Approach the counter]\n";
    cout << "[Enter '2' to Go to the wall full of pictures]\n";
    cout << "[Enter '3' to Talk to the lady shelving some items]\n";
    cout << "[Enter '4' to Leave Pearl's Taxidermy]\n";
    cout << "\nEnter your choice: ";

     //validate input
     Location::validateInput(choice,4,1);
     clearStream();

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
        cout << "[Enter '1' to Approach the counter]\n";
        cout << "[Enter '2' to Go to the wall full of pictures]\n";
        cout << "[Enter '3' to Talk to the lady shelving some items]\n";
        cout << "[Enter '4' to Leave Pearl's Taxidermy]\n";
        cout << "\nEnter your choice: ";
        Location::validateInput(choice,4,1);
        clearStream();

    }//end while

    if(choice == 4){
        LeaveStore(d);
    }

}



void PearlsTaxidermy::investigateCounter(){
    //clear terminal 

    cout << "\nYou go to the counter, and see the log book of all the customers open. Guess Pearl's "
         << "Taxidermy has had a slow year, since you can see all of the purchases made for the whole year on "
         << "one page so far.\n\n";

    cout << "Scanning through it, you sure see all the victems' names on it. However, you notice that "
         << "they have a black cross next to their names. Hmmm, strange...\n\n";

            //flag here to stop
    continuePrompt();

}



void PearlsTaxidermy::investigateWallOfPictures(){
    //clear terminal 

    cout << "\nOn the right side of the store, you see a wall of pictures decorating the place. Upon "
         << "further investigation, you see pictures of the town folks, some of them funny, and others "
         << "of clients with their purchases from here.\n\n";

    cout << "In one of them, there is a photo of Pearl and Arthur laughing, with Arthur eating a cinnamon "
         << "bun. It looks like the one from the Leaky Diner.\n\n";

    cout << "However, you see one photo that catches your eye. It is of Pearl working on a stuffed animal. But "
         << "what catches your eye is in the background. In the far left corner of the picture, it looks as though Mr. Manson "
         << "was yelling at Robert about something.\n\n";

            //flag here to stop
    continuePrompt();

}


//once here, after exploring, "force player to go to their room."
void PearlsTaxidermy::investigateEmployee(){

    int choice;
    //clear terminal

    cout << "\nAs you approach the lady shelving some items, you see that it is Pearl, Arthur's girlfriend. You don't really know her, except for "
         << "the few times you have seen her around the Leaky Diner or at the Country Club visitng Arthur. With hesitation, you make "
         << "your way over to her\n\n";
    cout << "You and Pearl make small talk.\n\n";

    
    //initial menu, will change in switch statement 
    cout << "What would you like to do?\n";
    cout << "Enter '1' to ask if Pearl suspects anyone is the killer\n";
    cout << "Enter '2' to ask Pearl who she thinks could be the next victim \n";
    cout << "Enter '3' to leave Pearl to her work\n";
    cout << "\nEnter your choice: ";

    Location::validateInput(choice, 3,1); //validate input first


    while(choice != 3){ 
     switch (choice){
            case 1: 
            clearStream();
            cout << "\n\nYou finally ask Pearl who she suspects the killer to be.\n";
            cout << "Pearl stops shelving and looks thoughtfully for a second. \"Hmm, thats a pretty "
                 << "loaded question to ask someone... maybe its you!\" Pearl laughs. Then she says "
                 << "I know you were interested in the case, but I would be careful if I were you "
                 << "since the whole town is on edge, everyone is suspecting everyone\".";
            cout << "\n\nIt seems Pearl does not take this question seriously, so you laugh along with her.\n\n";

            continuePrompt();
            break;
            case 2:  
            clearStream();
            cout << "\n\nYou finally ask Pearl who she guesses the next victem might be.\n";
            cout << "\nPearl tells you \"Woah man, are you sick? I've grown up here with this folks my whole life"
                 << " and you want guess which one of them will die next?\" Pearl has stopped shelving, and she looks angry. "
                 << "She continues, \"You may be out of town and find this murder investigation interesting or something, but this is real life for us folks here!\"";
            cout << "\n\nYou are taken aback by Pearl's outburst, but can understand why. You sheepishly apologize to her.\n\n";

            continuePrompt();
            break;
        }

        //display menu
        cout << "What would you like to do?\n";
        cout << "Enter '1' to ask if Pearl suspects anyone is the killer\n";
        cout << "Enter '2' to ask Pearl who she thinks could be the next victim \n";
        cout << "Enter '3' to leave Pearl to her work\n";
        cout << "\nEnter your choice: ";
        validateInput(choice, 3,1); //validate input first
    } //end while loop

     clearStream();
    cout << "\nYou end the converstation with Pearl and head away...\n\n";
    continuePrompt();


}


//clues found in bathroom -> trashcan: receipt and pack of cinammon gums.
void PearlsTaxidermy::LeaveStore(Detective *d){
    int choice;
    

    cout << "\nAs you head to the door, you hear someone shout after you. You turn around to see that it is Pearl.\n\n";

    cout << "She asks you, \"Hey! Before you go, I am holding a sale on some of my stuffed animals. I have a few in the back, "
         << "would you like to see them and possibly buy one?\"\n\n";

    cout << "Would you like to do?\n";
    cout << "Enter '1' to decline and leave Pearl's Taxidermy\n";
    cout << "Enter '2' to follow Pearl to the back of the store";
    cout << "\nEnter your choice: ";

    //validate input
    Location::validateInput(choice,2,1);

    switch(choice){
        case 1:
        clearStream();
        cout << "You kindly decline Pearl's offer and continue heading out the store. For now... "
             << "you don't really need a creepy stuffed animal.\n\n";

        continuePrompt();
        break;
        case 2: gameOver(d);
        //SEND GAME OVER FLAG

        break;
    }


}

void PearlsTaxidermy::gameOver(Detective *d){
    

    cout << "\nYou follow Pearl to the back of the store for some stuffed animals.\n\n";
    cout << "You start to say, \"So Pearl... Can I ask you some questions?\"";
    cout << "\n\n\"Sure, let me just grab something real quick. I'll be right back\" Pearl "
         << "tells you while walking away.\n\n";

    cout << "You turn back to the stuffed animals to look at them. You see a big deer head mounted and "
         << "approach it. You feel scared suddenly as you watch your reflection in its dead gaze.\n\n";

    cout << "Suddenly, you feel a small hand on your shoulder. You turn arround... and see Pearl standing in front "
         << "of you. Suddenly the world fades to black...\n\n\n\n";

    cout << "GAME OVER\n\n\n";

    d->setGameOverFlag();



    continuePrompt();

}

