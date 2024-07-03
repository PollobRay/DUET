//
// Created by pollob on 4/20/2021.
//

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
private:
    string name;
    string color;
    int no_of_sides;

public:
    Shape(string,string,int);
    void print();
    ~Shape();
};

Shape::Shape(string n, string c, int ns)
{
    name=n;
    color=c;
    no_of_sides=ns;

    cout<<"Constructor of Shape class"<<endl;
}

void Shape::print()
{
    cout<<"Name of Shape: "<<name<<"  Color: "<<color<<"  Number of sides: "<<no_of_sides<<endl;
}

Shape::~Shape()
{
    cout<<"Desructor of Shape class"<<endl;
}

class Triangle : Shape
{
private:
    int a,b,c;

public:
    Triangle(string,int,int,int);
    float area();
    int perimeter();
    void print();
    ~Triangle();
};

Triangle::Triangle(string cl,int s1,int s2,int s3):Shape("Triangle",cl,3)
{
    a=s1;
    b=s2;
    c=s3;

    cout<<"Constructor of Triangle class"<<endl;
}

float Triangle::area()
{
    float s,area;

    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    return area;
}

int Triangle::perimeter()
{
    return (a+b+c);
}

void Triangle::print()
{
   Shape::print(); //calling parent class print function
   cout<<"Area: "<<area()<<" Perimeter: "<<perimeter()<<endl;
}

Triangle::~Triangle()
{
    cout<<"Destructor of Triangle class"<<endl;
}

class Quadrilateral : Shape
{
private:
    int a,b,c,d;

public:
    Quadrilateral(string,int,int,int,int);
    Quadrilateral(string,string,int,int,int,int);
    int perimeter();
    void print();
    ~Quadrilateral();
};

Quadrilateral::Quadrilateral(string cl, int s1, int s2, int s3, int s4):Shape("Quadrical",cl,4)
{
    a=s1;
    b=s2;
    c=s3;
    d=s4;

    cout<<"Constructor of Quadrilateral class"<<endl;
}

Quadrilateral::Quadrilateral(string name,string cl, int s1, int s2, int s3, int s4):Shape(name,cl,4)
{
    a=s1;
    b=s2;
    c=s3;
    d=s4;

    cout<<"Constructor of Quadrilateral class"<<endl;
}

int Quadrilateral::perimeter()
{
    return (a+b+c+d);
}

void Quadrilateral::print()
{
    Shape::print();
    cout<<"Perimeter: "<<perimeter()<<endl;
}

Quadrilateral::~Quadrilateral()
{
    cout<<"Destructor of Quadrilateral class"<<endl;
}

class Rectangle : Quadrilateral
{
private:
    int a,b;

public:
    Rectangle(string,int,int);
    Rectangle(string,string,int,int);
    float area();
    void print();
    ~Rectangle();
};

Rectangle::Rectangle(string cl, int s1, int s2):Quadrilateral("Rectangle",cl,s1,s1,s2,s2)
{
    a=s1;
    b=s2;

    cout<<"Constructor of Rectangle class"<<endl;
}

Rectangle::Rectangle(string name,string cl, int s1, int s2):Quadrilateral(name,cl,s1,s1,s2,s2)
{
    a=s1;
    b=s2;

    cout<<"Constructor of Rectangle class"<<endl;
}

float Rectangle::area()
{
    return (a*b);
}

void Rectangle::print()
{
    Quadrilateral::print();
    cout<<"Area: "<<area()<<endl;
}

Rectangle::~Rectangle()
{
    cout<<"Destructor of Rectangle class"<<endl;
}

class Square : Rectangle
{
private:
    int a;

public:
    Square(string,int);
    void print();
    ~Square();
};

Square::Square(string cl, int s):Rectangle("Square",cl,s,s)
{
    a=s;
    cout<<"Constructor of Square class"<<endl;
}

void Square::print()
{
    Rectangle::print();
}

Square::~Square()
{
    cout<<"Constructor of Square class"<<endl;
}
/*
int main() {
    string color,name;
    int side1, side2, side3, side4,no;

    cout<<"Enter name of Shape, color & no of sides: ";
    cin>>name>>color>>no;

    Shape shape(name,color,no);
    shape.print();

    cout << "Enter color name & three sides for a Triangle :";
    cin >> color >> side1 >> side2 >> side3;

    Triangle triangle(color, side1, side2, side3);
    triangle.print();

    cout << "Enter color name & four sides for a Quadrilateral :";
    cin >> color >> side1 >> side2 >> side3 >> side4;

    Quadrilateral quadrilateral(color, side1, side2, side3, side4);
    quadrilateral.print();

    cout << "Enter color name & two sides for a Rectangle :";
    cin >> color >> side1 >> side2;

    Rectangle rectangle(color, side1, side2);
    rectangle.print();

    cout << "Enter color name & one side for a Square :";
    cin >> color >> side1;

    Square square(color, side1);
    square.print();

    return 0;

}
*/