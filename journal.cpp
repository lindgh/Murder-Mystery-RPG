#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

string newEntry(string entry1, int userID);
void viewEntry(string entry1, int userID);
int main()
{
	int ch;

	string entry1;
	
	do
	{
		system("cls");
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. NEW JOURNAL ENTRY";
		cout<<"\n\n\t02. VIEW JOURNAL ENTRIES";
		cout<<"\n\n\t03. EXIT";
		cout<<"\n\n\tSelect Your Option (1-3) ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
		case 1:
			newEntry(entry1, userID);
			break;
		case 2:
			viewEntry(entry1, userID);
			break;
		 case 3:
			cout<<"\n\n\tGoodbye\n";
			return 1;
			break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(ch!='3');
	return 0;
}

string newEntry(string entry1, int userID)
{
	ofstream outFile;
	outFile.open("journal.txt");
	if (outFile.fail())
	{
		cout << "Error could not open file.";
		return entry1;
	}
	int pw;
	cout << "Enter your userID: \n";
	cin >> pw;
	cin.ignore();
	if(pw == userID)
	{
  
	cout << "Whats on your mind\n\t" << endl;
	getline(cin,entry1);
	outFile << entry1;
	cout << endl << endl;
	}
	

	cout << "Entry submitted. \n\tpress enter to return to main menu\n";
	outFile.close();
	return entry1;
}


void viewEntry(string entry1, int userID)
{
	int pw;
	cout << "Enter your userID:\n";
	cin >> pw;
	if(pw == userID)
	{
	ifstream inFile;
	inFile.open("journal.txt");
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}


	cout << entry1;
}
}
