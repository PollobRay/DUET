//
// Created by Ray on 1/5/2022.
//

/*
#include <iostream>
using namespace std;

class Queue
{
private:
    int queue[10];
    int front;
    int rear;
    int maxsize;
public:
    Queue():front(-1),rear(-1),maxsize(10){}
    void enQueue(int);
    int deQueue();
    bool isEmpty();
    bool isFull();
    int peek();
};
void Queue::enQueue(int item)
{
    if(isFull())
        cout<<"Overflow\n";
    else
    {
        if(front==-1)
            front=0;
        rear=rear+1;
        queue[rear]=item;
    }
}

int Queue::deQueue()
{
    if(isEmpty())
        cout<<"Underflow\n";
    else
    {
        int data;
        data= queue[front];
        front=front+1;
        if(front==rear+1)
            front=rear=-1;
        return data;
    }
    return -1;
}

bool Queue::isFull()
{
    if (rear==maxsize-1)
        return true;
    return false;
}

bool Queue::isEmpty()
{
    if(front==-1)
        return true;
    return false;
}

int Queue::peek()
{
    if(isEmpty())
        cout<<"Underflow\n";
    else
        return queue[front];
    return -1;

}

int main()
{
    int o;
    int data;

    Queue queue;
    do {
        cout<<"1 enQueue\n";
        cout<<"2 deQueue\n";
        cout<<"3 peek\n";
        cout<<"0 exit\n";
        cin>>o;

        switch(o)
        {
            case 1:
                cout<<"Item :";
                cin>>data;
                queue.enQueue(data);
                break;

            case 2:
                cout<<"Pop :"<<queue.deQueue()<<endl;
                break;
            case 3:
                cout<<"Peek :"<<queue.peek()<<endl;
                break;
            case 0:
                break;
        }
    }while(o!=0);

    return 0;
}*/
