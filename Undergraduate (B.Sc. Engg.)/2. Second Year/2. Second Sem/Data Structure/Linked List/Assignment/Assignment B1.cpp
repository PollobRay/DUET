//
// Created by Ray on 2/1/2022.
//
// B1 Assignment
/*
#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string dept;
    Student *prev;
    Student *next;
    Student()
    {
        prev=NULL;
        next=NULL;
    }
};

class UniversityRecords
{
private:
    Student *list;
public:
    UniversityRecords()
    {
        list=NULL;
    }
    void insert(int id,string dept)
    {
        Student *newStd=new Student;

        newStd->id=id;
        newStd->dept=dept;

        Student *temp=list;
        if(list==NULL)
        {
            list=newStd;
        }
        else if(temp->id>id)
        {
            temp->prev=newStd;
            newStd->next=temp;
            list=newStd;
        }
        else
        {
            while(temp->next!=NULL&&temp->id<=id)
            {
                temp=temp->next;
            }
            if(temp->next==NULL && temp->id<=id )
            {
                temp->next=newStd;
                newStd->prev=temp;
            }
            else
            {
                newStd->prev=temp->prev;
                newStd->next=temp;
                temp->prev->next=newStd;
                temp->prev=newStd;
            }
        }
    }
    void printAscending()
    {
        Student *temp=list;

        cout<<"\nAscending order"<<endl;
        while(temp!=NULL)
        {
            cout<<"Id : "<<temp->id<<endl;
            cout<<"Department : "<<temp->dept<<endl;
            cout<<endl;
            temp=temp->next;
        }
    }
    void printDescending()
    {
        Student *temp, *temp1;
        temp=list;

        cout<<"\nDescending order"<<endl;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            cout<<"Id : "<<temp->id<<endl;
            cout<<"Department : "<<temp->dept<<endl;
            cout<<endl;
            temp=temp->prev;
        }
    }
};

int main()
{
    UniversityRecords records;
    records.insert(10010,"EEE");
    records.insert(20016,"CSE");
    records.insert(20010,"CSE");
    records.insert(10001,"EEE");
    records.insert(30109,"ME");
    records.insert(40111,"CE");
    records.insert(20085,"CSE");
    records.insert(20065,"CSE");
    records.printAscending();
    records.printDescending();




    return 0;
}
*/