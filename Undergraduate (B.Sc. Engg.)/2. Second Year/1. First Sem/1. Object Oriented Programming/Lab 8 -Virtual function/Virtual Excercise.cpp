//
// Created by pollob on 5/28/2021.
//

#include <iostream>
using namespace std;
/*
class Employee
{
private:
    int salary;
    int NID;
    string name;
    string gender;
    string address;

public:
    virtual int earnings()=0;
    virtual void print()=0;

public:
    Employee(int,int,string,string,string);
    int getSalary()
    {
        return salary;
    }
    int getNID()
    {
        return NID;
    }
    string getName()
    {
        return name;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
};

Employee::Employee(int salary, int NID, string name, string gender, string address)
{
    this->salary=salary;
    this->NID=NID;
    this->name=name;
    this->gender=gender;
    this->address=address;
}

class SalariedEmployee: virtual public Employee
{
public:
    SalariedEmployee(int,int,string,string,string);
    int earnings();
    void print();
};

SalariedEmployee::SalariedEmployee(int salary,int NID,string name,string gender,string address):Employee(salary,NID,name,gender,address)
{

}

int SalariedEmployee::earnings()
{
    return getSalary();
}

void SalariedEmployee::print()
{
    cout<<"Name: "<<getName()<<endl;
    cout<<"NID: "<<getNID()<<endl;
    cout<<"Gender: "<<getGender()<<endl;
    cout<<"Salary: "<<getSalary()<<endl;
    cout<<"Earnings: "<<earnings()<<endl;
    cout<<"Address: "<<getAddress()<<endl;
}

class HourlyEmployee:virtual public Employee
{
private:
    int hours;

public:
    HourlyEmployee(int,int,int,string,string,string);
    int earnings();
    void print();
};

HourlyEmployee::HourlyEmployee(int hours, int salary, int NID, string name, string gender, string address):Employee(salary,NID,name,gender,address)
{
    this->hours=hours;
}

int HourlyEmployee::earnings()
{
    return getSalary()*hours;
}

void HourlyEmployee::print()
{
    cout<<"Name: "<<getName()<<endl;
    cout<<"NID: "<<getNID()<<endl;
    cout<<"Gender: "<<getGender()<<endl;
    cout<<"Salary: "<<getSalary()<<endl;
    cout<<"Earnings: "<<earnings()<<endl;
    cout<<"Address: "<<getAddress()<<endl;
}

class CommissionEmployee:virtual public Employee
{
private:
    int gross_sales;
    int commission_rate;

public:
    CommissionEmployee(int,int,int,int,string,string,string);
    int earnings();
    void print();
};

CommissionEmployee::CommissionEmployee(int gs,int cr,int salary,int NID,string name,string gender,string address) :Employee(salary,NID,name,gender,address)
{
    gross_sales=gs;
    commission_rate=cr;
}

int CommissionEmployee::earnings()
{
    return gross_sales*commission_rate;
}

void CommissionEmployee::print()
{
    cout<<"Name: "<<getName()<<endl;
    cout<<"NID: "<<getNID()<<endl;
    cout<<"Gender: "<<getGender()<<endl;
    cout<<"Salary: "<<getSalary()<<endl;
    cout<<"Earnings: "<<earnings()<<endl;
    cout<<"Address: "<<getAddress()<<endl;
}

class BasePlusCommissionEmployee:public SalariedEmployee,public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(int,int,int,int,string,string,string);
    void print();
    int earnings();
};

BasePlusCommissionEmployee::BasePlusCommissionEmployee(int gs, int cr, int salary, int NID, string name, string gender, string address) :SalariedEmployee(salary,NID,name,gender,address),CommissionEmployee(gs,cr,salary,NID,name,gender,address),Employee(salary,NID,name,gender,address)
{

}

int BasePlusCommissionEmployee::earnings()
{
    return CommissionEmployee::earnings()+SalariedEmployee::earnings();
}

void BasePlusCommissionEmployee::print()
{
    cout<<"Name: "<<SalariedEmployee::getName()<<endl;
    cout<<"NID: "<<SalariedEmployee::getNID()<<endl;
    cout<<"Gender: "<<SalariedEmployee::getGender()<<endl;
    cout<<"Salary: "<<SalariedEmployee::getSalary()<<endl;
    cout<<"Earnings: "<<earnings()<<endl;
    cout<<"Address: "<<SalariedEmployee::getAddress()<<endl;
}

int main()
{
    Employee *emp1,*emp2,*emp3,*emp4;
    int salary,NID,hours,gross_sales,commission_rate;
    string name,gender,address;

    cout<<"Name: ";
    cin>>name;
    cout<<"NID: ";
    cin>>NID;
    cout<<"Gender: ";
    cin>>gender;
    cout<<"Salary: ";
    cin>>salary;
    cout<<"Address: ";
    cin>>address;
    cout<<"Hours: ";
    cin>>hours;
    cout<<"Gross Sales: ";
    cin>>gross_sales;
    cout<<"Commission Rate: ";
    cin>>commission_rate;

    HourlyEmployee hemp(hours,salary,NID,name,gender,address);
    emp1=&hemp;
    cout<<"\nHourlyEmployee class"<<endl;
    emp1->print();

    SalariedEmployee semp(salary,NID,name,gender,address);
    emp2=&semp;
    cout<<"\nSalariedEmployee Class"<<endl;
    emp2->print();

    CommissionEmployee cemp(gross_sales,commission_rate,salary,NID,name,gender,address);
    emp3=&cemp;
    cout<<"\nCommisionEmployee class"<<endl;
    emp3->print();

    BasePlusCommissionEmployee bpcemp(gross_sales,commission_rate,salary,NID,name,gender,address);
    emp4=&bpcemp;
    cout<<"\nBasePlusCommisonEmployee class"<<endl;
    emp4->print();

    return 0;
}
*/