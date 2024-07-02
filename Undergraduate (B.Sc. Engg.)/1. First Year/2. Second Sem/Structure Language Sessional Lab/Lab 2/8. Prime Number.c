#include<stdio.h>
int main()
{
    int i,j,N,p=0;
    printf("enter number N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=2;j<=sqrt(i);j++)
        {
                if(i%j==0)
                  {
                      p=0;
                      break;
                  }
                  p=1;
        }

        if(p)
            printf("\n%d",i);

        p=1;
    }
}
