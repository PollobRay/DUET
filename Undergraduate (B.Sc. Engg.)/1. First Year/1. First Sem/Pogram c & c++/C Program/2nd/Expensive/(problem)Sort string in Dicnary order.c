#include<stdio.h>
#include<string.h>
main()
{

    int i,r,round;
    char str[5][10];
    printf("Enter 5 Name: ");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }
    for(round=1;round<=4;round++)
    {
        for(i=0;i<=4-round;i++)
        {

            r=strcmp(str[i],str[i+1]);
            if(r>0)
            {
                strcpy(str,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],str);
            }
        }
    }
    printf("\n String in Dictonary order:");
    for(i=0;i<4;i++)
    {
        puts(str[i]);
    }
}
