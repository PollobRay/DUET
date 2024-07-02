#include<stdio.h>
int greater1(int,int);
void disp(void);
main()
{
    disp();

}
int greater1(int x,int y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
void disp(void)
{
    int a,b,ans;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("\nEnter a second number :");
    scanf("%d",&b);
    ans=greater1(a,b);
    printf("The Greater Value Is: %d",ans);
    }
