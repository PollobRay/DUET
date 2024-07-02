#include<stdio.h>
int main()
{
    int i,j,N;
    printf("Enter the pattern height: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                    printf("AA ");
                else
                    printf("BB ");
            }
            else
            {
                if(j%2==0)
                    printf("BB ");
                else
                    printf("AA ");
            }
        }
        printf("\n");
    }
}
