
#include<stdio.h>
main()
{

    int no;
  int ans;

    start:
        printf("enter a no :");
        scanf("%d",&no);

        if(no%2==0)
        {
            printf("Its is even no");
        }
        else
        {
            printf("Its is Odd");

        }

    printf("\nDo you wabt to Exit (2):");
    scanf("%d",&ans);
    if (ans==2)
    {
        goto start; // if enter n then this program is start
    }
}
