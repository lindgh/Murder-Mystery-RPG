#include "../header/CountryClub.hpp"
#include <fstream>
#include <string>

void CountryClub::playScene(Detective *aDetective)
{
    ifstream scenceContainer;
    string line;

    // clearStream();
    cout << "\n";
    scenceContainer.open("./Story/CountryClub.txt");

    if (scenceContainer.is_open())
    {
        while (getline(scenceContainer, line))
        {
            if (line == "decision")
            {
                break;
            }

            cout << line << endl;
        }
    }
    else
    {
        cout << "Error opening file.\n";
    }

    int choice;

    cout << "[Enter '1' to approach someone]\n[Enter '0' to leave]\n\n";
    cout << "Enter your choice: ";
    validateInput(choice, 1, 0);
    clearStream();

    if (choice == 1)
    {
        setDecisions(aDetective);
    }

    cout << "\nI guess there's nothing much to do here, then." << endl;
    cout << "[Your points currently: " << aDetective->getPoints() << "]\n" << endl;
    continuePrompt();
    cout << "Leaving Auburndale Country Club...\n" << endl;
    continuePrompt();

    scenceContainer.close();
}

void CountryClub::setDecisions(Detective *aDetective)
{
    // create the decision 'tree'
    Choice decisions;
    Choice first;
    Choice second;

    decisions.setOutput("\nYou approach the crew member. His tag has \"Dylan\" embroidered right under the \ncountry club’s name. \"Hello, there!\" He greets you with a smile. \"How can I \nhelp you today?\"\n");
    first.setOutput("\n\"Do you know a Robert that works here?\" you ask.\n\n\"Robert? Yeah, poor fella got laid off last week. He’s got a bit of a temper, so \nhe sorta lost it and yelled at one of our patrons. He was a regular, so my boss \ndid not like that. You might’ve heard of him with all the news lately, that \nHolland guy. It’s a real shame what happened, he was well-known around here.\"\n\n\"Were the Hollands close with anyone here?\"\n\n\"Oh yeah, they were really close with the Mansons. That was of course until they \nwere killed a few months back. I heard it was a strangulation. Such a shame.\"\n");
    second.setOutput("\n\"I heard the Hollands came here often,\" you ask. \"Do you know anything about them?\"\n\n\"I sure did. They were regulars here. Mr. Holland had his favorites. He doted \non my coworker, Arthur, he could’ve told you more about them but he hasn’t been \ncoming to work lately…\"\n\n\"What do you know about Arthur?\"\n\"Not all that much, to be honest. The fella is pretty shy and reserved. He’s my \nboss’s favorite, I know that ‘cause he’s the only one with the keys to the \nsports equipment room.\"\n");

    decisions.setPrompt("What would you like to do?");
    decisions.setResult("ask about Robert", &first);
    decisions.setResult("ask about the Hollands", &second);

    Choice *choice = &decisions;
    int option = 0;

    while (true)
    {
        if (choice->isOutput())
        {
            choice->displayOutput();
            continuePrompt();
        }

        if (aDetective->countryClubClue.getFlag() == false && (choice == &first || choice == &second))
        {
            cout << "\n[*You have gained 10 points*]\n[*New location unlocked: Mansons Crime Scene*]\n"
                 << endl;
            aDetective->setPoints(10);
            cout << "[Your points currently: " << aDetective->getPoints() << "]" << endl;
            aDetective->countryClubClue.setFlag(true);
            continuePrompt();
        }

        if (choice->isPrompt())
        {
            choice->displayPrompt();
            choice->displayResults();

            cout << "\nEnter your choice: ";

            validateInput(option, choice->getResultsSize() - 1, 0);

            clearStream();

            choice = choice->getResult(option);
        }
        else
        {
            break;
        }
    }
}