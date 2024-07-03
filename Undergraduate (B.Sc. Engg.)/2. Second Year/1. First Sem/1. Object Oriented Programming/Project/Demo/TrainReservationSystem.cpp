//
// Created by Ray on 6/5/2021.
//

#include <iostream>
#include <fstream>
#include <map>
#include <vector>
using namespace std;
/*
class Ticket
{
private:
    int TicketNo;
    int passengerNo;
    string TrainCode;
    string TrainName;
    string CoachName;
    int SeatNo;
    string StartingLocation;
    string DestinationLocation;
    string TravellingDate;
    string TicketStatus;

public:
    void setTicketNo(int no)
    {
        TicketNo=no;
    }
    void setPassengerNo(int no)
    {
        passengerNo=no;
    }
    void setTrainCode(string c)
    {
        TrainCode=c;
    }
    void setTrainName(string name)
    {
        TrainName=name;
    }
    void setCoachName(string name)
    {
        CoachName=name;
    }
    void setSeatNo(int no)
    {
        SeatNo=no;
    }
    void setStartingLocation(string loc)
    {
        StartingLocation=loc;
    }
    void setDestinationLocation(string loc)
    {
        DestinationLocation=loc;
    }
    void setTravellingDate(string date)
    {
        TravellingDate=date;
    }
    void setTicketStatus(string status)
    {
        TicketStatus=status;
    }

    int getTicketNo()
    {
        return TicketNo;
    }
    int getPassengerNo()
    {
        return passengerNo;
    }
    string getTrainCode()
    {
        return TrainCode;
    }
    string getTrainName()
    {
        return TrainName;
    }
    string getCoachName()
    {
        return CoachName;
    }
    int getSeatNo()
    {
        return SeatNo;
    }
    string getStartingLocation()
    {
        return StartingLocation;
    }
    string getDestinationLocation()
    {
        return DestinationLocation;
    }
    string getTravellingDate()
    {
        return TravellingDate;
    }
    string getTicketStatus()
    {
        return TicketStatus;
    }

};

class Person
{
private:
    string name;
    int age;
    string gender;
    string address;
    string contactNo;
    int TotalAmount;

public:
    void setName(string n)
    {
        name=n;
    }
    void setAge(int a)
    {
        age=a;
    }
    void setGender(string g)
    {
        gender=g;
    }
    void setAddress(string adrs)
    {
        address=adrs;
    }
    void setContactNo(string no)
    {
        contactNo=no;
    }
    void setTotalAmount(int amount)
    {
        TotalAmount=amount;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
       return age;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getContactNo()
    {
        return contactNo;
    }
    int getTotalAmount()
    {
        return TotalAmount;
    }
};

class Passenger : public Person
{
private:
    int TotalReservedSeats;
    vector<Ticket> tickets;

public:
    void DisplayTrainInformation()
    {}
    void DisplayTicketsInfo()
    {

    }
    void ReservedSeat()
    {
        char option;
        int TicketNo=1;
        int passengerNo;
        string TrainCode;
        string TrainName;
        string CoachName;
        int SeatNo;
        string StartingLocation;
        string DestinationLocation;
        string TravellingDate;
        string TicketStatus;

        do{
            cout<<"Do you want to reserve seat (y/n)"<<endl;
            cin>>option;
            if (option=='n')
                break;

            Ticket t;
            t.setTicketNo(TicketNo);
            t.setTrainCode("222");
            cout<<"Train Name: ";
            cin>>TrainName;
            t.setTrainName(TrainName);
            t.setCoachName("Kha");
            t.setSeatNo(TicketNo);
            t.setPassengerNo(TicketNo);
            t.setStartingLocation("Bogra");
            t.setDestinationLocation("Dhaka");
            t.setTravellingDate("05-06-2021");
            t.setTicketStatus("Booked");
            TicketNo++;
            tickets.push_back(t);
        } while (option=='y');

    }
    void CancelSeat()
    {}
    void enquiry()
    {
        TotalReservedSeats=tickets.size();
        for (int i = 0; i <TotalReservedSeats ; ++i)
        {
            cout<<"no : "<<i+1<<endl;
            cout<<"Train Code: "<<tickets[i].getTrainCode()<<endl;
            cout<<"Train Name: "<<tickets[i].getTrainName()<<endl;
            cout<<"Coach Name: "<<tickets[i].getCoachName()<<endl;
            cout<<"Seat No: "<<tickets[i].getSeatNo()<<endl<<endl;

        }
    }
};

//End

class Seat
{

};

class Coach
{

};

class Train
{

};

class Scheduler
{

};

class TrainScheduler : public Train, public Scheduler
{

};

int main()
{
    Passenger p,p1;
    fstream file;
    file.open("store.dat",ios::app | ios::out | ios::in | ios::binary );
    file.write(reinterpret_cast<char*>(&p), sizeof(p));
    file.seekg(0);
    file.read(reinterpret_cast<char*>(&p1), sizeof(p1));
    p1.enquiry();
    p.ReservedSeat();
    p.enquiry();

    return 0;
}
*/