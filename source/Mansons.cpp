#include "../header/Mansons.hpp"
#include <fstream>
#include <string>

void Mansons::playScene(Detective *aDetective)
{
    ifstream scenceContainer;
    string line;

    //clearStream();
    cout << "\n";

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
        continuePrompt();
    }
    else
    {
        cout << "Error opening file.\n";
    }

    setDecisions(aDetective);

    cout << "Leaving the Mansons...\n\n";

    scenceContainer.close();
}

void Mansons::setDecisions(Detective *aDetective)
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
    one.setOutput("\nThere is no turning back.\n\nYou cross the yellow tape, and approach the front door. You give the door knob \na shake and find that it is locked. Looking around, you find a rock and throw \nit at the window next to the door and enter the home.\n");
    one.setPrompt("What would you like to do?");
    two.setOutput("\nYou enter the office room and approach a desk. You look through the drawers and \nsee a receipt for a $14K crocodile head, along with a lawsuit against Pearl’s \nTaxidermy... Interesting.\n");
    three.setOutput("\nYou enter the living room.\n\nWoah!! These people knew how to live lavishly. Their entertainment area could \nbe your whole home.\n\nAs you walk out and cross the room, in the corner you see a cord that \nlooks like the one from Auburndale's Country club.\n");
    four.setOutput("\nYou enter the kitchen.\n\nLike a typical family, their refrigerator is covered in a collage of pictures and \nmagnets. Upon further inspection, you see a picture of all the victims holding \nstuffed animals outside a place called Pearls Taxidermy.\n\nYou also see a picture of the Mansons celebrating at the diner, with Abby \nstanding by the table with a birthday cake.\n");

    decisions.setResult("leave", &zero);
    decisions.setResult("break in and enter the home", &one);

    one.setResult("go to the office room", &two);
    one.setResult("go to the living room", &three);
    one.setResult("go to the kitchen", &four);

    Choice *choice = &decisions;
    int option = 0;
    int continueFlag = 1;

    while (true)
    {
        if (choice->isOutput())
        {
            choice->displayOutput();
        }

        if (choice == &zero)
        {
            continuePrompt();
            break;
        }

        if (choice->isPrompt())
        {
            choice->displayPrompt();
            choice->displayResults();

            cout << "\nEnter your choice: ";

            validateInput(option, choice->getResultsSize(), 1);

            clearStream();

            choice = choice->getResult(option);
        }

        if (choice == &one)
        {
            choice->displayOutput();
            continuePrompt();
            choice->displayPrompt();

            while (continueFlag == 1)
            {
                cout << "\nLocations to explore:" << endl;
                one.displayResults();

                cout << "\nEnter your choice: ";

                validateInput(option, one.getResultsSize(), 1);

                clearStream();

                choice = one.getResult(option);

                if (choice->isOutput())
                {
                    choice->displayOutput();
                    continuePrompt();
                }

                if (aDetective->mansonsClue.getFlag() == false && choice == &four)
                {
                    cout << "[*You have gained 10 points*]\n[*New location unlocked: Pearl's Taxidermy*]\n"
                         << endl;
                    aDetective->setPoints(10);
                    cout << "[Your points currently: " << aDetective->getPoints() << "]" << endl;
                    aDetective->mansonsClue.setFlag(true);
                    continuePrompt();
                }

                cout << "\nWould you like to continue exploring?\n[Enter '1' to keep exploring]\n[Enter '0' to leave]\n";
                cout << "\nEnter your choice: ";
                validateInput(continueFlag, 1, 0);
                clearStream();
            }

            cout << "\nI guess there's nothing much to do here then...\n";
            continuePrompt();
            return;
        }
    }
}
