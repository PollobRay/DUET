//
// Created by Ray on 12/12/2021.
//
/*
#include <iostream>
using namespace std;

void selectionSort(int arr[],int size)
{
    int minPosition;
    for (int i = 0; i < size; ++i)
    {
        minPosition=i;
        for (int j = i+1; j <size ; ++j)
        {
            if(arr[minPosition]>arr[j])
            {
                minPosition=j;
            }
        }
        if(minPosition!=i)
            swap(arr[minPosition],arr[i]);
    }


}
int main()
{
    int arr[10]={8,2,5,6,3,4,1,9,7,4};

    for (int i : arr)
    {
        cout<<i<<" ";
    }
    selectionSort(arr,10);
    cout<<endl;
    for (int i : arr)
    {
        cout<<i<<" ";
    }

    return 0;
}
*/