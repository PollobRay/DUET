/*
//
// Created by Ray on 3/6/2022.
//

//
// Created by Ray on 3/6/2022.
//

#include<iostream>
using namespace std;

class Std
{
public:
    string name;
    string dept;

    Std *next;
    Std()
    {
        next=NULL;
    }
};

class LinkedList
{
    Std *list;

public:
    LinkedList()
    {
        list=NULL;
    }

    void insert(string n,string d)
    {
        if (d=="CSE")
            insertFirst(n);
        else if(d=="ME")
            insertAfter(n);
        else
            insertLast(n);
    }
    void deleteS(string d)
    {
        if (d=="CSE")
            deleteFirst();
        else if(d=="ME")
            deleteAfter();
        else
            deleteLast();
    }
    void insertFirst(string nm)
    {
        Std *n=new Std();
        n->name=nm;
        n->dept="CSE";

        Std *temp=list;

        if(temp==NULL)
        {
            n->next=n;
            list=n;

        }
        else
        {
            n->next=list;
            while(temp->next!=list)
            {
                temp=temp->next;
            }
            temp->next=n;
            list=n;
        }
    }
    void insertLast(string nm)
    {
        Std *n=new Std();
        n->name=nm;
        n->dept="EEE";

        Std *temp=list;

        if(temp==NULL)
        {
            n->next=n;
            list=n;

        }
        else
        {
            while(temp->next!=list)
            {
                temp=temp->next;
            }
            temp->next=n;
            n->next=list;

        }
    }
    void insertAfter(string nm)
    {
        Std *n=new Std();
        n->dept="ME";
        n->name=nm;

        Std *temp=list;

        if(temp==NULL)
        {
            n->next=n;
            list=n;

        }
        else
        {
            if (temp->dept=="ME")
            {
                n->next=list;
                while(temp->next!=list)
                {
                    temp=temp->next;
                }
                temp->next=n;
                list=n;
            }
            if(temp->dept=="EEE")
            {
                n->next=list;
                while(temp->next!=list)
                {
                    temp=temp->next;
                }
                temp->next=n;
                list=n;
            }
            else{
                while(temp->next!=list && (temp->next->dept!="EEE" && temp->next->dept!="ME"))
                {
                    temp=temp->next;
                }

                n->next=temp->next;
                temp->next=n;
            }


        }
    }
    void deleteFirst()
    {
        Std *temp;
        temp=list;
        if(temp->next==list)
        {
            list=NULL;
        }
        while(temp->next!=list)
        {
            temp=temp->next;
        }
        list=list->next;
        temp->next=list;
    }
    void deleteLast()
    {
        Std *temp;
        temp=list;
        if(temp->next==list)
        {
            list=NULL;
        }
        while(temp->next->next!=list)
        {
            temp=temp->next;
        }
        temp->next=list;
    }
    void deleteAfter()
    {
        Std *temp;
        temp=list;
        if(temp->next==list)
        {
            list=NULL;
        }
        else if (temp->dept=="ME")
        {
            while(temp->next!=list)
            {
                temp=temp->next;
            }

            list=list->next;
            temp->next=list;
        }
        else
        {
            Std *temp1;
            while(temp->next!=list &&  temp->dept!="ME")
            {
                temp1=temp;
                temp=temp->next;
            }
            temp1->next=temp->next;
        }
    }
    void print()
    {
        Std *temp=list;
        cout<<temp->name<<" "<<temp->dept<<" ";
        temp=temp->next;
        while(temp!=list)
        {
            cout<<temp->name<<" "<<temp->dept<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void printFromMajor(string dept)
    {
        Std *temp=list;
        if(temp->dept!=dept)
        {
            while (temp->next->dept != dept)
            {
                temp = temp->next;
            }
            temp=temp->next;
        }
        Std *temp1;
        temp1=temp;
        cout<<temp1->name<<" "<<temp1->dept<<" ";
        temp1=temp1->next;
        while(temp1!=temp)
        {
            cout<<temp1->name<<" "<<temp1->dept<<" ";
            temp1=temp1->next;
        }
        cout<<endl;
    }
};

int main()
{
    LinkedList list;
    list.insert("AAA","CSE");
    list.print();
    list.insert("CCC","EEE");
    list.print();
    list.printFromMajor("EEE");

    return 0;
}
*/
