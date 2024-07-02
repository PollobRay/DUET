#include<iostream>
using namespace std;

template <class x>class ArrayList
{
private:
    struct ControlBlock
    {
        int capacity;
        x *arr_ptr;
    };
    ControlBlock *s;
public:
    ArrayList(int capacity)
    {
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new x(s->capacity);
    }
    void addElement(int index,x data)
    {
        if(index>=0 && index<=s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"\n Array index is not void";
    }
    void viewElement(int index,x &data)
    {
        if(index>=0 && index<=s->capacity-1)
            data=s->arr_ptr[index];
        else
            cout<<"\n Index is not valid";
    }
    void viewList()
    {
        int i;
        cout<<"\n";
        for(i=0;i<s->capacity-1;i++)
            cout<<"  "<<s->arr_ptr[i];
    }
};
int main()
{
    int data;
    ArrayList<int>list1(4);
    list1.addElement(0,32);
    list1.addElement(1,41);
    list1.addElement(2,55);
    list1.viewList();
    return 0;
}
