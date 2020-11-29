#pragma once
#include <iostream>

// Queue Module

void takeInputForQueue(void);

void printQueueHelp(void)
{
    std::cout << "\n\n1. To enqueue element : ";
    std::cout << "enqueue <value>\n";
    std::cout << "2. To dequeue element : ";
    std::cout << "dequeue\n";
    std::cout << "3. To print the queue: ";
    std::cout << "print\n";
    std::cout << "4. To quit: ";
    std::cout << "quit\n\n";
}

void printQueue(void)
{
    Queue.print();
    takeInputForQueue();
}

void dequeueFromQueue(void)
{
    Queue.deleteFirstElem();
    Queue.print();
    takeInputForQueue();
}

void enqueueToQueue(void)
{
    int value;
    std::cin >> value;
    Queue.insert(value);
    Queue.print();
    takeInputForQueue();
}

void takeInputForQueue(void)
{
    std::cout << "\t> ";
    char input[100] ;
    std::cin >> input;
    
    if (input[0]=='q' || input[0]=='Q') return;
    else if (input[0]=='p' || input[0]=='P') printQueue();
    else if (input[0]=='d' || input[0]=='D') dequeueFromQueue();
    else if (input[0]=='e' || input[0]=='E') enqueueToQueue();
    else
    {
        std::cout << "Invalid input, try again.\n";
        takeInputForQueue();
    }
}

void initiateQueue(void)
{
    printQueueHelp();
    takeInputForQueue();
}