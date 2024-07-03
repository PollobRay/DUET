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
/*
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
        Node *newNode=new Node();
        newNode->data=data;
        newNode->next=NULL;

        if(list==NULL)
            list=newNode;
        else
        {
            newNode->next=list;
            list=newNode;
        }
    }
    void insertAtBack(int data)
    {
        Node *newNode=new Node();
        newNode->data=data;
        newNode->next=NULL;
        Node *temp=list;
        if(temp==NULL)
            list=newNode;
        else
        {
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=newNode;
        }
    }
    void insertAtPosition(int x,int data)
    {
        Node *newNode=new Node();
        newNode->data=data;
        newNode->next=NULL;
        Node *temp=list;
        Node *t1;
        int pos=1;

        if(temp==NULL)
            list=newNode;
        else
        {
            while(temp!=NULL && pos!=x)
            {
                t1=temp;
                temp=temp->next;
                pos++;
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
*/

class LinkedList
{
private:
    Node *list;
public:
    LinkedList()
    {
        list=NULL;
    }

    void insertAtFront(int d)
    {
        Node *node=new Node();
        node->data=d;

        if(list==NULL)
        {
            list=node;
            list->next=list;
        }
        else
        {
            Node *temp=list;
            while(temp->next!=list)
            {
                temp=temp->next;
            }
            node->next=list;
            temp->next=node;
            list=node;
        }

    }
    void insertBack(int d)
    {
        Node *node=new Node();
        node->data=d;

        if(list==NULL)
        {
            list=node;
            list->next=list;
        }
        else
        {
            Node *temp=list;
            while(temp->next!=list)
            {
                temp=temp->next;
            }
            node->next=list;
            temp->next=node;
        }

    }
    void deleteFront()
    {
        Node *temp=list;

        if(temp==NULL)
        {
            cout<<"Underflow\n";
            return;
        }
        if(temp->next==list)
            list=NULL;
        else
        {
            while(temp->next!=list)
            {
                temp=temp->next;
            }

            temp->next=list->next;
            Node *t=list;
            list=list->next;
            delete t;
        }
    }
    void deleteBack()
    {
        Node *temp=list;

        if(temp==NULL)
        {
            cout<<"Underflow\n";
            return;
        }
        if(temp->next==list)
            list=NULL;
        else
        {
            while(temp->next->next!=list)
            {
                temp=temp->next;
            }

            Node *t=temp->next;
            temp->next=list;
            delete t;
        }
    }
    void insertSorted(int d)
    {
        Node *node=new Node();
        node->data=d;
        Node *temp=list;
        Node *t;
        if(list==NULL)
        {
            list=node;
            list->next=list;
        }
        else
        {
            if(temp->data>d)//first
            {
                insertAtFront(d);
                return;
            }
            t=temp;
            temp=temp->next;
            while(temp!=list && temp->data<d)
            {
                t=temp;
                temp=temp->next;
            }

            if(temp==list)
            {
                insertBack(d);
            }
            else
            {
                t->next=node;
                node->next=temp;
            }
        }
    }
    void insertPos(int d,int p)
    {
        Node *node=new Node();
        node->data=d;
        Node *temp=list;
        Node *t;
        int pos=1;
        if(list==NULL)
        {
            list=node;
            list->next=list;
        }
        else
        {
            if(p<=1)//first
            {
                insertAtFront(d);
                return;
            }
            t=temp;
            temp=temp->next;
            pos++;
            while(temp!=list && pos!=p)
            {
                t=temp;
                temp=temp->next;
                pos++;
            }

            if(temp==list)
            {
                insertBack(d);
            }
            else
            {
                t->next=node;
                node->next=temp;
            }
        }
    }
    void deleteNode(int d)
    {
        Node *temp,*t;
        temp=list;
        if(temp==NULL)
            return;
        if(temp->data==d)
            deleteFront();
        else
        {
            t=temp;
            temp=temp->next;
            while(temp!=list && temp->data!=d)
            {
                t=temp;
                temp=temp->next;
            }
            if(temp==list)
            {
                cout<<"Not found\n";
                return;
            }
            t->next=temp->next;
            delete temp;

        }
    }
    void deletePos(int p)
    {
        Node *temp,*t;
        temp=list;
        int pos=1;
        if(temp==NULL)
            return;
        if(p==1)
            deleteFront();
        else
        {
            t=temp;
            temp=temp->next;
            pos++;
            while(temp!=list && pos!=p)
            {
                t=temp;
                temp=temp->next;
                pos++;
            }
            if(temp==list)
            {
                cout<<"Not found\n";
                return;
            }
            t->next=temp->next;
            delete temp;

        }
    }
    void display()
    {
        Node *temp=list;
        if(list==NULL)
            return;

        while(temp->next!=list)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }

};
/*
int main()
{
    LinkedList list;
    list.display();
    list.insertAtFront(10);
    list.display();
    list.insertAtFront(20);
    list.insertAtFront(30);
    list.insertAtFront(40);
    list.display();
    list.insertBack(100);
    list.display();
    list.insertPos(80,4);
    list.display();
    list.deletePos(6);
    list.display();

    return 0;
}
*/