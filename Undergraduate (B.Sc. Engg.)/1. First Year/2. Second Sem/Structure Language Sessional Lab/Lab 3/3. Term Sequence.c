#include<stdio.h>
int main()
{
    int n,term=1,longterm=0,longn=0,i,j;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n<0)
        printf("the number is not positive");
    else
    {
      for(i=1;i<=n;i++)
      {
          j=i;
        while(j!=1)
        {
            if(j%2==0)
            {
                j=j/2;
            }
            else
            {
                j=3*j+1;
            }
            term++;
        }
        if(longterm<term)
        {
            longterm=term;
            longn=i;
        }

        term=1;
    }
    }
    printf("\nmaximum %d sequences for number %d",longterm,longn);
    return 0;
}
