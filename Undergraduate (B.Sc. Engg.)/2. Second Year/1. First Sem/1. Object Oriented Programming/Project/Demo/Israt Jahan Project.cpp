//
// Created by Ray on 6/26/2021.
//

/*
#include<iostream>
#include <vector>
using namespace std;

class TrainReservation;

int number_of_train;
vector<TrainReservation>trains;


class Train
{
private:
    string train_name;
    int number_of_seat,book_cnt,fare_per_seat;

public:

    Train(string tn,int ts,int bookcnt,int fps)
    {
        train_name=tn;
        number_of_seat=ts;
        book_cnt=bookcnt;
        fare_per_seat=fps;

    };
    void printTrain()
    {
        cout<<"\nTrain Name :"<<train_name;
        cout<<"\nNumber of Seats :"<<number_of_seat;
        cout<<"\nBook Count :"<<book_cnt;
        cout<<"\nFare per seat :"<<fare_per_seat;
    }

    int getNumberOfSeat(){
        return number_of_seat;
    }

    int getBookCnt() {
        return book_cnt;
    }

    void incrementBookCount()
    {
        book_cnt++;
    }

    void decrementBoookCount()
    {
        book_cnt--;
    }
    string getTrainName()
    {
        return train_name;
    }
};

class Scheduler
{
private:
    string source;
    string dest;
    string date;
    string departureTime;
    string arrivalTime;

public:
    Scheduler(string sc,string dest,string date,string dt,string at)
    {
        this->source=sc;
        this->dest=dest;
        this->date=date;
        this->departureTime=dt;
        this->arrivalTime=at;
    }
    void printScheduler()
    {
        cout<<"\nSource :"<<source;
        cout<<"\nDestination :"<<dest;
        cout<<"\nJourney Date :"<<date;
        cout<<"\nDeparture Time :"<<departureTime;
        cout<<"\nArrival Time :"<<arrivalTime;

    }
};

class TrainReservation: public Train,public Scheduler
{
private:


public:
    TrainReservation(string tn,int ts,int bookcnt,int fps,string sc,string dest,string date,string dt,string at):Train(tn,ts,bookcnt,fps),Scheduler(sc,dest,date,dt,at)
    {

    }
    void printData()
    {
        printTrain();
        printScheduler();
    }
};
class Ticket
{
private: //data member
    string psg_name,phn_number,gender,adult_or_child;
    int train_no,seat_NO,ID;
    string TrainName;

public:
    void ticket(int id) //member function
    {
        ID=id;

        fflush(stdin);
        cout<<"\n\nPassenger Name :";
        cin>>psg_name;

        fflush(stdin);
        cout<<"Phone number :";
        cin>>phn_number;

        fflush(stdin);
        cout<<"Gender :";
        cin>>gender;

        fflush(stdin);
        cout<<"Adult or Child :";
        cin>>adult_or_child;

        cout<<"\nSelect a train"<<endl;
        for(int i=0; i<number_of_train; i++)
        {
            cout<<"\n\n\nTrain No :"<<i+1<<"  ";
            trains[i].printData();
        }

        do {
            fflush(stdin);
            cout<<"\n\nEnter Train No :";
            cin>>train_no;

            if (train_no>0&&train_no<=number_of_train)
            {
                break;
            }
            else
            {
                cout<<"\n\n Enter Valid Train No \n";
            }
        } while (train_no<=0||train_no>number_of_train);

        train_no--;

        if(trains[train_no].getNumberOfSeat()==trains[train_no].getBookCnt())
        {
            cout<<"\n\nNO seat available!!"<<endl;
        }
        else
        {
            trains[train_no].incrementBookCount();
            seat_NO=trains[train_no].getBookCnt();
            cout<<"\n\nTicket Booking Confirm!! :)"<<endl<<endl;
            cout<<endl<<"Ticket info: "<<endl<<id<<endl;

            trains[train_no].printData();
            printTicketData();

            TrainName=trains[train_no].getTrainName();
        }
        cout<<endl;
    }

    void printTicketData()
    {

        cout<<"\n\nPassenger Name :"<<psg_name;
        cout<<"\nPassenger Phone Number :"<<phn_number;
        cout<<"\nGender :"<<gender;
        cout<<"\nChild/Adult :"<<adult_or_child;
        cout<<"\nSeat NO :"<<seat_NO<<endl;
    }

    string getTrainName()
    {
        return TrainName;
    }

    int getSeatNo()
    {
        return seat_NO;
    }
};

class Booking
{
    vector<Ticket>tickets;

    string train_name;
    int number_of_seat,book_cnt,fare_per_seat;
    string source;
    string dest;
    string date;
    string departureTime;
    string arrivalTime;


public:
    void get_train_info()
    {

        cout<<"\n\n\t\t\t\t\t\tBANGLADESH  RAILWAY"<<endl<<endl;

        fflush(stdin);
        cout<<"Number of Trains:";
        cin>>number_of_train;

        cout<<"\n\nEnter Train Information"<<endl;

        for(int i=0; i<number_of_train; i++)
        {
            cout<<"\nEnter "<<i+1<<" st number Train information\n";

            fflush(stdin);
            cout<<"\nEnter train name :";
            getline(cin,train_name);

            fflush(stdin);
            cout<<"Number_of_seat  :";
            cin>>number_of_seat;

            fflush(stdin);
            cout<<"Fare per seat :";
            cin>>fare_per_seat;

            fflush(stdin);
            cout<<"Source :";
            getline(cin,source);

            fflush(stdin);
            cout<<"Destination :";
            getline(cin,dest);

            fflush(stdin);
            cout<<"Date :";
            getline(cin,date);

            fflush(stdin);
            cout<<"Departure Time :";
            getline(cin,departureTime);

            fflush(stdin);
            cout<<"Arrival time :";
            getline(cin,arrivalTime);

            TrainReservation tr(train_name,number_of_seat,0,fare_per_seat,source,dest,date,departureTime,arrivalTime);



            trains.push_back(tr);

        }
    }
    void process()
    {
        int flag=1,tckt_cnt=0;
        int choice;
        int trainNo,TicketNoPosition=-1,SeatNo;

        do {
            cout<<"\n[1]: for booking"<<endl;//1
            cout<<"[2]: for cancellation"<<endl;//2
            cout<<"[0]: for close"<<endl;//3

            fflush(stdin);
            cout<<"\n\nEnter Your Choice :";
            cin>>choice;

            if (choice==0)
                break;
            else if (choice==1) // for booking ticket
            {
                tckt_cnt++;
                Ticket ob;
                ob.ticket(tckt_cnt);

                tickets.push_back(ob);
            }
            else if (choice==2)
            {
                string TN;
                cout<<"\n\nSelect a train"<<endl;
                for(int i=0; i<number_of_train; i++)
                {
                    cout<<"\n\n\nTrain No :"<<i+1<<"  ";
                    trains[i].printData();
                }

                do {
                    fflush(stdin);
                    cout<<"\n\nEnter Train No :";
                    cin>>trainNo;

                    if (trainNo>0&&trainNo<=number_of_train)
                    {
                        break;
                    }
                    else
                    {
                        cout<<"\n\n Enter Valid Train No \n";
                    }
                } while (trainNo<=0||trainNo>number_of_train);

                trainNo--;

                TN=trains[trainNo].getTrainName();

                fflush(stdin);
                cout<<"\n\nEnter Seat No :";
                cin>>SeatNo;

                for (int i = 0; i <tickets.size() ; ++i)
                {
                    if (TN==tickets[i].getTrainName()&&SeatNo==tickets[i].getSeatNo())
                    {
                        TicketNoPosition=i;
                        break;
                    }
                }

                if (TicketNoPosition!=-1)
                {
                    tickets.erase(tickets.begin()+TicketNoPosition);// cancelation
                    trains[trainNo].decrementBoookCount();
                    cout<<"\n\nYour Ticket Canceled"<<endl;
                }
                else
                    cout<<"\n\nNot Found\n";
            }
            else
                cout<<"\nEnter valid choice"<<endl;

        } while (choice!=0);

    }
};



int main()
{

    Booking ob;
    ob.get_train_info();
    ob.process();
    return 0;
}
*/