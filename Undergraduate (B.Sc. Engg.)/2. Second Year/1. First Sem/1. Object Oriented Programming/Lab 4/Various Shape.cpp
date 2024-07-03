//
// Created by pollo on 4/8/2021.
//
/*
#include<iostream>
using namespace std;

class Shape
{
public:
    int colour;

};

class Rectangle:public Shape
{
private:
    int height;
    int weight;

public:
    Rectangle(int h,int w)
    {
        height=h;
        weight=w;
    }
    int getArea();
};
int Rectangle::getArea()
{
    return height*weight;
}

class Triangle:public Shape
{
private:
    int base;
    int height;

public:
    Triangle(int b,int h)
    {
        base=b;
        height=h;
    }
    double getArea();
};

double Triangle::getArea()
{
    return 0.5*base*height;
}

class Circle:public Shape
{
private:
    int radius;

public:
    Circle(int r)
    {
        radius=r;
    }

    double getArea();
};
double Circle::getArea()
{
    return 3.1416*radius*radius;
}


int main()
{
    int recHeight,recWeight,recColor;
    int triBase,triHeight,triColor;
    int cirRadius,cirColor;

    cout<<"Enter Rectangle height weight and Color: ";
    cin>>recHeight>>recWeight>>recColor;

    cout<<"Enter Triangle Base height and Color: ";
    cin>>triBase>>triHeight>>triColor;

    cout<<"Enter Circle Radius and Color: ";
    cin>>cirRadius>>cirColor;

    cout<<endl;

    Rectangle rec1=Rectangle(recHeight,recWeight);
    rec1.colour=recColor;
    cout<<"Rectangle area is: "<<rec1.getArea()<<endl;

    Triangle tri1=Triangle(triBase,triHeight);
    tri1.colour=triColor;
    cout<<"Triangle area is: "<<tri1.getArea()<<endl;

    Circle cir1=Circle(cirRadius);
    cir1.colour=cirColor;
    cout<<"Circle area is: "<<cir1.getArea()<<endl;



    return 0;
}
*/