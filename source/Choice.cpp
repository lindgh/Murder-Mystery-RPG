#include "../header/Choice.hpp"

void Choice::setPrompt(string prompt)
{
    this->prompt = prompt;
    isSetPrompt = true;
}

void Choice::setOutput(string output)
{
    this->output = output;
    isSetOutput = true;
}

void Choice::setResult(string option, Choice *choice)
{
    results[option] = choice;
}

bool Choice::isPrompt()
{
    return isSetPrompt;
}

bool Choice::isOutput()
{
    return isSetOutput;
}

void Choice::displayPrompt()
{
    cout << prompt << endl
         << endl;
}

void Choice::displayOutput()
{
    cout << output << endl;
}

int Choice::getResultsSize()
{
    return results.size();
}

void Choice::displayResults()
{
    int option = 1;

    for (map<string, Choice *>::iterator iter = results.begin(); iter != results.end(); iter++)
    {
        cout << "[Enter "
             << "'" << option << "'"
             << " to " << iter->first << "]" << endl;
        option++;
    }
}

Choice *Choice::getResult(int choice)
{
    int option = 1;

    for (map<string, Choice *>::iterator iter = results.begin(); iter != results.end(); iter++)
    {
        if (option == choice)
        {
            return iter->second;
        }

        option++;
    }

    return NULL;
}