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
            //std::cout << "\t\t# Deleted " << node->data << std::endl;
            head = 0;
        }
        else
        {
            while(node->next->next!=0)
            {
                node = node->next;
            }
            //std::cout << "\t\t# Deleted " << node->next->data << std::endl;
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

/*
  public void delete(int index)
  {
    if(index==0)
    {
      head=head.next;
    }
    else
    {
      Node n=head;
      Node n1=null;
      for(int i=0;i<index-1;i++)
      {
        n=n.next;
      }
      n1=n.next;
      n.next=n1.next;
      System.out.println("n1" + n1.data);
    }
  }

public void show()
  {
    Node node=head;
    
    while(node.next!=null)
    {
      System.out.println(node.data);
      node=node.next;
    }
    System.out.println(node.data);
  }
public class Linkedlist
{
  Node head;
  
  public void insert(int data)
  {
    Node node=new Node();
    node.data=data;
    node.next=null;
    
    if(head==null)
    {
      head=node;
    }
    else
    {
      Node n=head;
      while(n.next!=null)
      {
        n=n.next;
      }
      n.next=node;
    }
  }

  
  public void insertAtStart(int data)
  {
    Node node=new Node();
    node.data=data;
    node.next=head;
    head=node;
  }
  public void insertAt(int index,int data)
  {
    Node node=new Node();
    node.data=data;
    node.next=head;
    
    Node n=head;
    for(int i=0;i<index-1;i++)
    {
      n=n.next;
    }
    node.next=n.next;
    n.next=node;
  }
}
*/