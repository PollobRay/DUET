#include<Stdio.h>
int main()
{


    // 1 upper case to lower case
    /*
    char str[20];
    int i,d;

    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        d=str[i];
        if(d>=97&&d<=122)
            str[i]=(char)(d-32);
    }
    puts(str);

*/

    // 2 lower case to upper case
  /*  char str[20];
    int i,d;

    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        d=str[i];
        if(d>=65&&d<=90)
            str[i]=(char)(d+32);
    }
    puts(str);

    */

    // 3 find length
    /*
     char str[20];
    int i;
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("\n Length of the %s is : %d",str,i);
    */

    //4  concate two strings

    char str1[20],str2[20],str[40];
    int i,l1,l2,l,i1;
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);

    i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    l1=i;
    i=0;
    while(str2[i]!='\0')
    {
        i++;
    }
    l2=i;

    l=l1+l2;
    for(i=0,i1=0;i<l;i++)
    {
        if(i<l1)
            str[i]=str1[i];
        else
            str[i]=str2[i1++];

    }
    str[i]='\0';
    puts(str);

    return 0;
}
