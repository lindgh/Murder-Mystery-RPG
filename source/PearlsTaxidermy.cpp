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
         << "\nthough the beady dead eyes of the mounted animals along the walls are watching your "
         << "\nevery move. While this place is unsettling, curiosity gets the best of you. \n\nAfter all,"
         << " the vitcims are connected to this place...\n\n";
         continuePrompt();

     if (d->pearlsTClue.getFlag() == false) {
        cout << "[*You have gained 10 points*]\n[*New menu option unlocked*]\n" << endl;
        d->setPoints(10);
        d->pearlsTClue.setFlag(true);
        cout << "[Your points currently: " << d->getPoints() << "]" << endl;
        continuePrompt();
    }

    cout << "Would you like to do?\n";
    cout << "[Enter '1' to approach the counter]\n";
    cout << "[Enter '2' to go to the wall full of pictures]\n";
    cout << "[Enter '3' to talk to the lady shelving some items]\n";
    cout << "[Enter '4' to leave Pearl's Taxidermy]\n";
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

        cout << "Would you like to do now?\n";
        cout << "[Enter '1' to approach the counter]\n";
        cout << "[Enter '2' to go to the wall full of pictures]\n";
        cout << "[Enter '3' to talk to the lady shelving some items]\n";
        cout << "[Enter '4' to leave Pearl's Taxidermy]\n";
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
         << "\nTaxidermy has had a slow year, since you can see all of the purchases made for the \nwhole year on "
         << "one page so far.\n\n";

    cout << "Scanning through it, you sure see all the victems' names on it. However, you notice \nthat "
         << "they have a black cross next to their names. Hmmm, strange...\n\n";

            //flag here to stop
    continuePrompt();

}



void PearlsTaxidermy::investigateWallOfPictures(){
    //clear terminal 

    cout << "\nOn the right side of the store, you see a wall of pictures decorating the place. Upon "
         << "\nfurther investigation, you see pictures of the town folks, some of them funny, and \nothers "
         << "of clients with their purchases from here.\n\n";
     continuePrompt();

    cout << "In one of them, there is a photo of Pearl and Arthur laughing, with Arthur eating a \ncinnamon "
         << "bun. It looks like the one from the diner.\n\n";

    cout << "However, you see one photo that catches your eye. It is of Pearl working on a stuffed \nanimal. But "
         << "what catches your eye is in the background. In the far left corner of the \npicture, it looks as though Mr. Manson "
         << "was yelling at Robert about something.\n\n";

            //flag here to stop
    continuePrompt();

}


//once here, after exploring, "force player to go to their room."
void PearlsTaxidermy::investigateEmployee(){

    int choice;
    //clear terminal

    cout << "\nAs you approach the lady shelving some items, you see that it is Pearl, Arthur's \ngirlfriend. You don't really know her, except for "
         << "the few times you have seen her \naround the diner or at the country club visiting Arthur. \n\nWith hesitation, you make "
         << "your way over to her.\n\n";
    continuePrompt();

    
    //initial menu, will change in switch statement 
    cout << "What would you like to do?\n";
    cout << "[Enter '1' to ask if Pearl suspects anyone is the killer]\n";
    cout << "[Enter '2' to ask Pearl who she thinks could be the next victim]\n";
    cout << "[Enter '3' to leave Pearl to her work]\n";
    cout << "\nEnter your choice: ";

    Location::validateInput(choice, 3,1); //validate input first


    while(choice != 3){ 
     switch (choice){
            case 1: 
            clearStream();
            cout << "\n\nYou ask Pearl who she suspects the killer to be.\n\n";
            cout << "Pearl stops shelving and looks thoughtfully for a second. \"Hmm, thats a pretty "
                 << "\nloaded question to ask someone... maybe its you!\" Pearl laughs.\n\n";
          continuePrompt();
          cout << "\"I know you're interested in the case,\" she says, \"but I would be careful if I \nwere you. "
                 << "Especially since the whole town is on edge, everyone is suspecting \neveryone.\"";
            cout << "\n\nIt seems Pearl does not take this question seriously, so you laugh along with \nher.\n\n";

            continuePrompt();
            break;
            case 2:  
            clearStream();
            cout << "\n\nYou ask Pearl who she guesses the next victim might be.\n";
            cout << "\n\"Woah man, are you sick?\" Pearl exclaims. \"I've grown up here with these folks \nmy whole life"
                 << " and you want guess which one of them will die next?\" Pearl has \nstopped shelving, and she looks angry.\n\n";
                 continuePrompt();
            cout << "She continues, \"You may be from out of town and find this murder investigation \ninteresting or something, but this is real life for us folks here!\"";
            cout << "\n\nYou are taken aback by Pearl's outburst, but can understand why. You sheepishly \napologize to her.\n\n";

            continuePrompt();
            break;
        }

        //display menu
        cout << "What would you like to do?\n";
        cout << "[Enter '1' to ask if Pearl suspects anyone is the killer]\n";
        cout << "[Enter '2' to ask Pearl who she thinks could be the next victim]\n";
        cout << "[Enter '3' to leave Pearl to her work]\n";
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
    

    cout << "\nAs you head to the door, you hear someone shout after you. You turn around to \nsee that it is Pearl.\n\n";

    cout << "She asks you, \"Hey! Before you go, I am holding a sale on some of my stuffed \nanimals. I have a few in the back, "
         << "would you like to see them and possibly \nbuy one?\"\n\n";
     continuePrompt();

    cout << "Would you like to do?\n";
    cout << "[Enter '1' to decline and leave Pearl's Taxidermy]\n";
    cout << "[Enter '2' to follow Pearl to the back of the store]\n";
    cout << "\nEnter your choice: ";

    //validate input
    Location::validateInput(choice,2,1);

    switch(choice){
        case 1:
        clearStream();
        cout << "\nYou kindly decline Pearl's offer and continue heading out the store. For now... "
             << "\nyou don't really need a creepy stuffed animal.\n\n";

        continuePrompt();
        break;
        case 2: gameOver(d);
        //SEND GAME OVER FLAG

        break;
    }


}

void PearlsTaxidermy::gameOver(Detective *d){
    
    clearStream();
    cout << "\nYou follow Pearl to the back of the store for some stuffed animals.\n\n";
    cout << "\"So, Pearl,\" you say. \"Can I ask you some questions?\"\n\n";
    continuePrompt();
    cout << "\"Sure, let me just grab something real quick. I'll be right back,\" Pearl "
         << "says \nwhile walking away.\n\n";

    cout << "You turn back to the stuffed animals to look at them. You see a big deer head \nmounted and "
         << "approach it. You suddenly feel scared as you watch your reflection \nin its dead gaze.\n\n";
     continuePrompt();

    cout << "Suddenly, you feel a small hand on your shoulder. You turn around... and \nthe world suddenly fades to black...\n\n\n\n\n\n";

    cout << "[GAME OVER]\n\n\n\n\n";

    d->setGameOverFlag();
}

