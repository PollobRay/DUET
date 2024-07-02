#include<stdio.h>
int main()
{
    //2
    /*
    int a,b,c;
    int *p1, *p2, *p3;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    p1=&a;
    p2=&b;
    p3=&c;

    if(*p1> *p2 && *p1> *p3)
        printf("Largest number is: %d",*p1);
    else if(*p2>*p3)
        printf("Largest number is: %d",*p2);
    else
        printf("Largest number is: %d",*p3);
    */

    //3
/*
    char str[20];
    char *p;
    int v=0,c=0;
    p=str;

    fgets(str,20,stdin);

    while(*p!='\0')
    {
        if((*p>='a'&& *p<='z')||(*p>='A'&& *p<='Z'))
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            v++;
        else
            c++;
        p++;
    }
    printf("\n Vowel: %d",v);
    printf("\n Consonant: %d",c);
    */

    //4
    /*char str[20];
    char *p;
    p=str;

    fgets(str,20,stdin);

    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
*/

    // 5
    /*
    int n1,n2;
    int *p1, *p2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    p1=&n1;
    p2=&n2;

    *p1=*p1+ *p2;
    *p2=*p1- *p2;
    *p1=*p1- *p2;

    printf("\n%d",*p1);
    printf("\n%d",*p2);
    */
    return 0;
}
