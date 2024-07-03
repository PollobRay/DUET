//
// Created by Ray on 1/30/2022.
//
// Circular Linked List using Singly Linked List with head pointer
/*
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

};

class LinkedList
{
private:
    Node *list;
public:
    LinkedList()
    {
        list=NULL;
    }
    void insertNodeBack(int);
    void insertNodeFront(int);
    void insertNodeSorted(int);
    void deleteLastNode();
    void deleteFirstNode();
    void deleteNode(int);
    void print();
};

void LinkedList::insertNodeBack(int d)
{
    Node *temp, *newNode;
    newNode=new Node();
    newNode->data=d;
    temp=list;

    if(list==NULL)
    {
        list=newNode;
        list->next=list; //circular
    }
    else
    {
        while(temp->next!=list)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=list; //circular
    }
}

void LinkedList::insertNodeFront(int d)
{
    Node *newNode;
    newNode=new Node;
    newNode->data=d;
    newNode->next=list;

    if(list==NULL)
    {
        list=newNode;
        list->next=list;
    }
    else
    {
        Node *temp=list;
        temp=temp->next;
        while(temp->next!=list&&temp!=NULL)
        {
            temp = temp->next;
        }
        list=newNode;
        temp->next=list;
    }
}

void LinkedList::insertNodeSorted(int d)
{
    Node *temp, *newNode,*t;
    temp=list;
    if(temp->data>d)
    {
        insertNodeFront(d);
        return;

    }
    temp=temp->next;
    while(temp!=list&&temp->data<d)
    {
        t=temp;
        temp=temp->next;
    }
    if(temp==list)
    {
        insertNodeBack(d);
        return;
    }
    else{
        newNode=new Node();
        newNode->data=d;
        t->next=newNode;
        newNode->next=temp;
    }
}

void LinkedList::print()
{
    Node *temp;
    temp=list;

     if(list==NULL)
    {
        cout<<"Empty"<<endl;
        return;
    }
    cout<<"Printing Elements.."<<endl;
    cout<<temp->data<<endl;
    temp=temp->next;
    while(temp!=list)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}

void LinkedList::deleteLastNode()
{
    Node *temp;
    temp=list;
    if(temp->next==list)
        list=NULL;
    else
    {
        while (temp->next->next!=list)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=list;

    }
}

void LinkedList::deleteFirstNode()
{
    Node *temp, *t1;
    temp=list;
    t1=list;
    //
    if(list->next==list)
    {
        list=NULL;
        return;
    }
    while(t1->next!=list)
    {
        t1=t1->next;
    }
    //
    list=list->next;
    t1->next=list;
    delete temp;
}

void LinkedList::deleteNode(int d)
{
    Node *temp, *t1;
    temp=list;
    if(list->data==d)
    {
        deleteFirstNode();
        return;
    }
    temp=temp->next;
    while(temp!=list && temp->data!=d)
    {
        t1=temp;
        temp=temp->next;
    }

    if(temp==list)
    {
        cout<<"That element doesn't exits"<<endl;
    }
    else if(temp->next==list)
    {
        deleteLastNode();
        return;
    }
    else
    {
        t1->next=temp->next;
        delete temp;
    }

}


int main()
{

    LinkedList list;
    list.insertNodeBack(50);
    list.print();
    list.insertNodeSorted(100);
    list.print();
    list.insertNodeSorted(20);
    list.print();
    list.insertNodeSorted(70);
    list.print();
    list.deleteNode(100);
    list.print();

    list.print();


    return 0;
}*/
