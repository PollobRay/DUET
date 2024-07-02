#include<iostream>
using namespace std;
class twowaystack
{
private:
    int capacity,top_left,top_right,*ptr;
public:
    twowaystack(int cap)
    {
        capacity=cap;
        top_left=-1;
        top_right=capacity;
        ptr=new int[capacity];
    }
    void pushleft(int val);
    void pushright(int val);
    int popleft();
    int popright();
    int peekleft();
    int peeklright();
    int isemptyleft();
    int isemptyright();
    int isfull();
    ~twowaystack()
    {
        delete[]ptr;
    }

};
int twowaystack::isfull()
{
    if(top_left+1==top_right)
        return (1);
    else
        return 0;
}
int twowaystack::isemptyright()
{
    if(top_right==capacity)
        return(1);
    else
        return 0;
}
int twowaystack::isemptyleft()
{
    if(top_left==-1)
        return(1);
    else
        return 0;
}
int twowaystack::peeklright()
{
    if(isemptyright())
    {
        cout<<"\n stack is empty";
        return (-1);
    }
    else
        return(ptr[top_right]);

}
int twowaystack::peekleft()
{
    if(isemptyleft())
    {
        cout<<"\n stack is empty";
        return(-1);
    }
    else
        return(ptr[top_left]);
}
int twowaystack::popright()
{
    int val;
    if(isemptyright())
    {
        cout<<"\n stack underflow";
        return(-1);

    }
    else
    {
           val=ptr[top_right];
    top_right++;
    return (val);
    }


}
int twowaystack::popleft()
{
    int val;
    if(isemptyleft())
    {
        cout<<"\n stack underflow";
        return(-1);
    }
    else
    {
        val=ptr[top_left];
        top_left--;
        return(val);
    }
}
void twowaystack::pushright(int val)
{
    if(isfull())
    {
        cout<<"\n stack overflow";
    }
    else
    {
        top_right--;
        ptr[top_right]=val;
    }
}
void twowaystack::pushleft(int val)
{
    if(isfull())
    {
        cout<<"\n stack overflow";
    }
    else
    {
        top_left++;
        ptr[top_left]=val;
    }
}
int main()
{
    twowaystack s(11);
    s.pushright(50);
    s.pushleft(10);
    s.pushleft(20);
    s.pushleft(30);
    s.pushright(40);
    cout<<"\n peek from stack 1"<<s.peekleft();
    cout<<"\n peek from stack 2"<<s.peeklright();
    return 0;
}
