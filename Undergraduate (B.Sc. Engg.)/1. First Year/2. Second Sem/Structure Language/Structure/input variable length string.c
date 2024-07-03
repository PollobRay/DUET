//
// Created by Ray on 8/15/2021.
//

#include <stdio.h>
#include <stdlib.h>

char* inputString()
{
    char *p,*q,ch;
    int i,len=1;

    p=(char*)malloc(len);
    ch=getchar();
    *p=ch;

    do {
        q=(char*)malloc(len);

        for (i = 0; i <len ; ++i)
        {
            *(q+i)=*(p+i);
        }
        *(q+i)='\0';

        free(p);

        len++;

        p=(char*)malloc(len);
        for(i=0;i<len;i++)
            *(p+i)=*(q+i);
        free(q);

        ch=getchar();
        *(p+len-1)=ch;
    } while (ch!='X');

    for (i=0;i<len;i++)
        *(q+i)=*(p+i);
    *(q+i-1)='\0';

    return q;
}
/*
int main()
{
    printf("%s",inputString());
    return 0;
}
 */