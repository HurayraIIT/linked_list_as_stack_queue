#pragma once
#include <iostream>

// Queue Module


void printQueueHelp(void)
{
    std::cout << "\n\n1. To enqueue element in the queue:\n\t";
    std::cout << "enqueue <value>\n\n";
    std::cout << "2. To dequeue element from the queue:\n\t";
    std::cout << "dequeue\n\n";
    std::cout << "3. To print the queue:\n\t";
    std::cout << "print\n\n";
    std::cout << "4. To quit:\n\t";
    std::cout << "quit\n\n";
}

void printQueue(void)
{
    // TODO: print the stack
    std::cout << "print queue\n";
}

void dequeueFromQueue(void)
{
    // TODO: pop operation
    std::cout << "dequeue from queue\n";
}

void enqueueToQueue(void)
{
    // TODO: enqueue element
    int value;
    std::cin >> value;
    std::cout << "enqueue " << value << " to queue\n";
}

void takeInputForQueue(void)
{
    char input[100] ;
    std::cin >> input;
    
    if (input[0]=='q' || input[0]=='Q') return;
    else if (input[1]=='r' || input[1]=='R') printQueue();
    else if (input[0]=='d' || input[0]=='D') dequeueFromQueue();
    else if (input[0]=='e' || input[0]=='E') enqueueToQueue();
}

void initiateQueue(void)
{
    printQueueHelp();
    takeInputForQueue();
}