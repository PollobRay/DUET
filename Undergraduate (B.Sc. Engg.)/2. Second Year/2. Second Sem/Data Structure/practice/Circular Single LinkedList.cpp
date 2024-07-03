//
// Created by Ray on 4/8/2022.
//

#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
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
    void insertAtFront(int data)
    {
        Node *newNode;
        newNode=new Node;
        newNode->data=data;
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
    void insertAtBack(int data)
    {
        Node *newNode=new Node();
        newNode->data=data;
        Node *temp=list;
        if(temp==NULL)
        {
            list=newNode;
            list->next=list;
        }
        else
        {
            temp=temp->next;
            while(temp->next!=list && temp!=NULL)
                temp=temp->next;
            temp->next=newNode;
            newNode->next=list;
        }
    }
    void insertAtPosition(int x,int data)
    {
        Node *newNode=new Node();
        newNode->data=data;
        newNode->next=NULL;
        Node *temp=list;
        Node *t1=temp;
        int pos=1;

        if(temp==NULL)
            list=newNode;
        else
        {

            if(x>1)
            {
                pos++;
                temp=temp->next;
            }

            while(temp!=list && pos!=x)
            {
                t1=temp;
                temp=temp->next;
                pos++;
            }
            if(temp==list)
            {
                newNode->next=list;
                while(temp->next!=list && temp!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newNode;
            }
            else if(t1->next!=list)
            {

                t1->next=newNode;
                newNode->next=list;
            }
            else
            {
                t1->next=newNode;
                newNode->next=temp;
            }

        }

    }
    void insertAtSorted(int data)
    {
        Node *newNode=new Node();
        newNode->data=data;
        newNode->next=NULL;
        Node *temp=list;
        Node *t1;

        if(temp==NULL)
            list=newNode;
        else
        {
            while(temp!=NULL && data>temp->data)
            {
                t1=temp;
                temp=temp->next;
            }
            if(temp==list)
            {
                newNode->next=list;
                list=newNode;
            }
            else if(temp==NULL)
            {
                t1->next=newNode;
            }
            else
            {
                t1->next=newNode;
                newNode->next=temp;
            }

        }
    }
    void print()
    {
        cout<<"Printing element\n";
        Node *temp=list;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
/*
int main()
{
    LinkedList list;
    list.insertAtBack(10);
    list.insertAtFront(20);
    list.insertAtBack(50);
    list.insertAtPosition(1,100);
    list.print();
    list.insertAtFront(20);
    list.print();
    list.insertAtFront(30);
    list.print();
    list.insertAtBack(50);
    list.insertAtBack(80);
    list.print();
    list.insertAtPosition(9,100);
    list.print();
    list.insertAtSorted(200);
    list.print();

    return 0;
}
*/