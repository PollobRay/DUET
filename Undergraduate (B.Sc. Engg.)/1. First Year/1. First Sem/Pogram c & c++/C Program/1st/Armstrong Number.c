#include<stdio.h>
#include<math.h>
main()
{
   int no,copy,re,n=0,ans=0;
   printf("Enter a number :");
   scanf("%d",&no);
   copy=no;
   while(copy!=0)
   {
       copy=copy/10;
       n++;
   }
   copy=no;
   while(copy!=0)
   {
       re=copy%10;
       ans=ans+pow(re,n);
       copy=copy/10;
   }
   if(ans==no)
   {
       printf("\n\t%d is an Armostrong number",no);
   }
   else
    {
    printf("\n\t %d is an not Armostrong number",no);
   }
}
