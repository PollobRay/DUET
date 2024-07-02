#include<iostream>
using namespace std;
class ArrayADT
{
private:
    int capacity;
    int lastindex;
    int *ptr;
public:
    ArrayADT()
    {
        capacity=0;
        lastindex=-1;
        ptr=NULL;
    }
    void CreateArray(int capacity);
    void GetItem(int index);
    void SetItem(int index,int value);
    void EditItem(int index,int value);
    int CountItem();
    void RemoveItem(int index);
    int SearchItem(int value);
    void SortArray();
    friend ostream & operator<<(ostream &,ArrayADT);
    ~ArrayADT()
    {
        delete []ptr;
    }
    ArrayADT(ArrayADT &l)
    {
        capacity=l.capacity;
        lastindex=l.lastindex;
        ptr=new int[capacity];
        for(int i=0;i<=capacity;i++)
            ptr[i]=l.ptr[i];
    }
};
void ArrayADT::CreateArray(int capacity)
{
    this->capacity=capacity;
    lastindex=-1;
    ptr=new int[capacity];
}
int ArrayADT::GetItem(int index)
{
    if(lastindex==-1)
    {
        cout<<"\n List is empty";
        return(-1);
    }
    if(index>lastindex ||index<0)
    {
        cout<<"\n Invalid Index";
        return (-1);
    }
    return(ptr[index]);
}
void ArrayADT::SetItem(int index,int value)
{
    if(lastindex==capacity-1)
        cout<<"\n Overflow";
    else if(index>capacity-1||index<0)
    cout<<"\n Invalid index";
    else if(index<=lastindex)
    {
        lastindex++;
        i=lastindex;
        while(i!=index)
        {
            ptr[i]=ptr[i-1];
            i--;
        }
        ptr[index]=value;
    }
    else if(index==lastindex+1)
    {
        lastindex++;
        ptr[index]=value;
    }
}
void ArrayADT::EditItem(int index,int value)
{
    if(index<0 || index>lastindex)
        cout<<"\n Invalid index";
    else
        ptr[index]=value;
}
int ArrayADT::RemoveItem(int index)
{
    int i;
    if(index<0||index>lastindex)
        cout<<"\n Either invalid index an overflow";
    else if(index<lastindex)
    {
        i=index;
        while(i!=lastindex)
        {
            ptr[i]=ptr[i+1];
            i++;
        }
        lastindex--;
    }
    else if(index==lastindex)
        lastindex--;
}
int ArrayADT::SearchItem(int value)
{
    if(lastindex==-1)
    {
        cout<<"\n Last is empty";
        return(-1);
    }
    int i;
    for(i=0;i<=lastindex;i++)
    {
        if(ptr[i]==value)
            return(i);
    }
    return(-1);
}
void ArrayADT::SortArray()
{
    int r,i,t;
    for(r=1;r<CountItem();r++)
    {
        for(i=0;i<CountItem()-r;i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                t=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=t;
            }
        }
    }
}
ostream &operator<<(ostream &dout,ArrayADT l)
{
    if(l.lastindex==-1)
        cout<<"\n List is empty";
    for(int i=0;i<CountItem();i++)
        cout<<"   "<<l.GetItem(i);
    return(dout);
}
int main()
{
    ArrayADT l1;
    l1.CreateArray(5);
    l1.SetItem(0,10);
    l1.SetItem(1,20);
    l1.SetItem(2,30);
    l1.SetItem(3,40);
    cout<<l1;
    return 0;
}
