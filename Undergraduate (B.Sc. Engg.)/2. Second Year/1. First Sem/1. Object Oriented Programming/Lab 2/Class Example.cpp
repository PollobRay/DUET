//
// Created by pollo on 3/20/2021.
//


/*

#include <iostream>
#include <iomanip>

using namespace std;

class Family
{
private:
    int size;
    string name[20];
    int ages[20];

private:
    int avg();
    void findYoungest();
    void findElder();

public:
    Family(int s)
    {
        size=s;
    }
    void setMember(string n[],int ag[]);
    void display();
};

void Family::display()
{
    cout<<"Number of members: "<<size<<endl;
    cout<<setw(10)<<"Name"<<setw(10)<<"age"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<setw(10)<<name[i]<<setw(10)<<ages[i]<<endl;
    }
    cout<<setw(10)<<"Avg age: "<<setw(10)<<avg()<<endl;
    findElder();
    cout<<", ";
    findYoungest();
    cout<<endl;
}
int Family::avg()
{
    int totalages=0;

    for (int i = 0; i < size; ++i)
    {
       totalages+=ages[i];
    }

    return totalages/size;
}
void Family::findYoungest()
{
    int index,minimunage=555;

    for(int i=0;i<size;i++)
    {
        if(minimunage>ages[i])
        {
            minimunage=ages[i];
            index=i;
        }
    }
    cout<<setw(10)<<"Youngest:  "<<setw(10)<<name[index]<<" ("<<ages[index]<<")";
}
void Family::findElder()
{
    int index,maximumage=-888;

    for(int i=0;i<size;i++)
    {
        if(maximumage<ages[i])
        {
            maximumage=ages[i];
            index=i;
        }
    }
    cout<<setw(10)<<"Eldest:  "<<setw(10)<<name[index]<<" ("<<ages[index]<<")";
}
void Family::setMember(string n[],int ag[])
{
    for (int i = 0; i <size ; ++i) {
        name[i]=n[i];
        ages[i]=ag[i];
    }
}

int main()
{
    string name1[]={"Sarah","Sam","Henry"};
    int ages1[]={34,20,54};
    string names2[]={"Tom","Sofia","Nancy","Gary"};
    int ages2[]={30,31,3,50};

    Family family1(3),family2(4);

    family1.setMember(name1,ages1);
    family1.display();

    cout<<endl;

    family2.setMember(names2,ages2);
    family2.display();

    return 0;
}
*/

