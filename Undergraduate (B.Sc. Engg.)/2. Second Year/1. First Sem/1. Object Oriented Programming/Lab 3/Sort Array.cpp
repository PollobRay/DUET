//
// Created by pollo on 3/23/2021.
//
/*
#include <iostream>
using namespace std;

class Sort
{
private:
    int size;

public :
    Sort(int arraySize)
    {
        size=arraySize;
    }

    void sortValue(int arr[]);
    void sortValue(long arr[]);
    void sortValue(double arr[]);
    void sortValue(char arr[]);
    void printValues(int arr[]);
    void printValues(long arr[]);
    void printValues(double arr[]);
    void printValues(char arr[]);

};

void Sort::sortValue(int arr[])
{
    int temp;
    for(int i=0;i<=size-1;i++)
    {
        for (int j = size - 1; j >= i + 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void Sort::sortValue(long arr[])
{
    long temp;
    for(int i=0;i<=size-1;i++)
    {
        for (int j = size - 1; j >= i + 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void Sort::sortValue(double arr[])
{
    double temp;
    for(int i=0;i<=size-1;i++)
    {
        for (int j = size - 1; j >= i + 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void Sort::sortValue(char arr[])
{
    char temp;
    for(int i=0;i<=size-1;i++)
    {
        for (int j = size - 1; j >= i + 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void Sort::printValues(int arr[])
{
    for (int i = 0; i <size ; ++i)
    {
        cout<<arr[i]<<" ";
        if(i==size-1)
            cout<<endl;
    }
}

void Sort::printValues(long arr[])
{
    for (int i = 0; i <size ; ++i)
    {
        cout<<arr[i]<<" ";
        if(i==size-1)
            cout<<endl;
    }
}

void Sort::printValues(double arr[])
{
    for (int i = 0; i <size ; ++i)
    {
        cout<<arr[i]<<" ";
        if(i==size-1)
            cout<<endl;
    }
}

void Sort::printValues(char arr[])
{
    for (int i = 0; i <size ; ++i)
    {
        cout<<arr[i]<<" ";
        if(i==size-1)
            cout<<endl;
    }
}

int main()
{
    Sort sort(4);// we sort array of length 4

    int value1[]={10,9,20,5};
    long value2[]={100,500,200,50};
    double value3[]={55.5,100.5,20.5,10.1};
    char value4[]={'z','x','a','b'};

    cout<<"Sort interger values"<<endl;
    cout<<"Before sort"<<endl;
    sort.printValues(value1);
    sort.sortValue(value1);
    cout<<"After sort"<<endl;
    sort.printValues(value1);
    cout<<endl;


    cout<<"Sort long values"<<endl;
    cout<<"Before sort"<<endl;
    sort.printValues(value2);
    sort.sortValue(value2);
    cout<<"After sort"<<endl;
    sort.printValues(value2);
    cout<<endl;

    cout<<"Sort double values"<<endl;
    cout<<"Before sort"<<endl;
    sort.printValues(value3);
    sort.sortValue(value3);
    cout<<"After sort"<<endl;
    sort.printValues(value3);
    cout<<endl;

    cout<<"Sort character values"<<endl;
    cout<<"Before sort"<<endl;
    sort.printValues(value4);
    sort.sortValue(value4);
    cout<<"After sort"<<endl;
    sort.printValues(value4);
    cout<<endl;

    return 0;
}
*/