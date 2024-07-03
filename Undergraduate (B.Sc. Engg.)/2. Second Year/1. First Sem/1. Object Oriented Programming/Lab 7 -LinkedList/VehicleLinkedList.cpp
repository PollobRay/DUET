//
// Created by pollob on 5/3/2021.
//


/*
#include <iostream>
#include <stdlib.h>

using namespace std;

class Vehicle
{
public :
    int id;
    string type;
    string model;
    int price;

    Vehicle *prev;
    Vehicle *next;
};

class Operation
{
private:
    Vehicle *vehicleHead;
    Vehicle *vehicleTail;

    void initializeVehicleList();
    void addVehicleBeginning(int,string,string,int);
    void addVehicleEnd(int,string,string,int);
    void deleteVehicle(int vehicleId);
    void showVehicleFromEnd();
    int numberOfVehicles();

public:
    void performOperation();

};

void Operation::initializeVehicleList()
{
    vehicleHead=NULL; //initialize to null
    vehicleTail=NULL; //initialize to null
}

void Operation::addVehicleBeginning(int id,string type,string model,int price)
{
    Vehicle *newVehicle;
    newVehicle=(Vehicle*)malloc(sizeof(Vehicle));
    newVehicle=new Vehicle(); //creating new vehicle

    newVehicle->id=id;
    newVehicle->type=type;
    newVehicle->model=model;
    newVehicle->price=price;

    newVehicle->next=vehicleHead; // add new vehicle to first
    newVehicle->prev=NULL;

    vehicleHead=newVehicle; // assign new vehicle reference to first node pointer

    if (newVehicle->next!=NULL) //if at least one vehicle exits
    {
        newVehicle->next->prev=newVehicle;
    }
    else
    {
        vehicleTail=newVehicle;
    }
    cout<<"Vehicle added at the Beginning of the list successfully"<<endl;
}

void Operation::addVehicleEnd(int id, string type, string model, int price)
{
    Vehicle *newVehicle=(Vehicle*)malloc(sizeof(Vehicle));
    newVehicle=new Vehicle(); // create new vehicle

    newVehicle->id=id;
    newVehicle->type=type;
    newVehicle->model=model;
    newVehicle->price=price;

    newVehicle->prev=vehicleTail; // add new vehicle to last
    newVehicle->next=NULL;

    vehicleTail=newVehicle; // assign new vehicle reference to last node pointer

    if (newVehicle->prev!=NULL) //if at least one vehicle exits
    {
        newVehicle->prev->next=newVehicle;
    }
    else
    {
        vehicleHead=newVehicle;
    }
    cout<<"Vehicle added at the End of the list successfully"<<endl;
}

void Operation::deleteVehicle(int vehicleId)
{
    Vehicle *temp,*prev;

    temp=vehicleHead;

    while (temp!=NULL) // searching
    {
        prev=temp->prev;
        if (temp->id==vehicleId) // if match the id
            break;

        temp=temp->next; // move to next vehicle
    }

    if (temp==NULL) // if not match id
    {
        cout<<"Not find vehicle of id: "<<vehicleId<<endl;
        return;
    }

    if (temp==vehicleHead) //if first vehicle id match
    {
        if (temp==vehicleTail) // if only one vehicle exits and match
        {
            vehicleHead=NULL;
            vehicleTail=NULL;
            free(temp); // delete vehicle
        }
        else
        {
            vehicleHead=temp->next;
            vehicleHead->prev=NULL;
            free(temp); // delete vehicle
        }
    }
    else if (temp==vehicleTail) // if last vehicle match
    {
        vehicleTail=prev;
        vehicleTail->next=NULL;
        free(temp); // delete vehicle
    }
    else
    {
        prev->next=temp->next;
        temp->next->prev=prev;
        free(temp); // delete vehicle
    }
    cout<<"Vehicle of id: "<<vehicleId<<" deleted successfully"<<endl;
}

void Operation::showVehicleFromEnd()
{
    int numberofVehicle;
    Vehicle *temp;

    temp=vehicleTail; // assign last vehicle reference
    numberofVehicle=numberOfVehicles();

    cout<<"Total number of vehicles : "<<numberofVehicle<<endl;

    while (temp!=NULL)
    {
        cout<<endl;
        cout<<"Vehicle No: "<<numberofVehicle--<<endl;
        cout<<"id: "<<temp->id<<endl;
        cout<<"type: "<<temp->type<<endl;
        cout<<"model: "<<temp->model<<endl;
        cout<<"price: "<<temp->price<<endl<<endl;
        temp=temp->prev; // move to previous vehicle
    }

}

int Operation::numberOfVehicles()
{
    int count=NULL;
    Vehicle *temp;

    temp=vehicleTail; // assign last vehicle

    while (temp!=NULL)
    {
        temp=temp->prev;
        count++; // increase counter value
    }

    return count;
}

void Operation::performOperation()
{
    int id;
    string type;
    string model;
    int price;
    char key;

    initializeVehicleList();

    do {
        cout<<"[A]: Add a vehicle at beginning"<<endl;
        cout<<"[B]: Add a vehicle at end"<<endl;
        cout<<"[D]: Delete a vehicle with ID"<<endl;
        cout<<"[S]: Show all vehicles from end"<<endl;
        cout<<"[N]: Number of Vehicles"<<endl;
        cout<<"[Q]: Quit"<<endl;

        cin>>key;

        if (key=='A'||key=='a')
        {
            cout<<"Id: ";
            cin>>id;
            cout<<"Type: ";
            cin>>type;
            cout<<"Model: ";
            cin>>model;
            cout<<"Price: ";
            cin>>price;

            addVehicleBeginning(id,type,model,price);
        }
        else if (key=='B'||key=='b')
        {
            cout<<"Id: ";
            cin>>id;
            cout<<"Type: ";
            cin>>type;
            cout<<"Model: ";
            cin>>model;
            cout<<"Price: ";
            cin>>price;

            addVehicleEnd(id,type,model,price);
        }
        else if (key=='D'||key=='d')
        {
            cout<<"ID: ";
            cin>>id;

            deleteVehicle(id);
        }
        else if (key=='S'||key=='s')
        {
            showVehicleFromEnd();
        }
        else if (key=='N'||key=='n')
        {
            cout<<"Number of Vehicles is: "<<numberOfVehicles()<<endl;
        }
        else if (key=='Q'||key=='q')
        {
            break;
        }
        else
        {
            cout<<"Enter specific character"<<endl;
            continue;
        }

    } while (key!='Q'&&key!='q');
}

int main()
{

    Operation op;
    op.performOperation();

    return 0;
}*/


