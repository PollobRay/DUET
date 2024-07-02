#include<stdio.h>
main()
{
    int arr1[5]={2,1,7,5,3},arr2[5]={15,11,12,16,10},arr3[10],i,j,k=0,temp;
   for(i=0;i<10;i++)
   {
       if(i>4)
       {
           arr3[i]=arr2[k];
           k++;
       }
       arr3[i]=arr1[i];
   }
   printf("elements are :\n");
   for(i=0;i<9;i++)
   {
       printf("%d\t",arr3[i]);

   }
   for(i=0;i<9;i++)
   {
       for(j=i+1;j<10;j++)
       {
           if (arr3[j]<arr3[i])
           {
               temp=arr3[i];
               arr3[i]=arr3[j];
               arr3[j]=temp;

           }
       }
   }
   printf("\nSorted Element are :\n");
   for(i=0;i<9;i++)
   {
       printf("\t%d",arr3[i]);

   }
}
