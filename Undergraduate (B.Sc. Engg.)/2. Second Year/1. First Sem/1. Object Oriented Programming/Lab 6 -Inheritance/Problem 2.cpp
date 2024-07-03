//
// Created by pollo on 4/20/2021.
//

#include <iostream>
using namespace std;
/*
class Teacher
{
private:
    int salary;
    string dept;

public:
    Teacher(int,string);
    void print();
    ~Teacher();
};

Teacher::Teacher(int s, string d)
{
    salary=s;
    dept=d;

    cout<<"Teacher class constructor"<<endl;
}
void Teacher::print()
{
    cout<<"Teacher class print function"<<endl;
    cout<<"Salary: "<<salary<<"  Dept: "<<dept<<endl;
}

Teacher::~Teacher()
{
    cout<<"Teacher class destructor"<<endl;
}

class Student
{
private:
    int total_credit, quality_points;
    string program;

public:
    Student(int,int,string);
    int cgpa();
    void print();
    ~Student();
};

Student::Student(int tc, int qp, string p)
{
    total_credit=tc;
    quality_points=qp;
    program=p;

    cout<<"Student class constructor"<<endl;
}

int Student::cgpa()
{
    return quality_points/total_credit;
}

void Student::print()
{
    cout<<"Student class print function"<<endl;
    cout<<"Quality point: "<<quality_points<<" Total credits: "<<total_credit<<" CGPA: "<<cgpa()<<endl;
}

Student::~Student()
{
    cout<<"Student class Destructor"<<endl;
}

class GraduteTA : Teacher, Student
{
private:

public:
    GraduteTA(int,string,int,int,string);
    ~GraduteTA();
    void print();

};

GraduteTA::GraduteTA(int salary,string dept,int totalCredit,int qualityPoint,string program) :Teacher(salary,dept), Student(totalCredit,qualityPoint,program)
{
    cout<<"GraduteTA class constructor"<<endl;
}

GraduteTA::~GraduteTA()
{
    cout<<"GraduteTA class destructor"<<endl;
}

void GraduteTA::print()
{
    cout<<"GraduateTA class print function"<<endl;
    Teacher::print();
    Student::print();
}

int main()
{
    GraduteTA gradute(50000,"CSE",20,65,"BSC Eng.");

    gradute.print();

    return 0;
}
*/