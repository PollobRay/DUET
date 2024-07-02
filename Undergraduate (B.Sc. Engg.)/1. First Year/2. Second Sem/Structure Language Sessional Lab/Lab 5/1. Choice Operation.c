#include<stdio.h>
#include<stdlib.h>

void mulTest();
int divide(int m,int n);
int countDigits(int n);
int position(int n,int digit);
long extractOddDigits(long n);

int main()
{

    //template
    int choice;
    int m,n,result;//for divide
    int number,noOfDigit;// for count digit
    int number1,digit,pos;//for finding position
    long number2,oddnumber;// for finding odd digits

    do {
        printf("\n\nPerform the following functions:");
        printf ("\n1: multiplication test");
        printf ("\n2: quotient using division by subtraction ");
        printf ("\n3: count the number of digits ");
        printf ("\n4: position of a digit ");
        printf ("\n5: extract all odd digits");
        printf ("\n6: quit \n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
               {
                  mulTest() ;
                    break;
               }

            case 2:
                {
                    printf("\n\nEnter value of dividend: ");
                    scanf("%d",&m);
                    printf("\nEnter value of divisor: ");
                    scanf("%d",&n);
                    if(m>0&&n>0)
                    {
                        result=divide(m,n) ;
                        printf("\nResult of division is: %d",result);
                    }
                    else
                    {
                        printf("\nOnly positive numbers are allowed");
                    }

                    break;
                }

            case 3:
                {
                    printf("\n\nEnter a number: ");
                    scanf("%d",&number);
                    if(number>0)
                    {
                        noOfDigit=countDigits(number);
                        printf("\n%d has %d digits",number,noOfDigit);
                    }
                    else
                    {
                        printf("\nOnly positive integer are allowed");
                    }

                    break;
                }

            case 4:
                {
                    printf("\n\nEnter a number: ");
                    scanf("%d",&number1);
                    printf("\nEnter a digit :");
                    scanf("%d",&digit);
                    if(number1>0&&digit>=0)
                    {
                        pos=position(number1,digit);
                        printf("\nPosition of %d in %d is %d from right side",digit,number1,pos);
                    }
                    else
                    {
                        printf("\nOnly positive numbers are allowed");
                    }
                    break;
                }


            case 5:
                {
                    printf("\n\nEnter a number :");
                    scanf("%ld",&number2);
                    if(number2>0)
                    {
                        oddnumber=extractOddDigits(number2);
                        printf("\nOdd digits: %ld",oddnumber);
                    }
                    else
                    {
                        printf("\nOnly positive numbers are allowed");
                    }
                    break;
                }

            case 6:
                 printf("\nProgram terminating... ");
                 break;
            default:
                printf("\nGive input between 1 to 6\n");

        }
    } while (choice != 6);


    return 0;
}

void mulTest()
{
int i,times,n1,n2,result,userResult,correct;
    const int LIMIT=9;// random number generate up to 9 for one digit integer

    times=5;// for 5 times do multiplication
    correct=0;//initial total correct answer is 0

    for(i=1;i<=times;i++)
    {
        n1=rand()%LIMIT+1;//here we get value from 1 to 9(one digit integer)
        n2=rand()%LIMIT+1;
        result=n1*n2;
        printf("\nHow much is %d times %d? ",n1,n2);
        scanf("%d",&userResult);// getting multiplication result from user

        if(userResult==result)//check user result is correct or not
            correct++; //if user result is correct then increment no of correct answer
    }
    printf("\n%d answers out of %d are correct",correct,times);
}

int divide(int m,int n)
{
    int result;
    result=0;

    while(m>=n)
    {
        m=m-n;
        result++;
    }
   return result;
}

int countDigits(int number)
{
    int c=0;
    while(number!=0)
    {
        number/=10;
        c++;
    }
    return c;
}
int position(int n,int digit)
{
    int rem,pos=0,c=0;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        c++;
        if(rem==digit)
        {
            pos=c;
            break;
        }
    }
    if(pos==0)
        pos=-1;

    return pos;
}

long extractOddDigits(long n)
{
     int rem,i=1;
    long oddN=0;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        if(rem%2!=0)
        {
            oddN=rem*i+oddN;
            i=i*10;
        }
    }
    if(oddN==0)
        oddN=-1;
    return oddN;
}
