#pragma once
#include <iostream>

// Stack Module


void printStackHelp(void)
{
    std::cout << "\n\n1. To push element in the stack:\n\t";
    std::cout << "push <value>\n\n";
    std::cout << "2. To pop element from the stack:\n\t";
    std::cout << "pop\n\n";
    std::cout << "3. To print the stack:\n\t";
    std::cout << "print\n\n";
    std::cout << "4. To quit:\n\t";
    std::cout << "quit\n\n";
}

void printStack(void)
{
    // TODO: print the stack
    std::cout << "print stack\n";
}

void popFromStack(void)
{
    // TODO: pop operation
    std::cout << "pop from stack\n";
}

void pushToStack(void)
{
    // TODO: push element
    int value;
    std::cin >> value;
    std::cout << "push " << value << " to stack\n";
}

void takeInputForStack(void)
{
    char input[100] ;
    std::cin >> input;
    
    if (input[0]=='q' || input[0]=='Q') return;
    else if (input[1]=='r' || input[1]=='R') printStack();
    else if (input[1]=='o' || input[1]=='O') popFromStack();
    else if (input[1]=='u' || input[1]=='U') pushToStack();
}

void initiateStack(void)
{
    printStackHelp();
    takeInputForStack();
}