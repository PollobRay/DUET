#include<stdio.h>
main()
{

  int ar1[5],ar2[5],ar3[5],i;
  printf("Enter values of 1st Array\n");
  for(i=0;i<5;i++)
  {
      scanf("%d",&ar1[i]);
  }
    printf("Enter values of 2nd Array\n");
  for(i=0;i<5;i++)
  {
      scanf("%d",&ar2[i]);
  }
  for(i=0;i<5;i++)
  {
      ar3[i]=ar1[i]+ar2[i];
  }
  printf("Addition of two array\n");
  for(i=0;i<5;i++)
  {
      printf("\t%d",ar3[i]);
  }
}
