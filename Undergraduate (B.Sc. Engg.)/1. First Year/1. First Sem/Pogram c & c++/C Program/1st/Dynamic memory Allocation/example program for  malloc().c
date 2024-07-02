#include<stdio.h>
#include<stdlib.h>
main()
{
int n,*ptr,sum=0,i,*p;
printf("Enter the size of array:");
scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));
p=ptr;
printf("\nenter element of array:");
for(i=1;i<n;i++)
{
    scanf("%d",ptr);
    sum=sum+ *ptr;
    ptr++;
}
printf("\nArray elsement is:");
for(i=1;i<n;i++)
{
    printf("\n%d",*p);
    p++;
}
if(ptr==NULL)
{
    printf("\nError out of array");
}
printf("\nAddition is %d",sum);
}
