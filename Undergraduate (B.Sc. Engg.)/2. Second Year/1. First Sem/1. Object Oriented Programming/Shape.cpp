
//
// Created by Ray on 2/8/2022.
//

#include<iostream>
using namespace std;
class shape
{
private:
    string color;
    bool filled;
public:
    shape()
    {
        color = "Red";
        filled = true;
    }

    shape(string color, bool f)
    {
       this->color = color;

        this->filled = f;
    }

    string get_color()
    {
        return color;
    }

    void set_color(string c)
    {
        this->color=c;
    }

    bool is_filled()
    {
        return filled;
    }
    void set_filled(bool f)
    {
        this->filled = f;
    }

    string toString()
    {
        if (filled==true)
            return "shape[color="+color+"filled= True]";
        else
            return "shape[color="+color+"filled= False]";
    }


};

class Rectangle : public shape
{
public:
    double width;
    double length;
public:
    Rectangle()
    {
        width=1.0;
        length =1.0;

    }
    Rectangle(double w, double length)
    {
        //this->width = width;
        width = w;
        this->length = length;
    }

    Rectangle(string color, bool filled, double width, double length):shape(color,filled)
    {
        this->width = width;
        this->length = length;
    }
    double get_width()
    {
        return width;
    }
    void set_width(double width)
    {
        this->width = width;
    }
    double get_length()
    {
        return length;
    }
    void set_length(double length)
    {
        this->length=length;
    }

    double get_area()
    {
        return width*length;
    }
    double get_perimeter()
    {
        return 2*(width + length);
    }

    string toString()
    {
        return "Rectangle[width=" + to_string(length)+"length="+to_string(length)+"]";
    }

};

class Square:public Rectangle
{
public:
    Square():Rectangle()
    {

    }
    Square(double side):Rectangle(side,side)
    {

    }
    Square(string color, bool filled, double side):Rectangle( color, filled,side,side)
    {

    }
    double get_side()
    {
        return get_length();
    }




};

int main()
{
    Square s;
    cout<<s.get_area();
    cout<<s.get_perimeter();

    return 0;
}
