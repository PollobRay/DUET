#include<stdio.h>

int main()
{
    FILE *f,*f1;
    int i,j,temp;
    int arr[200],n=0;
    f=fopen("beforesort.txt","r");
    f1=fopen("aftersort.txt.","w");

    while((i=getw(f))!=EOF)
    {

          arr[n++]=i;
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        putw(arr[i],f1);
    }

    fclose(f);
    fclose(f1);


    return 0;
}
