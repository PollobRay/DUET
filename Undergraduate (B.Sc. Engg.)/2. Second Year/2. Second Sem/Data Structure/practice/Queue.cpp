//
// Created by Ray on 4/3/2022.
//

#include <iostream>
using namespace std;

class Queue
{
private:
    const static int MAX_SIZE=5;
    int values[MAX_SIZE];
    int rear=-1;
    int front=-1;
public:
    bool isFull()
    {
        if(rear==MAX_SIZE-1)
            return true;
        return false;
    }
    bool isEmpty()
    {
        if(front==-1)
            return true;
        return false;
    }
    int peek()
    {
        if(isEmpty())
            return -1;
        return values[front];
    }
    int pop()
    {
        if(isEmpty())
            return -1;
        int data = values[front];
        front++;
        if(front>rear)
        {
            front==-1;
            rear=-1;
        }
        return data;
    }
    void push(int v)
    {
        if(isFull())
        {
            cout<<"Overflow\n";
            return;
        }
        if(front==-1)
            front=0;
        rear++;
        values[rear]=v;
    }
};
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        prev=NULL;
        next=NULL;
    }
};
class LinkedQueue
{
private:
    Node *front;
    Node *rear;
public:
    LinkedQueue()
    {
        front=NULL;
        rear=NULL;
    }
    bool isEmpty()
    {
        if(front==NULL)
            return true;
        return false;
    }
    void enqueue(int value)
    {
        Node *newV=new Node();
        newV->data=value;

        if (isEmpty())
        {
            front=newV;
        }
        else
            rear->next=newV;

        newV->prev=rear;
        rear=newV;

    }
    int peek()
    {
        if(isEmpty())
        {
            cout<<"Underflow \n";
            return -1;
        }
        return front->data;
    }
    int dequeue()
    {
        int data;
        if(isEmpty())
        {
            cout<<"Underflow \n";
            return -1;
        }
        data=front->data;
        front->prev=NULL;
        front=front->next;


        return data;

    }

};

class CircularQueue
{
private:
    const static int MAX_SIZE=5;
    int values[MAX_SIZE];
    int rear=-1;
    int front=-1;
public:
    bool isFull()
    {
        if((front==0 && rear==MAX_SIZE-1)||(front==rear+1))
            return true;
        return false;
    }
    bool isEmpty()
    {
        if(front==-1)
            return true;
        return false;
    }
    int peek()
    {
        if(isEmpty())
            return -1;
        return values[front];
    }
    int dequeue()
    {
        if(isEmpty())
        {
            cout<<"UnderFlow\n";
            return -1;
        }
        int data = values[front];

        if(front==rear)
        {
            front==-1;
            rear=-1;
        }
        front=(front+1)%MAX_SIZE;
        return data;
    }
    void enqueue(int v)
    {
        if(isFull())
        {
            cout<<"Overflow\n";
            return;
        }
        if(front==-1)
            front=0;
        rear=(rear+1)%MAX_SIZE;
        values[rear]=v;
    }
};
/*
int main()
{
    CircularQueue q;
    q.enqueue(10);
   // cout<<q.peek()<<endl;
    q.enqueue(20);
    //cout<<q.peek()<<endl;
    q.enqueue(30);
   // cout<<q.peek()<<endl;
    q.enqueue(40);
    //cout<<q.peek()<<endl;
    q.enqueue(50);
    //cout<<q.peek()<<endl;
    q.enqueue(60);
    //cout<<q.peek()<<endl;
    q.enqueue(10);
    //cout<<q.peek()<<endl;
    cout<<q.dequeue()<<endl;
    q.enqueue(100);
    q.enqueue(200);
    cout<<q.dequeue()<<endl;
    q.enqueue(300);
    cout<<q.peek()<<endl;


    return 0;
}
 */