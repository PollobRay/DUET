//
// Created by Ray on 1/30/2022.
//

/*#include<iostream>
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
    void reverseList();
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

void LinkedList::insertNodeFront(int d)
{
    Node *newNode;
    newNode=new Node;
    newNode->data=d;
    newNode->next=list;
    list=newNode;

}

void LinkedList::insertNodeSorted(int d)
{
    Node *temp, *newNode,*t;
    newNode=new Node();
    newNode->data=d;
    temp=list;

    while(temp!=NULL&&temp->data<d)
    {
        t=temp;
        temp=temp->next;
    }
    if(temp==list)
    {
        list=newNode;
        list->next=temp;
    }
    else{
        t->next=newNode;
        newNode->next=temp;
    }
}

void LinkedList::print()
{
    Node *temp;
    temp=list;
    while(temp!=nullptr)
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
    if(temp->next==NULL)
        list=NULL;
    else
    {
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;

    }
}

void LinkedList::deleteFirstNode()
{
    Node *temp;
    temp=list;
    list=list->next;
    delete temp;
}

void LinkedList::deleteNode(int d)
{
    Node *temp, *t1;
    temp=list;

    while(temp!=NULL && temp->data!=d)
    {
        t1=temp;
        temp=temp->next;
    }

    if(temp==NULL)
    {
        cout<<"That element doesn't exits"<<endl;
    }
    else if(temp==list) //first Node
    {
        list=list->next;
        delete temp;
    }
    else
    {
        t1->next=temp->next;
        delete temp;
    }

}

void LinkedList::reverseList()
{
    Node *current, *prev, *next;
    current=list;
    prev=NULL;
    while(current!=NULL)
    {

        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }

    list=prev;
}

int main()
{

    LinkedList list;
    list.insertNodeFront(50);
    list.print();
    list.insertNodeBack(200);
    list.print();
    list.insertNodeSorted(600);
    list.print();
    list.insertNodeFront(300);
    list.print();
    list.insertNodeSorted(100);
    list.print();
    list.reverseList();
    list.print();
    list.reverseList();
    list.print();
    list.insertNodeFront(700);
    list.print();
    list.insertNodeBack(70);
    list.print();

    return 0;
}*/
