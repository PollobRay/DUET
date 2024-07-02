#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    char *p1, *p2;
    int i,len2,start=-1,k;

    p1=str1;
    p2=str2;

    printf("Enter string: ");
    fgets(str1,99,stdin);

    printf("Enter word :");
    fgets(str2,99,stdin);

    // find length of word
    for(i=0;*(p2+i)!='\0';i++);
    len2=i;
    len2--; // because of last null character

    for(i=0,k=0;*(p1+i)!='\0';i++)
    {
        if(*(p1+i)==*(p2+k))
        {
            if(k==0)
            {
                start=i;
            }
            k++;
        }

        if(start+k==i+1)
        {
            if(k==len2)
            {
                break;
            }
        }
        else
        {
            k=0;
            start=-1;
        }

    }

    printf("\nword is found at index: %d",start);
    return 0;
}




