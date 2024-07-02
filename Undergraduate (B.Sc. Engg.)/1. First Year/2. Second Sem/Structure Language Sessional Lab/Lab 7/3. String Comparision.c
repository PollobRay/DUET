#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20],str2[20];
    char *p1, *p2;
    int i,l1,l2;
    p1=&str1;
    p2=&str2;

    printf("Enter First string: ");
    fgets(p1,19,stdin);
    printf("Enter second string: ");
    fgets(p2,19,stdin);

    l1=strlen(p1);
    l2=strlen(p2);
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            if(*p1!=*p2)
                break;

            p1++;
            p2++;

        }
        if(i==l1)
            printf("\nTwo string is equal");
        else
            printf("\nTwo string is not equal");
    }
    else
        printf("\nTwo string is not equal");


    return 0;
}
