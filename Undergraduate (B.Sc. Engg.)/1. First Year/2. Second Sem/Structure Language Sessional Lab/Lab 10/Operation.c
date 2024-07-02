// program no 1
#include<stdio.h>

int calc(int op,int n1,int n2);
int main()
{
    int n1,n2,result,operation,i;
    i=0;
    result=0;
    do{
        printf("\n\nPerform the following function: ");
        printf("\n1: Addition ");
        printf("\n2: Subtraction ");
        printf("\n3: Multiplication ");
        printf("\n5: Quit \n");
        scanf("%d",&operation);



        switch(operation)
        {
        case 1:
            {
                 printf("\n\nEnter First number :");
                scanf("%d",&n1);
                printf("\nEnter second number :");
                scanf("%d",&n2);
                result=calc(operation,n1,n2);
                printf("\n\nSummation of %d and %d is: %d",n1,n2,result);
                break;
            }
        case 2:
            {
                 printf("\n\nEnter First number :");
                scanf("%d",&n1);
                printf("\nEnter second number :");
                scanf("%d",&n2);
                 result=calc(operation,n1,n2);
                printf("\n\nSubtraction of %d and %d is: %d",n1,n2,result);
                break;
            }
        case 3:
            {
                 printf("\n\nEnter First number :");
                scanf("%d",&n1);
                printf("\nEnter second number :");
                scanf("%d",&n2);
                 result=calc(operation,n1,n2);
                printf("\n\nMultiplication of %d and %d is: %d",n1,n2,result);
                break;
            }
        case 5:
            {
                printf("\n\nProgram terminating...");
                 break;
            }


        default:
            printf("\nEnter value 1,2,3 or 5");
            break;

        }
    }while(operation!=5);

    return 0;
}

int calc(int op,int n1,int n2)
{
    int result=0;
    if(op==1) //summation
    {
        result=n1+n2;
    }
    else if(op==2) //subtraction
    {
        result=n1-n2;
    }
    else if(op==3)//multiplication
    {
        result=n1*n2;
    }

    return result;
}
