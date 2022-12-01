
#include "../header/Hollands.hpp"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


void Hollands::playScene(Detective *d){ 
    int choice;

    clearStream();
    cout << "\nYou arrive at the neighborhood of the Hollands. You’re a few blocks away, but you \nmight as well be "
         << "at the heart of the action with all the commotion you’re hearing. \n\nThere’s police tape surrounding the "
         << "Holland mansion and the street is swarmed with \nboth reporters and curious bystanders.\n" << endl;
    continuePrompt();

    cout << "You make your way over to the crowd. They’re chattering to each other and themselves, \nall "
         << "theorizing about what possibly could have happened.\n\n"
         << "“I bet you it was one of the maids. I’d do it too if I worked for Holland of all \npeople. The guy’s a "
         << "crook,” shouts a middle-aged man to your left.\n" << endl;
    continuePrompt();

    cout << "You survey the crowd. Most people seem to be concerned. Fearful, even. There are \nofficers littered "
         << "around the scene, attempting and failing to quell the crowd’s \nhysteria. You notice one woman in "
         << "particular, wearing a reporter’s vest, arguing \nwith one of the officers.\n" << endl;
     continuePrompt();

    cout << "Would you like to approach someone?\n";
    cout << "[Enter '1' to leave the Hollands]\n";
    cout << "[Enter '2' to approach the reporter]\n";
    cout << "[Enter '3' to approach the officer]\n";
    cout << "[Enter '4' to approach the bystander]\n";
    cout << "\nEnter your choice: ";

     //validate input
     Location::validateInput(choice,4,1);
     clearStream();

    while( choice != 1){
        switch (choice){
            case 2: investigateReporter(d);
            break;
            case 3: investigateOfficer();
            break;
            case 4: investigateBystander(d);
            break;
        }

        cout << "What would you like to do now?\n";
        cout << "[Enter '1' to leave the Hollands]\n";
        cout << "[Enter '2' to approach the reporter]\n";
        cout << "[Enter '3' to approach the officer]\n";
        cout << "[Enter '4' to approach the bystander]\n";
        cout << "\nEnter your choice: ";
        Location::validateInput(choice,4,1);
        clearStream();

    }//end while

    if(choice == 1){
        LeaveHollands();
    }

    cout <<"Leaving Hollands Crime Scene...\n\n";

}



void Hollands::investigateReporter(Detective *d){
    //clear terminal 
    int choice;

    cout << "\nYou approach the reporter just as she turns her back to the officer. She looks annoyed, "
         << "\nso you better tread carefully.\n\n";
  
    cout << "What do you want to ask her?\n";
    cout << "[Enter '1' to ask the reporter what the fight was about]\n";
    cout << "[Enter '2' to ask what she knows about the case so far]\n";
    cout << "\nEnter your choice: ";
  
    Location::validateInput(choice, 2,1); //validate input first


    while(choice == 1 || choice == 2){ 
     switch (choice){
            case 1: 
            clearStream();
            cout << "\nYou ask the reporter what the fight was about.\n" << endl;
            cout << "\"The Auburndale County police have a track record of being horrible detectives. I \nran "
                 << "a story about how terribly they handled another murder case a few "
                 << "months back \nand they've had it out for me since.\"\n" << endl;
            continuePrompt();
            break;
         
            case 2:  
            clearStream();
            cout << "\nYou ask the reporter what she knows about the case so far.\n";
            cout << "\n\"It's mostly just theories right now, but a lot of residents are thinking the culprit "
                 << "\nmight be that Robert guy,\" she nods over to the middle-aged bystander that was "
                 << "yelling \nonly moments ago.\n" << endl;
            continuePrompt();
            cout << "\"Him, Why?\"\n\n"
                 << "\"He works at the town country club that rich folk like Holland waste their days at. "
                 << "\nThe man can't go two seconds without talking about how much he hates Holland,\" she \nreplies.\n" << endl;
               continuePrompt();
            break;
        }

        //display menu
        cout << "What do you want to ask her?\n";
        cout << "[Enter '1' to ask the reporter what the fight was about]\n";
        cout << "[Enter '2' to ask what she knows about the case so far]\n";
        cout << "[Enter '3' to leave her alone]\n";
        cout << "\nEnter your choice: ";
        validateInput(choice, 3,1); //validate input first
    } //end while loop

    clearStream();
    cout << "\nYou end the converstation with the reporter and head away...\n\n";
  
  
    continuePrompt();

}



void Hollands::investigateOfficer(){
    //clear terminal 

    cout << "\nYou approach the officer lingering around the sidewalk. \"Excuse me, Officer-\"\n\n"
         << "\"No questions,\" he interrupts coldly. Nevermind then.\n\n";
        
            //flag here to stop
    continuePrompt();

}


void Hollands::investigateBystander(Detective *d){
    //clear terminal 
    int choice;

    cout << "\nYou approach the man that was just yelling about the Hollands. You "
         << "look to his \nshirt and notice it's a uniform. It has \"Auburndale Country Club\" embroidered "
         << "\non the breast pocket, with the name \"Robert\" just below it. He seems to be angry.\n\n";
    
    cout << "What do you want to ask him?\n";
    cout << "[Enter '1' to ask why he's angry]\n";
    cout << "[Enter '2' to ask what he knows about the Hollands]\n";
    cout << "\nEnter your choice: ";
  
    Location::validateInput(choice, 2,1); //validate input first


    while(choice == 1 || choice == 2){ 
     switch (choice){
            case 1: 
            clearStream();
            cout << "\nYou ask the bystander why he's angry.\n\n";
            cout << "\"Angry? Why would I be angry? This is the best day of my life!\"\n\n";
            continuePrompt();
            cout << "\"Were the Hollands that bad?\" you inquire.\n\n"
                 << "\"All I'll say is Holland had a good habit of screwing people over if he "
                 << "was \nbenefiting from it. I sure won't be missing him,\" he says.\n" << endl;
            continuePrompt();
            break;
         
            case 2:  
            clearStream();
            cout << "\nYou ask the bystander what he knows about the Hollands.\n";
            cout << "\n\"I don't know much about Mrs. Hollands, but if she was putting up with "
                 << "Mr. Holland \njust fine must have been just as wicked.\"\n\n";
            continuePrompt();
            cout << "You prod further, \"What do you have against Mr. Holland?\"\n\n" 
                 << "\"What I don't have against Mr. Holland would be an easier question to answer,\" he \nreplies.\n" << endl;
            continuePrompt();
            break;
        }

        if (d->hollandsClue.getFlag() == false) {
          cout << "[*You have gained 10 points*]\n[*New location unlocked: Auburndale Country Club*]\n" << endl;
          d->setPoints(10);
          d->hollandsClue.setFlag(true);
          cout << "[Your points currently: " << d->getPoints() << "]" << endl;
          continuePrompt();
     }

        //display menu
          cout << "What do you want to ask him?\n";
          cout << "[Enter '1' to ask why he's angry]\n";
          cout << "[Enter '2' to ask what he knows about the Hollands]\n";
          cout << "[Enter '3' to leave him alone]\n";
          cout << "\nEnter your choice: ";
          Location::validateInput(choice, 3,1);
    } //end while loop

     clearStream();
    cout << "\nYou end the converstation with the bystander and head away...\n\n";
  
  
    continuePrompt();

}

//clues found in bathroom -> trashcan: receipt and pack of cinammon gums.
void Hollands::LeaveHollands(){

    

    cout << "\nI guess there's nothing much to do here, then.\n" << endl;
    continuePrompt();

}

