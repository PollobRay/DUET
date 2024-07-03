//
// Created by Ray on 2/1/2022.
//
/*
#include <iostream>
using namespace std;

class Player
{
public:
    int score;
    string name;
    Player *prev;
    Player *next;
    Player()
    {
        prev=NULL;
        next=NULL;
    }
};

class TurnamentRecord
{
private:
    Player *list;
public:
    TurnamentRecord()
    {
        list=NULL;
    }
    void insert(int score,string name)
    {
        Player *newP=new Player;

        newP->score=score;
        newP->name=name;

        Player *temp=list;
        if(list==NULL)
        {
            list=newP;
        }
        else if(temp->score>score)
        {
            temp->prev=newP;
            newP->next=temp;
            list=newP;
        }
        else
        {
            while(temp->next!=NULL&&temp->score<=score)
            {
                temp=temp->next;
            }
            if(temp->next==NULL && temp->score<=score )
            {
                temp->next=newP;
                newP->prev=temp;
            }
            else
            {
                newP->prev=temp->prev;
                newP->next=temp;
                temp->prev->next=newP;
                temp->prev=newP;
            }
        }
    }
    void printAscending()
    {
        Player *temp=list;

        cout<<"\nAscending order"<<endl;
        while(temp!=NULL)
        {
            cout<<"Name : "<<temp->name<<endl;
            cout<<"Score : "<<temp->score<<endl;
            cout<<endl;
            temp=temp->next;
        }
    }
    void printDescending()
    {
        Player *temp;
        temp=list;

        cout<<"\nDescending order"<<endl;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            cout<<"Name : "<<temp->name<<endl;
            cout<<"Score : "<<temp->score<<endl;
            cout<<endl;
            temp=temp->prev;
        }
    }
    void printSameScore(string n)
    {
        Player *temp, *temp1;
        temp=list;
        cout<<"\nPrinting same score of "<<n<<endl;
        while(temp!=NULL)
        {
            if(temp->name==n)
                break;
            temp=temp->next;
        }
        temp1=list;
        while(temp1!=NULL)
        {
            if(temp==temp1)
            {
                temp1=temp1->next;
                continue;
            }
            else if(temp1->score==temp->score)
                 cout<<"Name :"<<temp1->name<<endl;

            temp1=temp1->next;
        }
    }
};

int main()
{
    TurnamentRecord records;
    records.insert(10,"Dipto");
    records.insert(20,"Kanak");
    records.insert(5,"Prodip");
    records.insert(30,"Ray");
    records.insert(30,"Pollob");
    records.insert(50,"Bissojit");
    records.printSameScore("Ray");

    records.printAscending();
    records.printDescending();




    return 0;
}
 */