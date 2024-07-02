#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,t,digit,update=1,max;

    printf("Enter Maximum value of Pattern: ");
    scanf("%d",&n);

    t=2*n-1;
    digit=0;

    for(i=1;i<=t;i++)
    {
        max=i;
        for(j=1;j<=t;j++)
        {
            if(j<=abs(n-i)||t+n-i<j||n+i<=j)
                printf("%2s","-");//printf("%2s","");
            else
            {
                digit=digit+update;

                if(i>n)
                    max=t-i+1;

                if(digit>=max)
                    update=-1;

                printf("%2d",digit);
            }

        }
        digit=0;
        update=1;
        printf("\n");
    }
}

// 1st logic for n=3
/*
if((i%2!=0 && j%2!=0)||(i%2==0 && j%2==0))
                {
                    if(i==j&& i%2!=0)
                      printf("%2d",i);
                    else
                      printf("%2s","1");

                }
                else
                      printf("%2s","2");

 */
