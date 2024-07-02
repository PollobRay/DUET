
#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    int i,len2,start=-1,k;

    printf("Enter string: ");
    fgets(str1,99,stdin);

    printf("Enter word :");
    fgets(str2,99,stdin);

    // find length of word
    for(i=0;str2[i]!='\0';i++);
    len2=i;

    for(i=0,k=0;str1[i]!='\0';i++)
    {
        if(i==0 || str1[i-1]==' ')
        {
           if(str1[i]==str2[k])
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
            }

        }
        if(str1[i]==str2[k]&&(str1[i+1]==' '||str1[i+1]=='\0'))
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
            else
            {
                start=-1;
            }
        }
        else
        {
            k=0;
        }
    }

    printf("\nindex: %d",start);
    return 0;
}






