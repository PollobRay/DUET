// writing and reading data from and to binary file
#include<stdio.h>

struct threeNum
{
    int n1,n2,n3;
};
int main()
{
    int n;
    struct threeNum num1,num2;
    FILE *fptr;

    // writing
    if((fptr=fopen("program.bin","wb"))==NULL) // here wb means write binary file
    {
        printf("Error to open the file");
        exit(0);
    }
    else
    {
        for(n=1;n<10;n++)//Note: if we read more time than write we will get noting
            // the loop until continue how much time we write after that the loop exit
        {
            num1.n1=n;
            num1.n2=5*n;
            num1.n3=5*n+1;

            fwrite(&num1,sizeof(struct threeNum),1,fptr);// here we storing threeNum once there for 1
        }
        fclose(fptr);
    }

    //reading
    if((fptr=fopen("program.bin","rb"))!=NULL)// reading binary data
    {
        for(n=1;n<5;n++)
        {
            fread(&num2,sizeof(struct threeNum),1,fptr);// we have to keep as same as writing
            printf("\n%d %d %d",num2.n1,num2.n2,num2.n3);
        }
        fclose(fptr);
    }
    return 0;
}
