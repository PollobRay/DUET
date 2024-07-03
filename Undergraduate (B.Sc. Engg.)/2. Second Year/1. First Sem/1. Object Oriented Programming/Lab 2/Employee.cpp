//
// Created by pollo on 3/16/2021.
//

/*

#include <iostream>
#include <iomanip>

using namespace std;

class Employee
{
private:
    string name,address;
    int dateOfJoin;
    float salary;

public :
    Employee(string n,int d,string adr,float slry)
    {
    name=n;
    dateOfJoin=d;
    address=adr;
    salary=slry;
    }
    Employee(const Employee &emp)
    {
        name=emp.name;
        dateOfJoin=emp.dateOfJoin;
        address=emp.address;
        salary=emp.salary;
    }
    void show()
    {
        cout<<setw(20)<<name<<setw(20)<<dateOfJoin<<setw(20)<<address<<setw(20)<<salary<<endl;
    }

    ~Employee()
    {
        cout<<"Destructor"<<endl;
    }
};

int main()
{
    Employee emp1("Robert",1994,"64C- WallsStreat",50000);
    Employee emp2("Sam",2000,"68D- WallsStreat",70000);
    Employee emp3("John",1999,"26B- WallsStreat",80000);

    cout<<setw(20)<<"Name"<<setw(20)<<"Year of joining"<<setw(20)<<"Address"<<setw(20)<<"Salary"<<endl;
    emp1.show();
    emp2.show();
    emp3.show();

    cout<<"Using copy constructor"<<endl;
    Employee emp4(emp1);

    cout<<setw(20)<<"Name"<<setw(20)<<"Year of joining"<<setw(20)<<"Address"<<setw(20)<<"Salary"<<endl;
    emp4.show();

    return 0;
}
*/

