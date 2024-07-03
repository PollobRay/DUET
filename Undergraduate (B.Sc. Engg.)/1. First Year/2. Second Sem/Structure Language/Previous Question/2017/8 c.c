//
// Created by Ray on 8/16/2021.
//
// before sort -----> after sort
#include <stdio.h>

void sort(int ar[],int len)
{
    int temp;
    for (int i = 0; i < len; ++i)
    {
        for (int j = 0; j <len-i-1 ; ++j)
        {
            if (ar[j]>ar[j+1])
            {
                temp=ar[j+1];
                ar[j+1]=ar[j];
                ar[j]=temp;
            }

        }
    }
}
/*
int main()
{
    int n;
    int arr[50],len=0;
    FILE *fp1,*fp2;

    fp1=fopen("beforesort.txt","w");
    while (scanf("%d",&n)&&n!=0)
    {
        putw(n,fp1);
    }
    fclose(fp1);

    fp1=fopen("beforesort.txt","r");
    fp2=fopen("aftersort.txt","w");

    while ((n=getw(fp1))!=EOF)
    {

        arr[len++]=n;
    }
    sort(arr,len);
    for (int i = 0; i <len ; ++i)
    {
        putw(arr[i],fp2);
    }
    fclose(fp1);
    fclose(fp2);

    fp2=fopen("aftersort.txt","r");
    while ((n=getw(fp2))!=EOF)
    {
        printf("%d ",n);
    }
    fclose(fp2);

    return 0;
}
*/