#include<stdio.h>
void rotate_array(int A[],int N,char dir,int shift_ct)
{
    int i,temp;
    if(dir=='R')
    {
        while(shift_ct)
        {
            temp=A[N-1];
            for(i=N-1;i>=1;i--)
            {
                A[0]=temp;
                shift_ct--;
            }
        }
    }
        else
        {
            while(shift_ct)
            {
                temp=A[0];
                for(i=0;i<=N-2;i++)
                {
                    A[i]=A[i+1];
                }
                A[N-1]=temp;
                shift_ct--;
            }
        }
    }

void display(int A[],int N)
{
    int i;
    printf("\n");
    for(i=0;i<N;i++)
        printf("%d",A[i]);
}
main()
{
    int A[8]={10,20,30,40,50,60,70,80};
    display(A,8);
    char a='L';
    printf("\nAfter 3 time left shift \n");
    rotate_array(A,8,a,3);
    display(A,8);
    printf("\nAfter 4 time right shift\n");
    a='R';
    rotate_array(A,8,a,4);
    display(A,8);
}
