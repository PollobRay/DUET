//
// Created by Ray on 12/5/2021.
//

#include <iostream>
using namespace std;
/*
int search(int arr[],int l,int h,int d)
{
    int mid=l+(h-l)/2;

    if (l<h)
    {
        if (arr[mid]==d)
            return mid;
        else if(arr[mid]>d)
            return search(arr,l,mid-1,d);
        else if (arr[mid]<d)
            return search(arr,mid+1,h,d);
    }


    return -1;
}

int search(int arr[],int l,int h,int d)
{
    int mid;
    while(l<h)
    {
        mid=l+(h-l)/2;
        if (arr[mid]==d)
            return mid;
        else if (arr[mid]<d)
            l=mid+1;
        else
            h=mid-1;
    }

    return -1;
}
int main()
{
    int arr[]={10,20,30,40,45,50,55,60,66,70,80,90,100};

    cout<<search(arr,0,12,70);

    return 0;
}
 */