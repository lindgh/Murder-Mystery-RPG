#include "../header/CountryClub.hpp"
#include <fstream>
#include <string>

void CountryClub::playScene(Detective *aDetective)
{
    ifstream scenceContainer;
    string line;

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

    cout << "Enter 1 if so, or 0 if you would like to leave.\n";
    cin >> choice;

    if (choice == 1)
    {
        setDecisions();
    }

    scenceContainer.close();
}

void CountryClub::setDecisions()
{
    // create the decision 'tree'
    Choice decisions;
    Choice first;
    Choice second;

    decisions.setOutput("\nYou approach the crew member. His tag has \"Dylan\" embroidered right under the country club’s name. \"Hello, there!\" He greets you with a smile. \"How can I help you today?\"\n");
    first.setOutput("\n\"Do you know a Robert that works here?\"\n\"Robert? Yeah, poor fella got laid off last week. He’s got a bit of a temper, so he sorta lost it and yelled at one of our patrons. He was a regular, so my boss did not like that. You might’ve heard of him with all the news lately, Mr. Holland. It’s a real shame what happened, he was well-known around here.\"\n\"Were the Hollands close with anyone here?\"\n\"Oh yeah, they were really close with the Mansons. That was of course until they died a few months back. I heard it was a strangulation. Such a shame.\"");
    second.setOutput("\n\"I heard the Hollands came here often. Do you know anything about them?\"\n\"I sure did. They were regulars here. Mr. Holland had his favorites. He doted on my coworker, Arthur, he could’ve told you more about them but he hasn’t been coming to work lately…\"\n\"What do you know about arthur?\"\n\"Not all that much, to be honest. The fella is pretty shy and reserved. He’s my boss’s favorite, I know that ‘cause he’s the only one with the keys to the sports equipment room.\"");

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