#include "../header/Mansons.hpp"
#include <fstream>
#include <string>

void Mansons::playScene()
{
    ifstream scenceContainer;
    string line;

    scenceContainer.open("./Story/Mansons.txt");

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

    setDecisions();

    scenceContainer.close();
}

void Mansons::setDecisions()
{
    // create the decision 'tree'
    Choice decisions;
    Choice zero;
    Choice one;
    Choice two;
    Choice three;
    Choice four;

    decisions.setPrompt("What would you like to do?");
    zero.setOutput("\nYou decide it is better to not break the law and leave the Manson’s property.\nIt’s not worth getting in trouble.\n");
    one.setOutput("\nThere is no turning back.\nYou cross the yellow tape, and approach the front door.\nYou give the door knob a shake and find that it is locked.\nLooking around, you find a rock and throw it at the window next to the door and enter the home.\n");
    one.setPrompt("What would you like to do?");
    two.setOutput("\nYou enter the office room and approach a desk.\nYou are looking through the drawers, and you see a receipt for a $14K crocodile head, and a lawsuit against Pearl’s Taxidermy… Interesting\n");
    three.setOutput("\nYou enter the living room.\nWoah!!\nThese people knew how to live lavishly.\nThere entertainment area could be your whole home.\nAs you walk out and cross the room, in the corner of the you see a cord,\nthat looks like the one from Lyle’s Country club.\n");
    four.setOutput("\nYou enter the kitchen.\nLike a typical family, their refrigerator is covered in a collage of pictures and magnets.\nUpon further inspection, you see a picture of all the victims holding stuffed animals outside a place called Pearls Taxidermy.\nYou also see a picture of the Mansons celebrating at the Leaky diner,\nwith Abby standing by the table with a birthday cake.\n");

    decisions.setResult("Leave", &zero);
    decisions.setResult("break in and enter the home", &one);

    one.setResult("go to the office room", &two);
    one.setResult("go to the living room", &three);
    one.setResult("go to the kitchen", &four);

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
            cin >> option;

            choice = choice->getResult(option);
        }
        else
        {
            break;
        }
    }
}
