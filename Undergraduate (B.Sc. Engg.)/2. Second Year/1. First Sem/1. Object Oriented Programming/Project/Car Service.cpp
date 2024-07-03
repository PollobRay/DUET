//
// Created by Ray on 6/28/2021.
//

#include<iostream>
#include<windows.h>
using namespace std;
/*
class basic
{
protected:
    double cost;
    string no;
    char ch, op;
public:
    void show(char s)
    {
        system("color E5");
        cout << "\n\n\n\n\n\n\n\n\n\n\n" << endl;
        for (int i = 0; i<74; i++)
        {
            cout << s;
        }
        cout << "\n"
                ""
                "WELCOM TO CAR REPAIRING CENTER"<< endl;
        for (int i = 0; i<74; i++)
        {
            cout << s;
        }
        cout << endl;
        char line = 220;        //loading line design
        cout << endl << endl << "\tLOADING.......\n\n\t\t";
        cout << endl << "\t\tPLEASE WAITE.......\n\n\t\t";
        for (int i = 0; i<100; i++)
        {
            cout << line;
            Sleep(20);        //Loading line speed
        }
        system("cls");
    }
    void details()
    {
        cout << "    Instructions & Guidance   " << endl;
        cout << "\n*don't touch anything " << endl;
        cout << "\n*No smoking please " << endl;
        cout << "\n*only 4 cars can be repaired at a time " << endl;
        cout << "\n*all new technologies are used here " << endl;
        cout << "\n*cost for repairing is one per thing RS 500 " << endl;
        cout << "\n*cost for washing a car is RS 1000 " << endl;
        cout << "\n*cost for survice is RS 2000 " << endl;
        cout << "\n*for car washing enter into room 1 " << endl;
        cout << "\n*for repairing engine enter into room 2 " << endl;
        cout << "\n*for survice enter into room 3 " << endl;
        cout << "\n*for replacing something enter into room 4 " << endl;
        {
            system("pause");
            system("cls");
        }
    }
    char getdata()
    {
        cout << " we have following functions available " << endl;
        cout << " * repairing (r) \n ";
        cout << " * washing (w) \n ";
        cout << " * removing (m) \n ";
        cout << " * changing (c) \n ";
        cout << " select your option " << endl;
        cin >> ch;
        //////////////////////////////////////////
        switch (ch)
        {
            case 'r':
                cout << "You are advice to go shop 1 " << endl;
                Sleep(3000);
                break;
            case 'm':
                cout << "You are advice to go shop 2 " << endl;
                Sleep(3000);
                break;
            case 'w':
                cout << "You are advice to go Washing shop " << endl;
                Sleep(3000);
                break;
            case 'c':
                cout << "You are advice to go Engineering shop " << endl;
                Sleep(3000);
                break;
        }
        ///////////////////////////
        return ch;
        system("cls");
    }

    void get()
    {
        cout << " enter your option " << endl;
        cin >> ch;
        cout << " do  u want to enter anyother options ? ( y / n ) " << endl;
        cin >> ch;
        while (ch != 'n')
        {
            cout << " enter your option " << endl;
            cin >> ch;
            cout << " Are you sure  ? ( y / n ) " << endl;
            cin >> ch;
        }
        ///////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////////
        cout << " your parts will  be repaired after 10 minutes " << endl;

        system("cls");
    }
};
//////////////////////////////////////////////////////////////////////////////////
class repairing : public basic
{
protected:

public:
    void parts()
    {
        cout << " price list for repairing items  " << endl;
        cout << "\n a." << "Engine = 500 " << endl;
        cout << "\n b." << "patroll tank = 300 " << endl;
        cout << "\n c." << "cylenser = 1000 " << endl;
        cout << "\n d." << "oil duct = 2000 " << endl;

        basic::get();
        cout << " your items are being repaired " << endl;
    }

};
//////////////////////////////////////////////////////////////////////////////
class washing : public basic
{
public:
    void wash()
    {
        cout << " price for car washing is 1000 RS " << endl;
        cout << " your car will be washed after Repairing " << endl;
        Sleep(5000);
        char line = 220;        //loading line design
        cout << endl << endl << "\tLOADING.......\n\n\t\t";
        for (int i = 0; i<80; i++)
        {
            cout << line;
            Sleep(20);        //Loading line speed
        }
        system("cls");
    }
};
/////////////////////////////////////////////////////////////////////////////////
class changing : public basic
{
protected:
public:
    void changes()
    {
        system("color E");
        cout << " price list is " << endl;
        cout << "\n a. front mirror = 2000 ";
        cout << "\n b. back mirror = 500 ";
        cout << "\n c. tyres = 200 each ";
        basic::get();
        cout << " your parts will be changes after 5 minutes " << endl;
        Sleep(5000);
        system("cls");
    }
};
/////////////////////////////////////////////////////////////////////////////////
class removing : public basic
{
protected:
public:
    void remove()
    {
        system("color 7D");
        cout << "Enter what you want to remove here" << endl;
        basic::get();
        cout << "you are advice to contect to eng. for better work" << endl;
        Sleep(5000);
        system("cls");
    }
};
//////////////////////////////////////////////////////////////////////////////////
int main()
{
    system("color B8");
    char a;
    repairing r;

    washing w;
    changing c;
    removing m;
   // r.show('*');  //1

   // r.details(); // 1
    a = r.getdata();
    char line = 220;        //loading line design
    cout << endl << endl << "\tLOADING.......\n\n\t\t";
    for (int i = 0; i<80; i++)
    {
        cout << line;
        Sleep(20);        //Loading line speed
    }
    system("cls");
    if (a == 'r')
    {
        r.parts();
    }
    if (a == 'm')
    {
       // c.show('*'); //2
        m.remove();
    }
    if (a == 'c')
    {
        c.changes();
    }
    else if (a == 'w')
    {
        c.show('*'); //3
        w.wash();
    }

    else

    {
        cout << " invalid option " << endl;
    }
    cout << " THANK YOU " << endl;
    system("pause");
    return 0;
}
*/