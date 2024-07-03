//
// Created by pollob on 6/3/2021.
//

#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
/*
class Train
{
private:
    int pnr,ch,c;
    int train_no;
    char train_name[100];
    char depart_point[10];
    char depart_t[20];
    char arrival_t[20];
    char arrival_point[100];
    char passenger_name[10][100];
    int  age[20];
    int class_train;
    int seats_booked;
    int i;
    char date[20];
    int consection_cat;
    float amc;
    int c1,c1fare;
    int c2,c2fare;
    char passenger[30];
    int total_fare;
public:
    char getdetail()
    {
        cout<<"Enter the details as follows\n";
        cout<<"Train no : ";
        cin>>train_no;
        cout<<"\nTrain name : ";
        cin>>train_name;
        cout<<"\nDeparture Point : ";
        cin>>depart_point;
        cout<<"\nDeparture time : ";
        cin>>depart_t;
        cout<<"\nArrival Point : ";
        cin>>arrival_point;
        cout<<"\nArrival Time : ";
        cin>>arrival_t;
        cout<<"\nNo of seats in first class & fare per ticket : ";
        cin>>c1>>c1fare;
        cout<<"\nNo of seats in second class & fare per ticket : ";
        cin>>c2>>c2fare;
        cout<<"\n";
    }
    void displaydetail()
    {
        cout<<"\n\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\n\t\t\t\tRailway Reservation SYSTEM\n\n";
        cout<<"\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\nTrain Number : "<<train_no;
        cout<<"\tTrain Name : "<<train_name;
        cout<<"\n\nDeparture Point : "<<depart_point;
        cout<<"\tArrival Point : "<<arrival_point;
        cout<<"\n\nDeparture Time : "<<depart_t;
        cout<<"\tArrival Time : "<<arrival_t;
        cout<<"\n\n1st Class Seats : "<<c1;
        cout<<"\t1st Class Fare : "<<c1fare;
        cout<<"\n\n2nd Class Seats : "<<c2;
        cout<<"\t2nd Class Fare : "<<c2fare;
        cout<<"\n\n\n";
    }
    int cmp(int train_n)
    {
        if(train_n==train_no)
        {
            Book_ticket();
            return 1;
        }
        else return 0;
    }
    void print_ticket()
    {
        cout<<"\n\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\n\t\t\t\tRailway Reservation SYSTEM\n\n";
        cout<<"\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\nPassenger Name  : "<<passenger;
        cout<<"\n\nTrain Number : "<<train_no;
        cout<<"\n\nTrain Name : "<<train_name;
        cout<<"\n\nDeparture Point : "<<depart_point;
        cout<<"\n\nArrival Point : "<<arrival_point;
        cout<<"\n\nDeparture Time : "<<depart_t;
        cout<<"\n\nArrival Time : "<<arrival_t;
        cout<<"\n\nSeats Booked : "<<seats_booked;
        if (class_train==1)
            cout<<"\n\nClass :  Bussiness Class";
        else cout<<"\n\nClass :  Economy Class";
        cout<<"\n\nTotal Fare  : "<<total_fare;
        cout<<"\n\nDate Of Travelling : "<<date;
    }
    int Book_ticket()
    {
        cout<<"\n\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\n\t\t\t\tRailway Reservation SYSTEM\n\n";
        cout<<"\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\nWelcome To Online Reservation of "<<train_name<<endl;
        cout<<"\n\nDeparture Point : "<<depart_point;
        cout<<"\nArrival Point : "<<arrival_point;
        cout<<"\n\nEnter the details as follows\n";
        cout<<"\nEnter Your Name : ";
        cin>>passenger;
        cout<<"\nNo Of Seats you want to Book : ";
        cin>>seats_booked;
        cout<<"\nEnter the Class TYPE \n1) for Bussiness Class \n2) for Economy Class : ";
        cin>>class_train;
        if(class_train==1)
            total_fare=c1fare*seats_booked;
        else
            total_fare=c2fare*seats_booked;
        cout<<"\nDate-Month-Year Of Travelling : ";
        cin>>date;
        cout<<"\n\n\n***********************************************\n";
        cout<<".........END OF RESERVATION.................\n";
        cout<<"***********************************************\n";
    }
};
class Admin : public Train
{
private:
    char name[50];
    char password[20];
public:
public:
    Admin()
    {
        cout<<"\n\n\n\n\t\t\tEnter Your Name : ";
        gets(name);
        cout<<"\n\n\n\n\t\t\tEnter Your Password : ";
        int i=0;
        password[i]=getch();
        while(password[i]!=13)
        {
            if(password[i++]!='\0');
            cout<<"*";
            password[i]=getch();
        }
        password[i]='\0';
    }
    int  passwordCheck()
    {
        int no_admins;
        string name1,pass1;
        ifstream file_admin;
        file_admin.open("Admin.txt");
        file_admin>>no_admins;
        for(int i=0;i<no_admins;i++)
        {
            file_admin>>name1;
            file_admin>>pass1;
            if(name==name1 && password==pass1)
            {
                file_admin.close();
                return 1;
            }
            file_admin>>no_admins;
        }
        file_admin.close();
        return 0;
    }
    char admin_menu()
    {
        char choice;
        cout<<"\n\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\n\t\t\t\tRailway Reservation SYSTEM\n\n";
        cout<<"\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\n\t\t1.\t\t Create a New Database System for Train";
        cout<<"\n\n\t\t2.\t\t Add Another Train Details : ";
        cout<<"\n\n\t\t3.\t\t View All Train Details : ";
        cout<<"\n\n\t\t4.\t\t View All User Details : ";
        cout<<"\n\n\t\t5.\t\t Log out\n\n";
        choice=getch();
        system("cls");
        return choice;
    }
    void User_manage()
    {
        cout<<"\n\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\n\t\t\t\tRailway Reservation SYSTEM\n\n";
        cout<<"\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        int no_users=0;
        string name1,pass1;
        ifstream file_user;
        file_user.open("user.txt");
        file_user>>no_users;
        cout<<"\n\n\t\t  \t\tName  \t\t"<<"Password\n\n";
        for(int i=0;i<no_users;i++)
        {
            file_user>>name1;
            file_user>>pass1;
            cout<<"\n\n\t\t"<<i+1<<"\t\t"<<name1<<"\t\t"<<pass1;
            file_user>>no_users;
        }
        file_user.close();
    }
};
class User : public Train
{
private:
    char name[50];
    char password[20];
public:
    User(){}
    char user_menu()
    {
        char choice;
        cout<<"\n\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\n\t\t\t\tRailway Reservation SYSTEM\n\n";
        cout<<"\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\n\t\t1.\t\t View Train Details : ";
        cout<<"\n\n\t\t2.\t\t Book Ticket : ";
        cout<<"\n\n\t\t3.\t\t Print Ticket : ";
        cout<<"\n\n\t\t4.\t\t Log Out\n\n";
        choice=getch();
        system("cls");
        return choice;
    }
   void User_login()
    {
        gets(name); //roy
        cout<<"\n\n\n\n\t\t\tEnter Your Name : ";
        gets(name);
        cout<<"\n\n\n\n\t\t\tEnter Your Password : ";
        int i=0;
        password[i]=getch();
        while(password[i]!=13)
        {
            if(password[i++]!='\0');
            cout<<"*";
            password[i]=getch();
        }
        password[i]='\0';
    }
    int passwordCheck()
    {
        int no_users=0;
        string name1,pass1;
        ifstream file_user;
        file_user.open("user.txt");
        file_user>>no_users;
        for(int i=0;i<no_users;i++)
        {
            file_user>>name1;
            file_user>>pass1;
            if(name==name1 && password==pass1)
            {
                file_user.close();
                return 1;
            }
            file_user>>no_users;
        }
        file_user.close();
        return 0;
    }
    int registration()
    {
        int no_users=0;
        string name1,pass1;
        ifstream file_user;
        file_user.open("user.txt");
        file_user>>no_users;
        for(int i=0;i<no_users;i++)
        {
            file_user>>name1;
            file_user>>pass1;
            if(name==name1 && password==pass1)
            {
                file_user.close();
                return 0;
            }
            file_user>>no_users;
        }
        file_user.close();

        fstream file_reg;
        file_reg.open("user.txt",ios::app);
        no_users++;
        file_reg<<no_users<<endl<<name<<endl<<password<<endl;
        file_reg.close();
        return 1;
    }

};
int main()
{
    char choice=0,che;
    int status=0;
    fstream train_file;
    while(choice!='4')
    {
        cout<<"\n\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";
        cout<<"\n\n\t\t\t\tRailway Reservation SYSTEM\n\n";
        cout<<"\t\t";
        for(int a=0; a<50; a++)
            cout<<"=";

        cout<<"\n\n\t\t1.\t\t Login as Admin";
        cout<<"\n\n\t\t2.\t\t Login as User";
        cout<<"\n\n\t\t3.\t\t Register";
        cout<<"\n\n\t\t4.\t\t Exit\n\n";
        choice=getch();
        system("cls");
        if(choice<'1' || choice>'4')
        {
            cout<<"\nInvalid Choice!";
            getch();
        }
        else
        {
            system("cls");
            switch(choice)
            {
                case '1':
                {
                    int valid1=0;
                    Admin Worker;
                    system("Cls");
                    valid1=Worker.passwordCheck();
                    if(valid1==0)
                        cout<<"Invalid Admin Name Or Password";
                    else
                        while(choice!='5')
                        {
                            system("cls");
                            choice=Worker.admin_menu();
                            if(choice<'1' || choice>'5')
                            {
                                cout<<"\nInvalid Choice!";
                                getch();
                            }
                            else
                            {
                                switch(choice)
                                {
                                    case '1':
                                    {
                                        train_file.open("Train.txt",ios::out|ios::binary);
                                        do
                                        {
                                            Worker.getdetail();
                                            train_file.write((char *) & Worker,sizeof(Worker));
                                            cout<<"Do you want to add More Train's Data ?\n";
                                            cout<<"y-for Yes\nn-for No\n";
                                            cin>>che;
                                            system("cls");
                                        }
                                        while(che=='y');
                                        train_file.close();
                                    }
                                        break;
                                    case '2':
                                    {
                                        train_file.open("Train.txt",ios::in|ios::out|ios::binary|ios::app);
                                        Worker.getdetail();
                                        train_file.write((char *) & Worker,sizeof(Worker));
                                        train_file.close();
                                    }
                                        break;
                                    case '3':
                                    {
                                        train_file.open("Train.txt",ios::in|ios::out|ios::binary|ios::app);
                                        train_file.seekg(0);
                                        while(train_file.read((char *) & Worker,sizeof(Worker)))
                                        {
                                            Worker.displaydetail();
                                            cout<<"Press Any Key to See more Trains : \n\n";
                                            getch();
                                            system("cls");
                                        }
                                        train_file.close();
                                        cout<<"\nNo More Trains Exist \nPress any key to Go back to the menu ";
                                        getch();
                                    }
                                        break;
                                    case '4':
                                    {
                                        Worker.User_manage();
                                        cout<<"\n\nPress 5 to go back : ";
                                        getch();
                                    }
                                        break;
                                        break;
                                }
                            }
                        }
                }
                    break;
                case '2':
                {
                    int valid2=0;
                    User Customer1;
                    Customer1.User_login();
                    system("cls");
                    valid2=Customer1.passwordCheck();
                    if(valid2==0)
                        cout<<"Invalid User Name Or Password";
                    else
                    {
                        while(choice!='4')
                        {
                            system("cls");
                            choice=Customer1.user_menu();
                            if(choice<'1' || choice>'4')
                            {
                                cout<<"\nInvalid Choice!";
                                getch();
                            }
                            else
                            {
                                switch(choice)
                                {
                                    case '1':
                                    {
                                        train_file.open("Train.txt",ios::in|ios::out|ios::binary|ios::app);
                                        train_file.seekg(0);
                                        while(train_file.read((char *) & Customer1,sizeof(Customer1)))
                                        {
                                            Customer1.displaydetail();
                                            cout<<"Press Any Key to See more Trains : \n\n";
                                            getch();
                                            system("cls");
                                        }
                                        train_file.close();
                                        cout<<"\nNo More Trains Exist \nPress any key to Go back to the menu ";
                                        getch();
                                    }
                                        break;
                                    case '2':
                                    {
                                        int train_n;
                                        cout<<"Enter Train Number : ";
                                        cin>>train_n;
                                        train_file.open("Train.txt",ios::in|ios::out|ios::binary|ios::app);
                                        train_file.seekg(0);
                                        while(train_file.read((char *) & Customer1,sizeof(Customer1)))
                                        {
                                            status=Customer1.cmp(train_n);
                                            if(status==1)
                                                break;
                                            cout<<status;
                                        }
                                        cout<<"Press Any key to Go back : \n\n";
                                        getch();
                                        system("cls");
                                        train_file.close();
                                    }
                                        break;
                                    case '3':
                                    {
                                        if(status==1)
                                            Customer1.print_ticket();
                                        else
                                            cout<<"\nYou have not Booked a Seat yet ";
                                        cout<<"\n\n\n\nPress Any Key To Go Back to Menu : ";
                                        getch();
                                    }
                                        break;
                                }
                            }
                        }
                    }
                }
                    break;
                case '3':
                {
                    int reg=0;
                    User Customer2;
                    Customer2.User_login();
                    system("cls");
                    reg=Customer2.registration();
                    if(reg==1)
                        cout<<"\n\nYou have been successfully Registered, Now You Can Login ";
                    else
                        cout<<"Please Choose Another User name Or Password ";
                }
                    break;
            }
        }
    }
    return 0;
}
 */