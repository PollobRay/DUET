#include<stdio.h>
main()
{
    int loop,c,num,no,space;
    printf("Enter a number :");
    scanf("%d",&no);
    space=no;
    for(loop=1;loop<=no;loop++)
    {
        num=loop;
        for(c=1;c<=space;c++)
        {
            printf(" ");
        }
        space--;
        for(c=1;c<=loop;c++)
        {
            printf("%d ",num);
        }
        num++;
        num--;
        num--;
        for(c=1;c<loop;c++)
        {
            printf("%d ",num);
            num--;
        }

        printf("\n");
    }

}
