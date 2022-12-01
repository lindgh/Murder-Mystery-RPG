#include "../header/OpeningScene.hpp"
#include "../header/Detective.hpp"
#include "../header/Story.hpp"
#include <limits.h>


void OpeningScene::playScene(Detective *aDetective) {
    //string cont;
    cout << "\nWelcome to Murder Mystery: A Text-Based RPG\n" <<
    "Authors: Linda Ghunaim, Angela Han, Adlai Morales-Bravo, Rawan Hassabelrasoul\n" << endl;
    continuePrompt();
    cout << "[Your points currently: " << aDetective->getPoints() << 
    "]\n"<< endl;
    
    cout << "It’s a stormy October night. You just got the week" <<
    " off from work to have a \nlittle “self-exploration” vacation" <<
    " in some small town a few hours from the \ncity. \n\nYou had never" << 
    " heard of a town by the name of Auburndale prior to today, but\n" <<
    "after a long discussion with your coworker about anything and" <<
    " everything \nhorror related, you learned that Auburndale has" <<
    " quite the reputation for \nbeing home to multiple serial murderers." << 
    " Being the true crime cinephile \nyou are, you figured it was" <<
    " the perfect getaway spot.\n" << endl;
    continuePrompt();

    cout << "That's weird. Your car is making noises it probably" <<
    " shouldn't be making. \nMaybe we can ignore it? \n" <<
    "[Enter '1' to ignore]\n[Enter '2' to pull over]\n\nEnter your choice: ";

    int choice;
    validateInput(choice, 2, 1);
    clearStream();

    if (choice == 1) {
        cout << "\nYou make it about a mile before your car starts" <<
        " making noises and breaking \ndown. I guess you have to pull" <<
        " over... You ";
    }
    else {
        cout << "\nYou pull over to the side of the road and ";
    }

    cout << "call a nearby mechanic. And the \nverdict is: it needs about" <<
    " an hour to fix. The mechanic offers to drop you \noff at a nearby" <<
    " diner until it’s ready, and considering the pouring rain \noutside," << 
    " you reluctantly accept.\n" << endl;
    continuePrompt();

    cout << "You walk into the diner. It’s relatively empty, yet it has" <<
    " a very cozy \nfeel to it. That might just be because it’s freezing" << 
    " outside, though... \nThe few souls lingering around all have their" <<
    " attention turned to the \nTV. A sports game maybe...?\n" << endl;
    continuePrompt();

    cout << "Nope! Murder. You only catch bits and pieces over the" << 
    " sound of the rain \noutside. Charitable wealthy couple found dead..." <<
    " home invasion... \nstrangulation? Creepy... whatever, not the most" << 
    " urgent thing right now. \nIt’s freezing, and you need a hot drink to" <<
    " warm you up. You make your \nway to the booth, and the waitress" <<
    " notices you.\n" << endl;
    continuePrompt();

    cout << "\"Hey there, sugar, my name’s Abby,\" she smiles warmly." <<
    " \"What can I get you?\"\n[Enter '1' for a black coffee]\n[Enter '2'" <<
    " for a hot chocolate]\n\nEnter your choice: ";

    string userDrink;
    validateInput(choice, 2, 1);
    clearStream();

    if (choice == 1) {
        userDrink = "black coffee";
    }
    else {
        userDrink = "hot chocolate";
    }
    
    cout << "\nShe writes your order down and starts working on it" <<
    " immediately. \n\n\"What brings you to a town like this in the" <<
    " pouring rain?\" she asks.\n[Enter '1' to tell her the truth]\n[Enter" <<
    " '2' to use flattery]\n\nEnter your choice: ";

    validateInput(choice, 2, 1);
    clearStream();

    if (choice == 1) {
        cout << "\n\"My car broke down a few miles back,\" you reply." <<
        "\n\n\"Oh that’s a shame, darling,\" she frowns. \"I hope it" <<
        " all gets sorted out \nsoon.\" She offers a sympathetic smile.\n"<< endl;
        continuePrompt(); 
    }
    else {
        cout << "\n\"A gorgeous face like yours,\" you reply.\n\n\"Oh" <<
        " don't be ridiculous,\" she giggles. \"I am very flattered," <<
        " darling, but \nyou're about as young as my son.\"\n" << endl;
        continuePrompt(); 
    }

    cout << "\"Here's your " << userDrink << ",\" Abby says, placing" <<
    " your mug in front of you. \nYou take a sip and sigh, feeling" <<
    " yourself warm up almost instantly. Abby \nturns to tend to" <<
    " the other customers before you stop her and ask about the \nnews" <<
    " on the TV.\n" << endl;
    continuePrompt();

    cout << "\"Oh, that,\" she sighs. \"Poor folks. The Hollands are well" <<
    " known around here. \nVery rich. My son, Arthur, works at the country" <<
    " club they'd visit often, \nnice folks. Tipped him well.\"\n" << endl;
    continuePrompt();

    cout << "\"What happened to them?\" you ask.\n" << endl;
    cout << "\"Nobody had seen them in a week, apparently. Mr. Holland" <<
    " was meant to be \ngolfing with his buddy yesterday but didn’t show up,\"" <<
    " she answers. \n\"Holland never misses golfing. Guess his buddy thought" <<
    " the same 'cause \nhe sent someone to Holland's house to check up on them" <<
    " but the poor thing \nfound quite a nasty scene. Strangulation marks," <<
    " blood... pretty gnarly \nstuff.\"\n\nYou grimace at the image. So, you" <<
    " didn't mishear anything earlier. That’s \nunfortunate. Abby seems pretty" <<
    " unfazed. Maybe she's just tired.\n" << endl;
    continuePrompt();
    
    cout << "\"The whole ordeal is quite funny, honestly,\" she chuckles. \"" <<
    "'Specially with \nhow the cops seem to be scrambling around like headless" <<
    " chicken. They tried \nputting out a statement to calm the public down" <<
    " but the folks of Auburndale \naren't dumb. They aren't all that smart," <<
    " mind you, but even my friend Betsy's \n9-year-old could connect the dots" <<
    " between this murder and one that happened \na few months back. That one" << 
    " really dealt a blow to their image. Couldn't \nfigure out who did it.\"" <<
    "\n\nAs you listen and sip on your " << userDrink << ", you notice that" <<
    " the diner is now \nempty, except for you and the waitress.\n" << endl;
    continuePrompt();
 
    cout << "\"Anyways, it’s getting late now, sugar,\" Abby takes your empty mug" <<
    " and wipes \nthe counter. \"We’ve got hot pancakes in the morning, don’t be shy" <<
    " to come on down \nif you decide to hang around town a bit longer.\n\nYou smile" << 
    " at Abby. Pancakes do sound nice. You leave her a tip and make your \nway outside." <<
    " The rain has stopped completely.\n\nYour phone buzzes. It's the" <<
    " mechanic. You make your way down the block to pick \nup your car.\n"  << endl;
    continuePrompt();

    cout << "It doesn't take more than 10 minutes to deal with the mechanic. Feeling" <<
    " the \nday's exhaustion hitting you at once, you feel thankful for that. You get" <<
    " \ninto your car and glance in the direction of the diner.\n\n";
    continuePrompt();
    cout << "Does your journey" <<
    " end here?\n[Enter '1' to stay and solve the murder]\n[Enter '2' to get out of" <<
    " this town]\n\nEnter your choice: ";

    validateInput(choice, 2, 1);
    clearStream();

    if (choice == 1) {
        //stay and solve murder
        cout << "\nYou're curious. Alright, let's stay and solve the crime.\n" << endl;
        continuePrompt();
        
        cout << "[*You have gained 10 points*]\n[*New location unlocked: Motel*]\n" << endl;
        aDetective->setPoints(10);
        continuePrompt();

        cout << "[Your points currently: " << aDetective->getPoints() << "]" << endl;
        continuePrompt();

    }
    else {
        //get out of town
        cout << "\nThis stuff sounds way too creepy to you. Maybe you'll just spend" <<
        " your vacation \nat home... You start your car and begin your drive home.\n" << endl;
        continuePrompt();

        cout << "\n[GAME OVER]\n\n\n-----\n" << endl;

        // gameOverFlag = true;
        aDetective->setGameOverFlag();


    }
}