#include "../header/Locations.hpp"

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