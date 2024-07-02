#include<stdio.h>
 void show(int ar[],int length)
 {
     static int i=0;
     if(i>=length)
        return;
     else
     {
         printf("%d ",ar[i++]);
         show(ar,length);
     }
 }
int main()
{
    int ar[]={1,2,5,7,8,6,9,10};
    show(ar,8);
}
