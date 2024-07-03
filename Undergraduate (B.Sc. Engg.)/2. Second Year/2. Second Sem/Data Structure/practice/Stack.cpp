//
// Created by Ray on 4/3/2022.
//

#include<iostream>
using namespace std;
/*
class Stack
{
    const static int MAX_SIZE = 10;
    int values[MAX_SIZE];
    int TOP = -1;
public:
    bool isFull()
    {
        if (TOP==MAX_SIZE-1)
            return true;
        return false;
    }
    bool isEmpty()
    {
        if(TOP == -1)
            return true;
        return false;
    }
    void push(int data)
    {
        if(isFull())
        {
            cout<<"The stack is full\n";
            return ;
        }
        TOP++;
        values[TOP]=data;
    }
    int peek()
    {
        if(isEmpty())
        {
            cout<<"The stack is empty\n";
            return -1;
        }
        return values[TOP];
    }
    int pop()
    {
        if (isEmpty())
        {
            cout<<"The stack is empty\n";
            return -1;

        }
        int data=values[TOP];
        TOP--;
        return data;
    }

    void sortedInsert(int data)
    {
        if(isEmpty()||data>peek())
            push(data);
        else
        {
            int temp=pop();
            sortedInsert(data);
            push(temp);
        }
    }
    void sortStack()
    {
        if(!isEmpty())
        {
            int temp=pop();
            sortStack();
            sortedInsert(temp);
        }
    }
    void print()
    {
        for (int i = 0; i <= TOP; ++i)
        {
            cout<<values[i]<<" ";
        }
        cout<<endl;
    }
};

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        prev=NULL;
        next=NULL;
    }
};

class LinkedStack
{
private:
    Node *top;

public:
    LinkedStack()
    {
        top=NULL;
    }
    bool isEmpty()
    {
        if(top==NULL)
            return true;
        return false;
    }
    void push(int v)
    {
        Node *newNode=new Node();
        newNode->data=v;

        if(top==NULL)
        {
            top=newNode;
            return;
        }
        top->next=newNode;
        newNode->prev=top;
        top=newNode;

    }
    int peek()
    {
        if(top==NULL)
            return -1;
        return top->data;
    }
    int pop()
    {
        if(top==NULL)
            return -1;
        int data=top->data;
        top=top->prev;
        return data;
    }
};
int main()
{
    Stack s;
    s.push(100);
    s.push(20);
    s.push(10);
    s.push(40);
    s.push(50);
    s.push(600);
    s.push(70);
    s.push(8);
    s.push(1);
    s.print();
    s.sortStack();
    s.print();



    return 0;
}
*/