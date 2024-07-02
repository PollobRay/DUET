#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    int rollno;
    char name[20];
    class address
    {
    private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[20];
    public:
        void setaddress(int h, char *s,char *c,char *st,char *p)
        {
            houseno=h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,p);
        }
        void showaddress()
    {
        cout<<"\n"<<houseno;
        cout<<"\n"<<street;
        cout<<"\n"<<city;
        cout<<"\n"<<state;
        cout<<"\n"<<pincode;
    }
    };

    address a;
    public:
        void setroll(int r)
        {
            rollno=r;
        }
        void setname(char *n)
        {
            strcpy(name,n);
        }
        void setaddress(int h,char *s,char *c,char *st,char *p)
        {
            a.setaddress(h,s,c,st,p);
        }
        void showstudent()
        {
            cout<<"\n student data";
            cout<<"\n Roll:"<<rollno<<"\n Name:"<<name;
            a.showaddress();
        }
};
int main()
{
    student s;
    s.setroll(46);
    s.setname("Pollob");
    s.setaddress(302,"Doulatpur","Khetlal","505","joypurhat");
    s.showstudent();
    return 0;
}
