#include "../header/Locations.hpp"

// Location::Location(string name, string clue)
// {

// }

// void Location::displayName()
// {
//     // display the name
//     cout << "Location: " << name << endl;
// }

// void Location::setClueFound(bool val)
// {
//     clueFound = val;
// }

// bool Location::isClueFound()
// {
//     // return whether the clue is found
//     return clueFound;
// }

// bool Location::insertClue(string clue)
// {
//     // insert a clue into the clues vector
//     clues.push_back(clue);
// }

// void Location::displayClue()
// {
//     // display the clue

// }

// bool Location::isClueFound()
// {
//     // return whether the clue is found
//     return clueFound;
// }

// bool Location::insertClue(string clue)
// {
//     // insert a clue into the clues vector
//     // cluse.push_back(clue);
// }
//Will move to another class, but here for now for testing purposes
//helper function to validate integer input
void Location::validateInput(int& input, int max, int min){

    bool invalid;
    int num;
     do
        {
            cin >> num;
            //checks to make sure a char value was not entered.
			while (cin.fail()) //returns true if input failure occurs
			{
				cin.clear(); 
				cin.ignore(50, '\n');
				cout << "Error, please enter an integer: ";
                cin >> num;
			}

        //at this point, know that userInput is a number
        invalid =  num < min || num > max;
			if (invalid && num < 0)
			{
				cout << "Please enter a number greater than 0: ";
			}else if (invalid){
                // cout << "Please enter a number in the range 1 - 3: ";
                cout << "Please enter a number in the range " << min  << " - "
                     << max << ": ";
            }


       
        }while(invalid); //Will validate that userInput is not a char, and 
                        // within bounds of menu options.
        input = num; //at this point, num would be valid.
}
