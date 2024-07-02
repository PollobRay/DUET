#include<stdio.h>
main()
{

    int sub[5],i,total=0;
    printf("Enter five Number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&sub[i]);
        total=total+sub[i];
    }
    printf("Array element is:");
    for(i=0;i<5;i++)
    {
        printf("\t%d",sub[i]);
    }
    printf("\nsummation of this Array: %d",total);
}
