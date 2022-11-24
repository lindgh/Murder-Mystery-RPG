#ifndef CHOICE_HPP
#define CHOICE_HPP

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Choice
{
public:
    // functions
    bool isPrompt();
    bool isOutput();
    void displayPrompt();
    void displayOutput();
    void displayResults();
    void setPrompt(string);
    void setOutput(string);
    void setResult(string, Choice *);
    Choice *getResult(int);

private:
    // data members
    string prompt;
    string output;
    bool isSetPrompt = false;
    bool isSetOutput = false;
    map<string, Choice *> results;
};

#endif // CHOICE_HPP