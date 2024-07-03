//
// Created by Ray on 6/27/2021.
//

/*
#include <iostream>
#include<stdlib.h>
using namespace std;

class pd{
public:
    char name[50];
    int train_num;
    int num_of_seats;
};


void reservation();
void viewdetails();
void printticket(char name[],int,int,float);
void specifictrain(int);
float charge(int,int);



int main()

{
    system("cls");
    cout<<"\t\t=================================================\n";
    cout<<"\t\t|                                               |\n";
    cout<<"\t\t|        -----------------------------          |\n";
    cout<<"\t\t|           TRAIN TICKET RERS. SYSTEM           |\n";
    cout<<"\t\t|        -----------------------------          |\n";
    cout<<"\t\t|                                               |\n";
    cout<<"\t\t=================================================\n\n\n";




    int menu_choice,choice_return;
    start:

    cout<<" \n=================================\n";
    cout<<"     TRAIN RESERVATION SYSTEM";
    cout<<"\n=================================";
    cout<<"\n1>> Reserve A Ticket";
    cout<<"\n------------------------";
    cout<<"\n2>> View All Available Trains";
    cout<<"\n------------------------";
    cout<<"\n4>> Exit";
    cout<<"\n------------------------";
    cout<<"\n\n-->";

    cin>>menu_choice;

    switch(menu_choice)
    {
        case 1:
            reservation();
            break;
        case 2:
            viewdetails();
            break;
        case 4:
            return(0);
        default:
            cout<<"\nInvalid choice";
    }
    goto start;

    return 0;
}


void viewdetails()
{

    cout<<"\n\n\n-----------------------------------------------------------------------------";
    cout<<"\nTr.No\tName\t\t\tDestinations\t\tCharges\t\tTime\n";
    cout<<"-----------------------------------------------------------------------------";
    cout<<"\n1001\tRed Lines Express\tBoston to Manhattan\tRs.5000\t\t9am";
    cout<<"\n1002\tRed Lines Express\tManhattan To Boston\tRs.5000\t\t12pm";
    cout<<"\n1003\tLA City Express\t\tBoston To L.A\t\tRs.4500\t\t8am";
    cout<<"\n1004\tLA City Express\t\tL.A To Boston\t\tRs.4500\t\t11am";
    cout<<"\n1005\tIron City Express\tBoston To Chicago\tRs.4000\t\t7am";
    cout<<"\n1006\tIron City Express\tChicago To Boston\tRs.4000\t\t9.30am";
    cout<<"\n1007\tKeystone Express\tBoston To Washington\tRs.3500\t\t1pm";
    cout<<"\n1008\tKeystone Express\tWashington To Boston\tRs.3500\t\t4pm";
    cout<<"\n1009\tMeteor Express\t\tBoston To Miami\t\tRs.6000\t\t3.35pm";
    cout<<"\n1009\tMeteor Express\t\tMiami To Boston\t\tRs.6000\t\t4.15pm\n\n";

}

void reservation()
{
    char confirm;
    int i=0;
    float charges;
    pd passdetails;
    FILE *fp;
    fp=fopen("seats_reserved.txt","a");

    cout<<"\nEnter Your Name:> ";
    fflush(stdin);
    gets(passdetails.name);

    cout<<"\nEnter Number of seats:> ";
    cin>>passdetails.num_of_seats;

    cout<<"\n\n";

    viewdetails();
    cout<<"\n\nEnter train number:> ";
    start1:
    cin>>passdetails.train_num;

    if(passdetails.train_num>=1001 && passdetails.train_num<=1010)
    {
        charges=charge(passdetails.train_num,passdetails.num_of_seats);
        printticket(passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
    }
    else
    {
        cout<<"\nInvalid train Number! Enter again--> ";
        goto start1;
    }

    cout<<"\n\nConfirm Ticket (y/n):>";
    start:
    cin>>confirm;
    if(confirm == 'y')
    {
        fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
        cout<<"==================";
        cout<<"\n Reservation Done\n";
        cout<<"==================";
    }
    else
    {
        if(confirm=='n'){
            cout<<"\nReservation Not Done!!";
        }
        else
        {
            cout<<"\nInvalid choice entered! Enter again-----> ";
            goto start;
        }
    }
    fclose(fp);
}


float charge(int train_num,int num_of_seats)
{
    if (train_num==1001)
    {
        return(5000.0*num_of_seats);
    }
    if (train_num==1002)
    {
        return(5000.0*num_of_seats);
    }
    if (train_num==1003)
    {
        return(4500.0*num_of_seats);
    }
    if (train_num==1004)
    {
        return(4500.0*num_of_seats);
    }
    if (train_num==1005)
    {
        return(4000.0*num_of_seats);
    }
    if (train_num==1006)
    {
        return(4000.0*num_of_seats);
    }
    if (train_num==1007)
    {
        return(3500.0*num_of_seats);
    }
    if (train_num==1008)
    {
        return(3500.0*num_of_seats);
    }
    if (train_num==1009)
    {
        return(6000.0*num_of_seats);
    }
    if (train_num==1010)
    {
        return(6000.0*num_of_seats);
    }
}

void printticket(char name[],int num_of_seats,int train_num,float charges)
{
    cout<<"-------------------\n";
    cout<<"\tTICKET\n";
    cout<<"-------------------\n\n";
    cout<<"Name:\t\t\t"<<name;
    cout<<"\nNumber Of Seats:\t"<<num_of_seats;
    cout<<"\nTrain Number:\t\t"<<train_num;
    specifictrain(train_num);
    cout<<"\nCharges:\t\t"<<charges;
}


void specifictrain(int train_num)
{

    if (train_num==1001)
    {
        cout<<"\nTrain:\t\t\tRed Lines Express";
        cout<<"\nDestination:\t\tBoston to Manhattan";
        cout<<"\nDeparture:\t\t9am ";
    }
    if (train_num==1002)
    {
        cout<<"\nTrain:\t\t\tRed Lines Express";
        cout<<"\nDestination:\t\tManhattan to Boston";
        cout<<"\nDeparture:\t\t12pm";
    }
    if (train_num==1003)
    {
        cout<<"\nTrain:\t\t\tLA City Express";
        cout<<"\nDestination:\t\tBoston to L.A";
        cout<<"\nDeparture:\t\t8am";
    }
    if (train_num==1004)
    {
        cout<<"\nTrain:\t\t\tLA City Express";
        cout<<"\nDestination:\t\tL.A to Boston";
        cout<<"\nDeparture:\t\t11am ";
    }
    if (train_num==1005)
    {
        cout<<"\nTrain:\t\t\tIron City Express";
        cout<<"\nDestination:\t\tBoston to Chicago";
        cout<<"\nDeparture:\t\t7am";
    }
    if (train_num==1006)
    {
        cout<<"\ntrain:\t\t\tIron City Express";
        cout<<"\nDestination:\t\tChicago to Boston";
        cout<<"\nDeparture:\t\t9.30am ";
    }
    if (train_num==1007)
    {
        cout<<"\ntrain:\t\t\tKeystone Express";
        cout<<"\nDestination:\t\tBoston to Washington";
        cout<<"\nDeparture:\t\t1pm ";
    }
    if (train_num==1008)
    {
        cout<<"\ntrain:\t\t\tKeystone Express";
        cout<<"\n Destination:\t\tWashington to Boston";
        cout<<"\nDeparture:\t\t4pm ";
    }
    if (train_num==1009)
    {
        cout<<"\ntrain:\t\t\tMeteor Express";
        cout<<"\nDestination:\t\tBoston to Miami";
        cout<<"\nDeparture:\t\t3.35pm ";
    }
    if (train_num==1010)
    {
        cout<<"\ntrain:\t\t\tMeteor Express";
        cout<<"\nDestination:\t\tMiami to Boston";
        cout<<"\nDeparture:\t\t1.15 ";
    }
}

*/

