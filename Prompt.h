#pragma once
#include <iostream>
#include <limits>
#include "StackModule.h"
#include "QueueModule.h"
using namespace std;
// Prompt

void printWelcomeMessage(void)
{
    cout << endl;
    cout << "\t> Welcome stranger!!!!\n";
    cout << "\t> _________-_-________\n";
    cout << endl;
}

void printInitialChoiceQuery(void)
{
    cout << "\t> Press \t1\tfor Stack\n";
    cout << "\t> Press \t2\tfor Queue\n";
    cout << "\t> Press \t-1\tfor exit\n";
}

void printInvalidInputError(void)
{
    cout << "\n\n\t> Invalid choice.\n";
    cout << "\t> Your choice must be 1 or 2.\n\n";
}

bool isChoiceValid (int choice)
{
    if(choice==1 || choice==2) return true;
    else return false;
}

int takeChoiceInput(void)
{
    int choice = 0;
    cout << "\t> ";
    cin >> choice; // TODO: Implement better input validation
    if(cin.fail())
    {
        cout<<"Error -- you did not enter an integer"<<endl;       
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        choice = 0;
    }
    if(choice == -1) exit(1);
    if(isChoiceValid(choice)!=true)
    {
        printInvalidInputError();
        printInitialChoiceQuery();
        choice = takeChoiceInput();
    }
    
    return choice;
}

void chooseModule (int choice)
{
    if (choice==1) initiateStack();
    else initiateQueue();
}

void prompt()
{
    printWelcomeMessage();
    printInitialChoiceQuery();
    int choice = takeChoiceInput();
    chooseModule(choice);
}
