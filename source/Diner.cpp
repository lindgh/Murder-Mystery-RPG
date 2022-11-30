#include "../header/Diner.hpp"
#include "../header/Detective.hpp"
#include <limits.h>

void Diner::talkToGentleman(Detective *aDetective) {
    cout << "\nYou decide to talk to the gentleman reading the article. Peering" <<
    " over his shoulder, you realize the article he's reading is about the" <<
    " Hollands' murder. You're intrigued, and decide to ask him a question." <<
    "\n\nWhat would you like to ask him?\n[Enter '1' to ask if he knew the" <<
    " Hollands]\n[Enter '2' to ask what he thinks about the murder]\n\nEnter your choice: ";

    int choice;
    validateInput(choice, 2, 1);
    clearStream();


    if (choice == 1) {
        cout << "\n\"Hello,\" you greet him. \"Did you know the Hollands" <<
        " by any chance?\" He turns to you, slightly startled at first," <<
        " but smiles at you nonetheless.\n\n\"Oh, yes! I work---well, used" <<
        " to---for Mr. Holland. He was a good man, you know, he would have" <<
        " a New Year's party every year at his lovely home for all his" <<
        " employees,\" he says, stirring a mug of coffee that looks like" <<
        " it's gone cold. \"The house was truly stunning... Though, I guess" <<
        " it's tainted now,\" he sighs." << endl;
        continuePrompt();
    }
    else {
        cout << "\n\"Crazy crime, huh?\"\n\n\"Oh, you bet,\" he shakes his" <<
        " head. \"I can't believe someone is just running 'round town and" <<
        " strangling folks. It gives me the shivers... And to think he got" <<
        " those poor folk in their house. It was truly a lovely home, you" <<
        " should have seen it!\"" << endl;
        continuePrompt();
    }

    cout << "Intrigued, you ask him if he remembers where the Holland residence" <<
    " is. \"1 Pivet Drive, if my memory serves me right,\" he chuckles. \"It's" <<
    " just a few blocks down from here.\n\nYou thank the old man and let him go" <<
    " back to his reading." << endl;
    continuePrompt();
    
    if (aDetective->dinerClue.getFlag() == false) {
        cout << "[*You have gained 10 points*]\n[*New location unlocked: Hollands Crime Scene*]\n" << endl;
        aDetective->setPoints(10);
        aDetective->dinerClue.setFlag(true);
        cout << "[Your points currently: " << aDetective->getPoints() << "]" << endl;
        continuePrompt();
    }

}

void Diner::eavesdrop() {
    cout << "\nYou decide to listen in on the argument between Abby and" <<
    " the stranger.\n\n\"Listen young man,\" she yells. \"If you wanna move" <<
    " out and find your own place to live with Pearl, you need to take your" <<
    " job seriously!\"\n\n\"Sorry, Ma,\" the stranger sheepishly smiles at" <<
    " Abby." << endl; 
    continuePrompt();
}

void Diner::mindYourBusiness() {
    cout << "\nYou decide to mind your own business, counting the cars that" << 
    " pass by the diner window." << endl;
    continuePrompt();
}

void Diner::dinerPrompt(Detective *aDetective) {
    int choice;
    cout << "What would you like to do?\n[Enter '1' to eavesdrop on Abby" <<
    " and the stranger's argument]\n[Enter '2' to talk with the gentleman" <<
    " near you reading the article]\n[Enter '3' to mind your own business]\n" << 
    "\nEnter your choice: ";
    validateInput(choice, 3, 1);
    clearStream();

    if (choice == 1) {
        eavesdrop();
    }
    else if (choice == 2) {
        talkToGentleman(aDetective);
    }
    else {
        mindYourBusiness();
    }

}

void Diner::playScene(Detective *aDetective) {

    cout << "\nYou make your way to the diner for some fuel. As" <<
    " you sit down at the bar, Abby, the waitress from yesterday," <<
    " spots you and heads over with the menu.\n\n\"Glad to see you" <<
    " decided to stick around, sugar,\" she smiles. \"What can I get" <<
    " you today?\"" << endl;
    continuePrompt();

    cout << "You glance at the menu. What are you going to order?\n[Enter" <<
    " '1' for pancakes]\n[Enter '2' for a cinnamon roll]\n[Enter '3' for a" <<
    " black coffee]\n\nEnter your choice: ";

    int choice;
    validateInput(choice, 3, 1);
    clearStream();

    string userOrder;
    if (choice == 1) {
        userOrder = "pancakes";
    }
    else if (choice == 2) {
        userOrder = "cinnamon roll";
    }
    else {
        userOrder = "black coffee";
    }

    cout << "\nAbby goes off to get your order prepared. You look" <<
    " around the diner and notice it's a bit slow today. There's a" <<
    " family enjoying breakfast by one of the booths and an old gentleman" <<
    " nearby you reading an article on his laptop in deep concentration.\n";
    continuePrompt();

    cout << "Suddenly, a young man enters the diner and makes a beeline" <<
    " for Abby. She seems to recognize him because her expression" << 
    " immediately turns sour. They get into a hushed argument behind" <<
    " the counter." << endl;
    continuePrompt();

    dinerPrompt(aDetective);
    choice = 1;
    while (choice == 1) {
        cout << "Would you like to do something else?\n[Enter '1' for yes]\n" <<
        "[Enter '2' to leave]\n\nEnter your choice: ";
        validateInput(choice, 2, 1);
        clearStream();

        if (choice == 1) {
            
            cout << "\n";
            dinerPrompt(aDetective);
        } 
        else {
            cout << "\nAbby brings you your order. \"Enjoy, darling,\" she smiles." <<
            " You enjoy your " << userOrder << " before heading out." << endl;
            continuePrompt();

            cout << "[Your points currently: " << aDetective->getPoints() << "]" << endl;
            continuePrompt();
        }
    }
}