#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter position(x,y): ");
    scanf("%d %d",&x,&y);

    if(x==0&&y==0)
    {
        printf("Origin");
    }
    if(y>0)
    {
        if(x>0)
        {
            printf("1st");
        }
        else if(x<0)
        {
            printf("2nd");
        }
        else if(x==0)
            printf("1st");
    }
    else if(y<0)
    {
        if(x<0)
            printf("3rd");
        else if(x>0)
            printf("4rd");
        else if(x==0)
            printf("3rd");
    }
    else if(y==0)
    {
        if(x>0)
            printf("1st");
        else if(x<0)
            printf("2nd");
    }
    return 0;
}
