/*
//
// Created by Ray on 3/6/2022.
//

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        next=NULL;
    }
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

class Stack
{
private:
    Node *S;

public:
    Stack()
    {
        S=NULL;
    }
    void push(int d);
    bool isEmpty();
    int pop();
    int peek();
    void sortStack();
    void sortedInsert(int);
    void print();

};

void Stack::push(int d)
{
    Node *temp;
    temp=S;
    Node *newNode=new Node(d);

    if(S==NULL)
    {
        S=newNode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }

}

int Stack::pop()
{
    Node *temp;
    temp=S;
    int d;

    if(temp->next==NULL)
    {
        d=temp->data;
        S=NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        d=temp->next->data;
        temp->next=NULL;
    }


    return d;
}

int Stack::peek()
{
    Node *temp;
    temp=S;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    int d=temp->data;

    return d;
}

bool Stack::isEmpty()
{
    if (S==NULL)
        return true;
    else
        return false;
}

void Stack::sortStack()
{
    if(!isEmpty())
    {
        int temp=pop();
        sortStack();
        sortedInsert(temp);
    }
}
void Stack::sortedInsert(int data)
{
    if(isEmpty() || data>peek() )
    {
        push(data);
    }
    else
    {
        int temp=pop();
        sortedInsert(data);
        push(temp);
    }
}

void Stack::print()
{
    Node *temp=S;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Stack stack;
    stack.push(-3);
    stack.push(14);
    stack.push(18);
    stack.push(-5);
    stack.push(30);
    stack.print();
    stack.sortStack();
    stack.print();


    return 0;
}
*/
