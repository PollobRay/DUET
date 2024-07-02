#include<stdio.h>
int getmaxindex(int a[],int size);
void sort(int a[],int size);
main()
{
    int a[]={100,90,80,70,60,50,40,30,20,10};
    int i,size=10;
    sort(a,size);
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}
void sort(int a[],int size)
{
    int maxindex,t;
    if(size>1)
    {
        t=a[size-1];
        maxindex=getmaxindex(a,size);
        a[size-1]=a[maxindex];
        a[maxindex]=t;
        sort(a,size-1);
    }
}
int getmaxindex(int a[],int size)
{
    int max,maxindex,i;
    maxindex=0;
    for(i=1;i<size;i++)
    {


        if(max<a[i])
    {
        max=a[i];
        maxindex=i;
    }
    }
    return (maxindex);

}
