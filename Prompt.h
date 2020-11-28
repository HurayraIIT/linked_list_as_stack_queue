#pragma once
#include <iostream>

// TODO

void initiateStack(void)
{
    // TODO: implement stack code
}

void initiateQueue(void)
{
    // TODO: implement queue code
}

// Prompt

void printWelcomeMessage(void)
{
    std::cout << std::endl;
    std::cout << "\t> Welcome stranger!!!!\n";
    std::cout << "\t> _________-_-________\n";
    std::cout << std::endl;
}

void printInitialChoiceQuery(void)
{
    std::cout << "\t> Press \t1\tfor Stack\n";
    std::cout << "\t> Press \t2\tfor Queue\n";
}

void printInvalidInputError(void)
{
    std::cout << "\n\n\t> Invalid choice.\n";
    std::cout << "\t> Your choice must be 1 or 2.\n\n";
}

bool isChoiceValid (int choice)
{
    if(choice==1 || choice==2) return true;
    else return false;
}

int takeChoiceInput(void)
{
    int choice = 0;
    std::cout << "\t> ";
    std::cin >> choice; // TODO: Implement better input validation
    
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