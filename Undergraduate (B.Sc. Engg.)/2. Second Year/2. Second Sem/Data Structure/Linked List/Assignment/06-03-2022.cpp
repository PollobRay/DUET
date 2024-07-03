/*
//
// Created by Ray on 3/6/2022.
//

#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    string dept;

    Student *next;
    Student()
    {
        next=NULL;
    }
    Student(string name,string dept)
    {
        this->name=name;
        this->dept=dept;
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

    void insert(string name,string dept);
    void deleteStd(string dept);
    void insertFirst(string name);
    void insertLast(string name);
    void insertAfter(string name);
    void deleteFirst();
    void deleteLast();
    void deleteAfter();
    void print();
    void printFromMajor(string dept);
};

void UniversityRecords::insert(string name, string dept)
{
    if (dept=="CSE")
        insertFirst(name); //for dept CSE
    else if(dept=="EEE") // for dept EEE
        insertLast(name);
    else
        insertAfter(name); //for dept ME
}

void UniversityRecords::insertFirst(string name)
{
    Student *newStd=new Student(name,"CSE");

    Student *temp=list;

    if(temp==NULL)
    {
        newStd->next=newStd;
        list=newStd;

    }
    else
    {
        newStd->next=list;
        while(temp->next!=list)
        {
            temp=temp->next;
        }
        temp->next=newStd;
        list=newStd;
    }
}

void UniversityRecords::insertLast(string name)
{
    Student *newStd=new Student(name,"EEE");

    Student *temp=list;

    if(temp==NULL)
    {
        newStd->next=newStd;
        list=newStd;

    }
    else
    {
        while(temp->next!=list)
        {
            temp=temp->next;
        }
        temp->next=newStd;
        newStd->next=list;

    }
}

void UniversityRecords::insertAfter(string name)
{
    Student *newStd=new Student(name,"ME");

    Student *temp=list;

    if(temp==NULL)
    {
        newStd->next=newStd;
        list=newStd;

    }
    else
    {
        if(temp->dept=="EEE"|| temp->dept=="ME") //insert first in that case
        {
            newStd->next=list;
            while(temp->next!=list)
            {
                temp=temp->next;
            }
            temp->next=newStd;
            list=newStd;
        }
        else{ //insert between or after
            while(temp->next!=list && (temp->next->dept!="EEE" && temp->next->dept!="ME"))
            {
                temp=temp->next;
            }

            newStd->next=temp->next;
            temp->next=newStd;
        }


    }
}

void UniversityRecords::deleteStd(string dept)
{
    if (dept=="CSE")
        deleteFirst();
    else if (dept=="EEE")
        deleteLast();
    else
        deleteAfter(); //for ME
}

void UniversityRecords::deleteFirst()
{
    Student *temp,*temp1;
    temp=list;
    if(temp->next==list)//one element
    {
        list=NULL;
        delete temp;
    }
    while(temp->next!=list)
    {
        temp=temp->next;
    }
    temp1=list;
    list=list->next;
    temp->next=list;
    delete temp1;
}

void UniversityRecords::deleteLast()
{
    Student *temp,*temp1;
    temp=list;
    if(temp->next==list)//one element
    {
        list=NULL;
        delete temp;
    }
    while(temp->next->next!=list)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=list;
    delete temp1;
}

void UniversityRecords::deleteAfter()
{
    Student *temp,*temp1;
    temp=list;
    temp1=list;
    if(temp->next==list)//only one element
    {
        list=NULL;
        delete temp;
    }
    else if (temp->dept=="ME")//delete first
    {
        while(temp->next!=list)
        {
            temp=temp->next;
        }

        list=list->next;
        temp->next=list;
       delete temp1;
    }
    else //delete between or last of ME
    {
        while(temp->next!=list &&  temp->dept!="ME")
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=temp->next;

        delete temp;

    }

}

void UniversityRecords::print()
{
    if(list==NULL)
    {
        cout<<"List is null"<<endl;
        return;
    }
    Student *temp=list;
    cout<<temp->name<<", "<<temp->dept<<" -> ";
    temp=temp->next;
    while(temp!=list)
    {
        cout<<temp->name<<", "<<temp->dept<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
}
void UniversityRecords::printFromMajor(string dept)
{
    if(list==NULL)
    {
        cout<<"List is null"<<endl;
        return;
    }
    Student *temp=list;
    if(temp->dept!=dept)
    {
        while (temp->next->dept != dept)
        {
            temp = temp->next;
        }
        temp=temp->next;
    }
    Student *temp1;
    temp1=temp;
    cout<<temp1->name<<", "<<temp1->dept<<" -> ";
    temp1=temp1->next;
    while(temp1!=temp)
    {
        cout<<temp1->name<<" ,"<<temp1->dept<<" -> ";
        temp1=temp1->next;
    }
    cout<<endl;
}

int main()
{
    UniversityRecords record;
    record.insert("Mahir","EEE");
    record.print();
    record.insert("Sumon","ME");
    record.print();
    record.insert("Raju","CSE");
    record.print();
    record.insert("Kabita","CSE");
    record.print();
    record.insert("Rani","EEE");
    record.print();
    record.insert("Amin","ME");
    record.print();
    record.insert("Abir","ME");
    record.print();
    record.printFromMajor("ME");
    record.deleteStd("ME");
    record.print();
    record.deleteStd("ME");
    record.print();

    return 0;
}
*/
