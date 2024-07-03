//
// Created by Ray on 1/5/2022.
//

#include<iostream>
using namespace std;
/*
class Stack{
private :
    int stack[10];
    int max_size=10;
    int top=-1;
public:
    int peek();
    bool isFull();
    bool isEmpty();
    void push(int);
    int pop();
};

int Stack::peek()
{
    if(!isEmpty())
        return stack[top];
    return -1;
}

bool Stack::isFull()
{
    if(top==max_size-1)
        return true;
    return false;
}

bool Stack::isEmpty()
{
    if(top==-1)
        return true;
    return false;
}

void Stack::push(int item)
{
    if(isFull())
        cout<<"Overflow\n";
    else
    {
        top=top+1;
        stack[top]=item;
    }
}

int Stack::pop()
{
    if(isEmpty())
        cout<<"Underflow\n";
    else
    {
        return stack[top--];
    }
    return -1;
}

int main()
{
    int o;
    int data;

    Stack stack;
    do {
        cout<<"1 push\n";
        cout<<"2 pop\n";
        cout<<"3 peek\n";
        cout<<"0 exit\n";
        cin>>o;

        switch(o)
        {
            case 1:
              cout<<"Item :";
              cin>>data;
              stack.push(data);
              break;

            case 2:
                cout<<"Pop :"<<stack.pop()<<endl;
                break;
            case 3:
                cout<<"Peek :"<<stack.peek()<<endl;
                break;
            case 0:
                break;
        }
    }while(o!=0);

    return 0;
}
*/