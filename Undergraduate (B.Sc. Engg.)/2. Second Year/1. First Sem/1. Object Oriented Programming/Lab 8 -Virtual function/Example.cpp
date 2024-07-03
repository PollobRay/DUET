//
// Created by pollob on 5/31/2021.
//

#include<iostream>
#include <fstream>
using namespace std;
/*
class A
{
private:
  int a;
  int b;
public:
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    void setA(int q)
    {
        a=q;
    }
    void setB(int q)
    {
        b=q;
    }



};

class B:public A
{
public :
    void fun1()
    {
        cout<<"Fun1 -2"<<endl;
    }
    void fun2()
    {
        cout<<"Fun 2"<<endl;
    }
};
class D
{
    ofstream file;
    A data,d2;
public:
    void save()
    {
        data.setA(800);
        data.setB(400);

        file.open("A.txt", ios::app);
        file.write((char*)&data,sizeof(data));
        file.close();
        data.setA(20);
        data.setB(30);

        ifstream file2;
        file2.open("A.txt",ios::in);
        file2.seekg(0);
        while (!file2.eof())
        {
            file2.read((char*)&d2,sizeof(d2));
            cout<<d2.getA()<<endl;
            cout<<d2.getB()<<endl;
        }

        file2.close();
        cout<<d2.getA()<<endl;
        cout<<d2.getB()<<endl;
    }
};
int main()
{

    D d;
    d.save();


    return 0;
}
*/