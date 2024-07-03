//
// Created by Ray on 6/28/2022.
//

#include<iostream>
#include<algorithm>
#include <time.h>
#include<iomanip>
#include <chrono>
#include <fstream>
using namespace std;
using namespace std::chrono;

/*
void SelectionSort(int A[],int n)// A is an array of size n
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;

        for(int j=i+1;j<n;j++)
        {

            if(A[j]<A[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            // swap
            int temp=A[min];
            A[min]=A[i];
            A[i]=temp;
        }

    }

}
int Partition(int[],int,int);

void QuickSort(int A[],int low,int high)
{

    if(low<high)
    {
        int pi=Partition(A,low,high);
        QuickSort(A,low,pi-1);
        QuickSort(A,pi+1,high);

    }
}

int Partition(int A[],int low,int high)
{
    int pivot=A[high];
    int i=low-1;

    for(int j=low;j<=high-1;j++)
    {

        if(A[j]<pivot)
        {

            i++;
            //swap
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    //swap
    int temp=A[i+1];
    A[i+1]=A[high];
    A[high]=temp;

    return i+1;
}

int main()
{
    //time_t start,end;
    double time_taken1,time_taken2;
    const int lim1=1000, lim2=10000, lim3=20000, lim4=30000, lim5=40000, lim6=50000;
    int ar1[lim1], ar2[lim2],ar3[lim3], ar4[lim4],ar5[lim5], ar6[lim6];
    int arr[lim6];// for copy
    time_t start1,end1,start2,end2;
    double duration1,duration2;
    ofstream out;
    ifstream in;
    //Generate data

    //set 1 1000
    for(int i=1;i<=lim1;i++ )
    {
        ar1[i-1]=i;
    }
    random_shuffle(ar1, ar1+lim1);
    out.open("1.txt");
    for (int i = 0; i <lim1 ; ++i)
    {
        out<<ar1[i]<<" ";
    }
    out.close();

    //set 2 10000
    for(int i=1;i<=lim2;i++ )
    {
        ar2[i-1]=i;
    }
    random_shuffle(ar2, ar2+lim2);
    out.open("2.txt");
    for (int i = 0; i <lim2 ; ++i)
    {
        out<<ar2[i]<<" ";
    }
    out.close();
    //set 3 20000
    for(int i=1;i<=lim3;i++ )
    {
        ar3[i-1]=i;
    }
    random_shuffle(ar3, ar3+lim3);
    out.open("3.txt");
    for (int i = 0; i <lim3 ; ++i)
    {
        out<<ar3[i]<<" ";
    }
    out.close();
    //set 4 30000
    for(int i=1;i<=lim4;i++ )
    {
        ar4[i-1]=i;
    }
    random_shuffle(ar4, ar4+lim4);
    out.open("4.txt");
    for (int i = 0; i <lim4 ; ++i)
    {
        out<<ar4[i]<<" ";
    }
    out.close();
    //set 1 40000
    for(int i=1;i<=lim5;i++ )
    {
        ar5[i-1]=i;
    }
    random_shuffle(ar5, ar5+lim5);
    out.open("5.txt");
    for (int i = 0; i <lim5 ; ++i)
    {
        out<<ar5[i]<<" ";
    }
    out.close();
    //set 1 50000
    for(int i=1;i<=lim6;i++ )
    {
        ar6[i-1]=i;
    }
    random_shuffle(ar6, ar6+lim6);

    out.open("6.txt");
    for (int i = 0; i <lim6 ; ++i)
    {
        out<<ar6[i]<<" ";
    }
    out.close();
    cout<<setw(10)<<"Data"<<setw(20)<<"Selection sort"<<setw(20)<<"Quick sort"<<endl;
    //measuring time

    //set 1
    //copy(ar1,ar1+lim1,arr);
    in.open("1.txt");
    for (int i = 0; i <lim1 ; ++i)
    {
        in>>arr[i];
    }
    in.close();

    auto start11 = high_resolution_clock::now();
    SelectionSort(arr,lim1);
    auto stop11 = high_resolution_clock::now();
    auto duration11 = duration_cast<milliseconds>(stop11 - start11);

    in.open("1.txt");
    for (int i = 0; i <lim1 ; ++i)
    {
        in>>arr[i];
    }
    in.close();

    auto start12 = high_resolution_clock::now();
    QuickSort(arr,0,lim1-1);
    auto stop12 = high_resolution_clock::now();
    auto duration12 = duration_cast<milliseconds>(stop12 - start12);

    cout<<setw(10)<<lim1<<setw(15)<<setprecision(5)<<duration11.count()/1000.0<<setw(23)<<duration12.count()/1000.0<<endl;

    //set 2

    in.open("2.txt");
    for (int i = 0; i <lim2 ; ++i)
    {
        in>>arr[i];
    }
    in.close();

    auto start21 = high_resolution_clock::now();
    SelectionSort(arr,lim2);
    auto stop21 = high_resolution_clock::now();
    auto duration21 = duration_cast<milliseconds>(stop21 - start21);

    in.open("2.txt");
    for (int i = 0; i <lim2 ; ++i)
    {
        in>>arr[i];
    }
    in.close();

    auto start22 = high_resolution_clock::now();
    QuickSort(arr,0,lim2-1);
    auto stop22 = high_resolution_clock::now();
    auto duration22 = duration_cast<milliseconds>(stop22 - start22);

    cout<<setw(10)<<lim2<<setw(15)<<setprecision(5)<<fixed<<duration12.count()/1000.0<<setw(23)<<duration22.count()/1000.0<<endl;

    //set 3
    in.open("3.txt");
    for (int i = 0; i <lim3 ; ++i)
    {
        in>>arr[i];
    }
    in.close();

    auto start31 = high_resolution_clock::now();
    SelectionSort(arr,lim3);
    auto stop31 = high_resolution_clock::now();
    auto duration31 = duration_cast<milliseconds>(stop31 - start31);

    in.open("3.txt");
    for (int i = 0; i <lim3 ; ++i)
    {
        in>>arr[i];
    }
    in.close();

    auto start32 = high_resolution_clock::now();
    QuickSort(arr,0,lim3-1);
    auto stop32 = high_resolution_clock::now();
    auto duration32 = duration_cast<milliseconds>(stop32 - start32);

    cout<<setw(10)<<lim3<<setw(15)<<setprecision(5)<<fixed<<duration31.count()/1000.0<<setw(23)<<duration32.count()/1000.0<<endl;

    //set 4

    in.open("4.txt");
    for (int i = 0; i <lim4 ; ++i)
    {
        in>>arr[i];
    }
    in.close();

    auto start41 = high_resolution_clock::now();
    SelectionSort(arr,lim4);
    auto stop41 = high_resolution_clock::now();
    auto duration41 = duration_cast<milliseconds>(stop41 - start41);
    in.open("4.txt");
    for (int i = 0; i <lim4 ; ++i)
    {
        in>>arr[i];
    }
    in.close();
    auto start42 = high_resolution_clock::now();
    QuickSort(arr,0,lim4-1);
    auto stop42 = high_resolution_clock::now();
    auto duration42 = duration_cast<milliseconds>(stop42 - start42);

    cout<<setw(10)<<lim4<<setw(15)<<setprecision(5)<<fixed<<duration41.count()/1000.0<<setw(23)<<duration42.count()/1000.0<<endl;


    //set 5
    in.open("5.txt");
    for (int i = 0; i <lim5 ; ++i)
    {
        in>>arr[i];
    }
    in.close();

    auto start51 = high_resolution_clock::now();
    SelectionSort(arr,lim5);
    auto stop51 = high_resolution_clock::now();
    auto duration51 = duration_cast<milliseconds>(stop51 - start51);
    in.open("5.txt");
    for (int i = 0; i <lim5; ++i)
    {
        in>>arr[i];
    }
    in.close();
    auto start52 = high_resolution_clock::now();
    QuickSort(arr,0,lim5-1);
    auto stop52 = high_resolution_clock::now();
    auto duration52 = duration_cast<milliseconds>(stop52 - start52);

    cout<<setw(10)<<lim5<<setw(15)<<setprecision(5)<<fixed<<duration51.count()/1000.0<<setw(23)<<duration52.count()/1000.0<<endl;


    //set 6

    in.open("6.txt");
    for (int i = 0; i <lim6; ++i)
    {
        in>>arr[i];
    }
    in.close();

    auto start61 = high_resolution_clock::now();
    SelectionSort(arr,lim6);
    auto stop61 = high_resolution_clock::now();
    auto duration61 = duration_cast<milliseconds>(stop61 - start61);

    in.open("6.txt");
    for (int i = 0; i <lim6; ++i)
    {
        in>>arr[i];
    }
    in.close();
    auto start62 = high_resolution_clock::now();
    QuickSort(arr,0,lim6-1);
    auto stop62 = high_resolution_clock::now();
    auto duration62 = duration_cast<milliseconds>(stop62 - start62);
    cout<<setw(10)<<lim6<<setw(15)<<setprecision(5)<<fixed<<duration61.count()/1000.0<<setw(23)<<duration62.count()/1000.0<<endl;
    return 0;
}
*/