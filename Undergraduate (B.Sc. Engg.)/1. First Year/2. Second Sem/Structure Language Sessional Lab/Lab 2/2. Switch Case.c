#include<stdio.h>

int main()
{
   char choice;
   printf("Enter Your choice");
   choice=getchar();
   switch(choice)
   {
   case 'A':
   case 'a':
    printf("Action movie fun\n");
    break;

   case 'C':
   case 'c':
    printf("Comedy movie fun");
    break;

   case 'D':
   case 'd':
    printf("Drama movie fun");
    break;

   default:
    printf("Invalid choice");
   }

    return 0;
}

