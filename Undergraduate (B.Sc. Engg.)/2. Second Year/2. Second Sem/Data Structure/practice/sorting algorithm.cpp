//
// Created by Ray on 4/5/2022.
//

#include<iostream>
using namespace std;

void print(int ar[],int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int ar[], int n)
{
    for(int i=0;i<n-1;i++) {
        bool isSwapped=false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]);
                isSwapped=true;
            }
        }
        if(!isSwapped)
            break;
    }
}

void insertionSort(int ar[],int n)
{
    int pos;
    int value;

    for(int i=1;i<n;i++)
    {
        pos=i-1;
        value=ar[i];

        while(value<ar[pos] && pos>=0) {
            ar[pos + 1] = ar[pos];
            pos = pos - 1;
        }
        ar[pos+1]=value;
        cout<<endl<<i<<"st step \n";
        print(ar,n);
    }
}

void selectionSort(int ar[],int n)
{
    for (int i = 0; i < n-1; ++i)
    {
        int min=i;
        for (int j = i+1; j <=n-1 ; ++j)
        {
            if(ar[min]>ar[j])
                min=j;
        }
        if(min!=i)
            swap(ar[min],ar[i]);

        cout<<endl<<i<<"st step \n";
        print(ar,n);
    }
}

void merge(int ar[],int p,int q, int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1];
    int R[n2+1];

    for(int i=0;i<n1;i++)
        L[i]=ar[p+i];
    for (int i = 0; i < n2; ++i)
        R[i]=ar[q+i+1];

    int i=0;
    int j=0;
    int k=p;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            ar[k]=L[i];
            i++;
        }
        else
        {
            ar[k]=R[j];
            j++;
        }
        k++;

    }
    while(i<n1)
    {
        ar[k++]=L[i++];
    }
    while(j<n2)
    {
        ar[k++]=R[j++];
    }
}

void mergeSort(int ar[],int p,int r)
{
    if(p<r)
    {
        int q=p+(r-p)/2;
        mergeSort(ar,p,q);
        mergeSort(ar,q+1,r);
        merge(ar,p,q,r);
        //print(ar,r);
    }
}

int partition(int arr[],int p,int r)
{
    int x=arr[r];
    int i=p-1;
    for (int j = p; j <=r-1 ; ++j)
    {
        if (arr[j]<=x)
        {
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quickSort(int arr[],int p,int r)
{
    if (p<r)
    {
        int q= partition(arr,p,r);
        quickSort(arr,p,q-1);
        quickSort(arr,q+1,r);
    }
}
/*
int main()
{
    const int SIZE = 7;
    int ar[SIZE]={38,27,43,3,9,82,10};
    //print(ar,SIZE);
    //bubbleSort(ar,SIZE);
    //print(ar,SIZE);
    //insertionSort(ar,SIZE);
    //selectionSort(ar,SIZE);
    quickSort(ar,0,SIZE-1);
    print(ar,SIZE);
    return 0;
}
*/