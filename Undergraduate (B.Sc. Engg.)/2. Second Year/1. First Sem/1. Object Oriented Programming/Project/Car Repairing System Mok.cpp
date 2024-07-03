//
// Created by Ray on 6/28/2021.
//
/*
#include<iostream>
#include <vector>
using namespace std;

class Car
{
private:
    int carNo;
    string carColur;
    string licenceNo;

public:
    Car(int n,string cc,string ln)
    {
        carNo=n;
        carColur=cc;
        licenceNo=ln;
    }
    int getCarNo()
    {
        return carNo;
    }
    string getCarColor()
    {
        return carColur;
    }
    string getLicenceNo()
    {
        return licenceNo;
    }
};

class Service
{
private:
    string bookingDate;
    string deliveryDate;
    int TotalservicingCost;

public:
    Service(string bD,string dD,int Tc)
    {
        bookingDate=bD;
        deliveryDate=dD;
        TotalservicingCost=Tc;
    }
    string getBookingDate()
    {
        return bookingDate;
    }
    string getDelivaryDate()
    {
        return deliveryDate;
    }
    int getTotalservicingCost()
    {
        return TotalservicingCost;
    }
    void updateTotalservicingCost(int price)
    {
        TotalservicingCost+=price;
    }
};

class CarServicing :public Car,public Service
{
private:
    vector<string>serviceList;
    vector<int>costList;
public:
    CarServicing(int n,string cc,string ln,string bD,string dD,int Tc):Car(n,cc,ln),Service(bD,dD,Tc)
    {

    }
    void addService(string sc,int pc)
    {
        serviceList.push_back(sc);
        costList.push_back(pc);
        updateTotalservicingCost(pc);
    }
    void showServices()
    {
        for (int i = 0; i < serviceList.size(); ++i)
        {
            cout<<"\nService Name: "<<serviceList[i]<<"\t"<<"Cost: "<<costList[i];
        }
    }
};

class Repair
{
private:
    vector<CarServicing>carList;

public:
    void addCar()
    {
        int carNo;
        string carColur;
        string licenceNo;
        string bookingDate;
        string deliveryDate;
        int Totalservice;
        string serviceCategory;
        int costforservice;

        cout<<"\n Car No: ";
        cin>>carNo;
        cout<<"\n Car Color: ";
        cin>>carColur;
        cout<<"\n Licence Car No: ";
        cin>>licenceNo;
        cout<<"\n Booking Date: ";
        cin>>bookingDate;
        cout<<"\n Delivery Date: ";
        cin>>deliveryDate;
        cout<<"\n Total service: ";
        cin>>Totalservice;

        CarServicing car(carNo,carColur,licenceNo,bookingDate,deliveryDate,0);
        for (int i = 0; i <Totalservice ; ++i)
        {
            cout<<"\nService Name: ";
            cin>>serviceCategory;
            cout<<"Cost: ";
            cin>>costforservice;

            car.addService(serviceCategory,costforservice);
        }

        carList.push_back(car);

    }
    void showCar()
    {
        for (int i = 0; i < carList.size(); ++i)
        {
            cout<<endl<<endl;
            cout<<"\nCar No: "<<carList[i].getCarNo();
            cout<<"\nCar color: "<<carList[i].getCarColor();
            cout<<"\nCar licence No: "<<carList[i].getLicenceNo();
            cout<<"\nBooking Date: "<<carList[i].getBookingDate();
            cout<<"\nDelivery Date: "<<carList[i].getDelivaryDate();
            cout<<"\nTotal Servicing Cost: "<<carList[i].getTotalservicingCost();
            cout<<"\nPrinting servicing List....\n";
            carList[i].showServices();
        }
    }

};

int main()
{

    int data;
    Repair repair;

    do{
        cout<<"\n         Car Servicing System      \n";
        cout<<"\n1->add Car";
        cout<<"\n2->show Car";
        cout<<"\n0->Exit\n";
        cin>>data;

        if (data==1)
        {
            repair.addCar();
        }
        else if (data==2)
        {
            repair.showCar();
        }
    } while (data!=0);

    return 0;
}*/
