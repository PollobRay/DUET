//
// Created by Ray on 6/29/2021.
//

/*
#include<iostream>
#include <vector>
#include<iomanip>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    int age;
    int salary;
    int experience;
    string designation;

public:
    Employee(int i,string n,int a,int s,int ex,string d)
    {
        id=i;
        name=n;
        age=a;
        salary=s;
        experience=ex;
        designation=d;
    }

    void showEmployeeData()
    {
        cout<<setw(7)<<id<<setw(11)<<name<<setw(5)<<age<<setw(7)<<salary<<setw(12)<<experience<<setw(13)<<designation;
    }
};

class Leave
{
private:
    string cause;
    int numberOfDay;
    string startDate;
    string endDate;

public:
    Leave(string c,int n,string s,string e)
    {
        cause=c;
        numberOfDay=n;
        startDate=s;
        endDate=e;
    }

    void showLeaveData()
    {
        cout<<setw(13)<<cause<<setw(8)<<numberOfDay<<setw(13)<<startDate<<setw(13)<<endDate<<"\n";
    }

};

class EmployeeLeave:public Employee,public Leave
{
public:
    EmployeeLeave(int i,string n,int a,int s,int ex,string d,string c,int nd,string sd,string ed):Employee(i,n,a,s,ex,d),Leave(c,nd,sd,ed)
    {

    }

    void showData()
    {
        showEmployeeData();
        showLeaveData();
    }
};

class EmployeeLeaveManagement
{
private:
    vector<EmployeeLeave> employe;

public:
    void applyLeave()
    {
        int id;
        string name;
        int age;
        int salary;
        int experience;
        string designation;
        string cause;
        int numberOfDay;
        string startDate;
        string endDate;

        cout<<"\nEmployee ID: ";
        cin>>id;
        cout<<"Employee Name: ";
        cin>>name;
        cout<<"Employee Age: ";
        cin>>age;
        cout<<"Employee Salary: ";
        cin>>salary;
        cout<<"Employee Experience(in Years): ";
        cin>>experience;
        cout<<"Employee Designation: ";
        cin>>designation;
        cout<<"\nLeave Cause: ";
        cin>>cause;
        cout<<"Number of days for leave: ";
        cin>>numberOfDay;
        fflush(stdin);
        cout<<"Starting Date: ";
        cin>>startDate;
        cout<<"Ending Date: ";
        cin>>endDate;

        EmployeeLeave emp(id,name,age,salary,experience,designation,cause,numberOfDay,startDate,endDate);
        employe.push_back(emp);
    }
    void showAllLeave()
    {
        cout<<"No "<<setw(7)<<"Emp.ID"<<setw(11)<<"Emp. Name"<<setw(5)<<"Age"<<setw(7)<<"Salary"<<setw(12)<<"Experience"<<setw(13)<<"Designation"<<setw(13)<<"Leave Cause"<<setw(8)<<"Days"<<setw(13)<<"St. Date"<<setw(13)<<"En. Date"<<endl;
        cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
        for (int i = 0; i <employe.size() ; ++i)
        {
            cout<<endl<<i+1<<" ";
            employe[i].showData();
            cout<<endl<<endl;
        }
    }
    void deleteLeave()
    {
        int no;

        showAllLeave();


        do {
            cout<<"\n\nNo to Delete: ";
            cin>>no;
            if (no>0&&no<=employe.size())
            {
                employe.erase(employe.begin()+no-1);
                cout<<"\n\n\tThe Leave Deleted Successfully\n\n";
                break;
            }
            else
                cout<<"\n\n\tEnter Currect No\n\n";
        } while (no<=0||no>employe.size());


    }
};

int main()
{
    int option;

    EmployeeLeaveManagement leaveManagement;

    do {
        cout<<"\n\n\t\tLeave Management System\n";
        cout<<"----------------------------------------------------\n\n";
        cout<<"1-> apply leave\n";
        cout<<"2->show all leave\n";
        cout<<"3->delete leave\n";
        cout<<"0-> Exit\n";
        cout<<"\nOption: ";
        cin>>option;

        if (option==1)
        {
            leaveManagement.applyLeave();
        }
        else if (option==2)
        {
            leaveManagement.showAllLeave();
        }
        else if (option==3)
        {
            leaveManagement.deleteLeave();
        }

    } while (option!=0);
    return 0;
}*/
