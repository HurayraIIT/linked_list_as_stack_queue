#pragma once
#include <iostream>

class Node
{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = 0;
    }
};

class LinkedList
{
    public:
    Node *head;
    LinkedList()
    {
        head = 0 ;
    }

    void insert(int val)
    {
        Node *node = new Node(val);

        if (head==0) head = node;
        else 
        {
            Node *temp = head;
            while(temp->next!=0)
            {
                temp = temp->next;
            }
            temp->next = node;
        }
    }

    void print()
    {
        Node *node = head;
        if(node==0)
        {
            std::cout << "\t\t# No elements.\n";
            return;
        }
        std::cout << "\t\t# head: ";
        while(node->next!=0)
        {
            std::cout << " " << node->data;
            node = node->next;
        }
        std::cout << " " << node->data << std::endl;
    }

    void deleteLastElem(void)
    {
        Node *node = head;
        if(node==0) std::cout << "\t\t# Can't delete. Stack is empty.\n";
        else if(node->next==0)
        {
            head = 0;
        }
        else
        {
            while(node->next->next!=0)
            {
                node = node->next;
            }
            
            node->next = 0;
        }
    }

    void deleteFirstElem(void)
    {
        if(head==0) std::cout << "\t\t# Queue is empty\n";
        else
        {
            head = head->next;
        }
    }

};

LinkedList Stack, Queue;
