//
// Created by Ray on 1/31/2022.
//
/*
#include <iostream>
#include <utility>
using namespace std;

class Player
{
private:
    string name;
    int score;

    Player *prev;
    Player *next;
public:
    Player():prev(nullptr),next(nullptr)
    {}
    Player* getPrev()
    {
        return prev;
    }
    Player* getNext()
    {
        return next;
    }
    string getName()
    {
        return name;
    }
    void setName(string n)
    {
        name=n;
    }
    int getScore()
    {
        return score;
    }
    void setScore(int s)
    {
        score=s;
    }
    void setPrev(Player *p)
    {
        prev=p;
    }
    void setNext(Player *n)
    {
        next=n;
    }
};

class Tournament
{
private:
    Player *playerList;
public:
    Tournament():playerList(nullptr){}

    void insert(string,int);
    void printAscendingOrder();
    void printDescendingOrder();
    void printPlayerWithName(string);
    void maintanceTournament();
};

void Tournament::insert(string name,int score)
{
    Player *newPlayer=new Player;

    newPlayer->setName(name);
    newPlayer->setScore(score);

    if (playerList== nullptr)
    {
        newPlayer->setPrev(nullptr);
        newPlayer->setNext(nullptr);
        playerList=newPlayer;
    }
    else
    {
        Player *temp;
        temp=playerList;

        while(temp->getNext()!= nullptr && temp->getScore()<=score)
        {
            temp=temp->getNext();
        }
        if(temp==playerList && temp->getScore()>score) //insert to first position
        {
            newPlayer->setPrev(nullptr);
            playerList->setPrev(newPlayer);
            newPlayer->setNext(playerList);
            playerList=newPlayer;
        }
        else if(temp->getNext()== nullptr && temp->getScore()<=score) // insert to last position
        {
            newPlayer->setPrev(temp);
            temp->setNext(newPlayer);
            newPlayer->setNext(nullptr);
        }
        else //insert to middle position
        {
            newPlayer->setPrev(temp->getPrev());
            newPlayer->setNext(temp);
            temp->getPrev()->setNext(newPlayer);
            temp->setPrev(newPlayer);

        }
    }

}

void Tournament::printAscendingOrder()
{
    Player *temp=playerList;

    cout<<"Printing players name and scores in ascending order with their scores"<<endl;
    if(playerList== nullptr)
    {
        cout<<"Empty"<<endl;
        return;
    }
    int no=1;
    while(temp!= nullptr)
    {
        cout<<"Player no: "<<no++<<endl;
        cout<<"Name: "<<temp->getName()<<endl;
        cout<<"Score: "<<temp->getScore()<<endl<<endl;
        temp=temp->getNext();
    }
}

void Tournament::printDescendingOrder()
{
    Player *temp=playerList;

    cout<<"Printing players name and scores in Descending order with their scores"<<endl;
    if(playerList== nullptr)
    {
        cout<<"Empty"<<endl;
        return;
    }
    int no=1;
    //move to end
    while(temp->getNext()!= nullptr)
    {
        temp=temp->getNext();
    }

    //printing from backward
    while(temp!= nullptr)
    {
        cout<<"Player no: "<<no++<<endl;
        cout<<"Name: "<<temp->getName()<<endl;
        cout<<"Score: "<<temp->getScore()<<endl<<endl;
        temp=temp->getPrev();
    }
}

void Tournament::printPlayerWithName(string name)
{
    Player *temp, *temp1;
    temp=playerList; //for finding
    temp1=playerList;//for printing name

    cout<<"Printing Players name who have equal score of player "<<name<<endl;
    //searching
    while(temp!= nullptr)
    {
        if(temp->getName()==name)
            break;
        temp=temp->getNext();
    }
    if(temp== nullptr)
    {
        cout<<"Not Matching Scores"<<endl;
        return;
    }

    //printing
    while(temp1!= nullptr)
    {
        if(temp!=temp1 && temp->getScore()==temp1->getScore()) //if same score
        {
            cout<<"Name : "<<temp1->getName()<<endl;
        }
        temp1=temp1->getNext();
    }
}

void Tournament::maintanceTournament()
{
    int choice;
    string name;
    int score;

    do{
        cout<<endl;
        cout<<"[1]: Insert player record"<<endl;
        cout<<"[2]: Print players record in ascending order"<<endl;
        cout<<"[3]: Print players record in descending order"<<endl;
        cout<<"[4]: Print players name with equal score by given name"<<endl;
        cout<<"[0]: Exit"<<endl;
        cout<<"Choice : ";

        cin>>choice;

        switch (choice)
        {
            case 1:
                cout<<"Player Name: ";
                cin>>name;
                cout<<"Score: ";
                cin>>score;

                insert(name,score);
                break;

            case 2:
                printAscendingOrder();
                break;

            case 3:
                printDescendingOrder();
                break;

            case 4:
                cout<<"Player Name : ";
                cin>>name;
                printPlayerWithName(name);
                break;

            case 0:
                cout<<"Exiting Program....."<<endl;
        }

    }while(choice!=0);

}

int main()
{
   Tournament tournament;
   tournament.maintanceTournament();

    return 0;
}
*/