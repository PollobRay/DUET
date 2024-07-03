//
// Created by pollo on 3/23/2021.
//

/*
#include <iostream>
using namespace std;

class Calculator
{
private:
    double sum(double a,double b);
    double sub(double a,double b);
    double mul(double a,double b);
    double divide(double a,double b);
    int modulus(int a,int b); // coz modulus operator perform operation only char and int/long

public:
    void performOperation();

};

double Calculator::sum(double a, double b)
{
    double result;

    result=a+b;

    return result;
}

double Calculator::sub(double a, double b)
{
    double result;

    result=a-b;

    return result;
}

double Calculator::mul(double a, double b)
{
    double result;
    result=a*b;

    return result;
}

double Calculator::divide(double a, double b)
{
    double result=0;
     result=a/b;

    return result;
}

int Calculator::modulus(int a, int b)
{
    return a%b;
}

void Calculator::performOperation()
{
    int n;
    char ch='Y';
    double a,b,result;

    do {
       cout<<endl<<"MENU"<<endl;
       cout<<"\t"<<"1. Add"<<endl;
       cout<<"\t"<<"2. Subtract"<<endl;
       cout<<"\t"<<"3. Multiply"<<endl;
       cout<<"\t"<<"4. Divide"<<endl;
       cout<<"\t"<<"5. Modulus"<<endl;

       cout<<"Enter your choice: ";
       cin>>n;
       cout<<"Enter 1st numbers: ";
       cin>>a;
       cout<<"Enter 2nd numbers: ";
       cin>>b;

       if(n==4&&b==0)
       {
           cout<<"Can't Divite"<<endl;
       }
       else
       {
            if(n==1)
            {
                result=sum(a,b);
                cout<<"Result of Add is: ";
                printf("%.lf\n",result);
            }
            else if(n==2)
            {
                result=sub(a,b);
                cout<<"Result of Sub is: ";
                printf("%.lf\n",result);
                printf("Result of ");
            }
            else if(n==3)
            {
                result=mul(a,b);
                cout<<"Result of multiplication: ";
                printf("%.lf\n",result);
            }
            else if(n==4)
            {
                result=divide(a,b);
                cout<<"Result of divide: ";
                printf("%.lf\n",result);
            }
            else if(n==5)
            {
                result=(int)modulus((int)a,(int)b);
                cout<<"Result of modulus: ";
                printf("%.lf\n",result);
            }

       }
       cout<<endl;
       cout<<"Continue Y/N? ";
       cin>>ch;
       cout<<endl;
    }while(ch!='N');
}

int main()
{
    Calculator calculator;
    calculator.performOperation();

    return 0;
}
*/