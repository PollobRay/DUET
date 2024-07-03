//
// Created by Ray on 12/13/2021.
//

/*
#include <iostream>
using namespace std;

void sort(int [],int);
void sort(float [],int);
void sort(char [][100],int);
void print(int[],int);
void print(float[],int);
void print(char[][100],int);

void sort(int arr[],int n)
{
    int minPosition;
    for (int i = 0; i < n; ++i)
    {
        minPosition=i;
        for (int j = i+1; j <n; ++j)
        {
            if(arr[minPosition]>arr[j])
            {
                minPosition=j;
            }
        }
        if(minPosition!=i)
        {
            //swap arr[minPosition],arr[i]
            int temp=arr[minPosition];
            arr[minPosition]=arr[i];
            arr[i]=temp;
        }
    }
}

void sort(float arr[],int n)
{
    int minPosition;
    for (int i = 0; i < n; ++i)
    {
        minPosition=i;
        for (int j = i+1; j <n; ++j)
        {
            if(arr[minPosition]>arr[j])
            {
                minPosition=j;
            }
        }
        if(minPosition!=i)
        {
            //swap arr[minPosition],arr[i];
            float temp=arr[minPosition];
            arr[minPosition]=arr[i];
            arr[i]=temp;
        }
    }
}

void sort(char arr[][100],int n)
{
    int minPosition;
    for (int i = 0; i < n; ++i)
    {
        minPosition=i; // assume min value at i'th  position
        for (int j = i+1; j <n; ++j)
        {
            for (int k = 0; arr[minPosition][k]!='\0'&& arr[j][k]!='\0'; ++k) // compare two string
            {
                if (arr[minPosition][k]>arr[j][k]) // second string is small
                {
                    minPosition=j;
                    break;
                }
                else if(arr[minPosition][k]<arr[j][k]) // first string is small and no need to sort
                {
                    break;
                }
                if(arr[minPosition][k+1]!='\0'&&arr[j][k+1]=='\0') // if second string is small
                {
                    minPosition=j;
                }
            }
        }
        if(minPosition!=i)
        {
            //swap arr[minPosition],arr[i];
            char str[100];
            int j;
            for (j = 0; arr[minPosition][j]!='\0'; ++j)
            {
                str[j]=arr[minPosition][j];
            }
            str[j]='\0';
            for (j = 0; arr[i][j]!='\0'; ++j)
            {
                arr[minPosition][j]=arr[i][j];
            }
            arr[minPosition][j]='\0';
            for (j = 0; str[j]!='\0'; ++j)
            {
                arr[i][j]=str[j];
            }
            arr[i][j]='\0';
        }
    }
}

void print(int arr[],int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print(float arr[],int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print(char arr[][100],int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

int main()
{
   int size;
   const int MAX_SIZE=1000;
   int choice;
   int iarr[MAX_SIZE];
   float farr[MAX_SIZE];
   char sarr[MAX_SIZE][100];

   do{
       cout<<endl;
       cout<<"[1]: Sort Integer"<<endl;
       cout<<"[2]: Sort Float"<<endl;
       cout<<"[3]: Sort String"<<endl;
       cout<<"[0]: exit"<<endl;
       cout<<"Choice: ";
       cin>>choice;

       switch (choice)
       {
           case 1:
           {
               cout<<endl;
               cout<<"Enter number of integer to sort: ";
               cin>>size;
               if (size>=MAX_SIZE)
               {
                   cout<<"The amount of data too large"<<endl;
                   break;
               }
               cout<<"Enter "<<size<<" Integers"<<endl;

               for (int i = 0; i < size; ++i)
               {
                   cin>>iarr[i];
               }
               cout<<"Before sort"<<endl;
               print(iarr,size);
               sort(iarr,size);
               cout<<"After sort"<<endl;
               print(iarr,size);

               break;
           }
           case 2:
           {
               cout<<endl;
               cout<<"Enter number of Float to sort: ";
               cin>>size;
               if (size>=MAX_SIZE)
               {
                   cout<<"The amount of data too large"<<endl;
                   break;
               }
               cout<<"Enter "<<size<<" Float"<<endl;

               for (int i = 0; i < size; ++i)
               {
                   cin>>farr[i];
               }
               cout<<"Before sort"<<endl;
               print(farr,size);
               sort(farr,size);
               cout<<"After sort"<<endl;
               print(farr,size);

               break;
           }
           case 3:
           {
               cout<<endl;
               cout<<"Enter number of String to sort: ";
               cin>>size;
               fflush(stdin); //flush input
               if (size>=MAX_SIZE)
               {
                   cout<<"The amount of data too large"<<endl;
                   break;
               }
               cout<<"Enter "<<size<<" String"<<endl;

               for (int i = 0; i < size; ++i)
               {
                   cin.getline(sarr[i],100);
               }
               cout<<"Before sort"<<endl;
               print(sarr,size);
               sort(sarr,size);
               cout<<"After sort"<<endl;
               print(sarr,size);

               break;
           }
           case 0:
           {
               cout<<endl<<"Exiting Program....."<<endl;
               break;
           }
           default:
           {
               cout<<endl<<"Enter valid Choice"<<endl;
           }
       }
   }while(choice!=0);

    return 0;
}
*/
