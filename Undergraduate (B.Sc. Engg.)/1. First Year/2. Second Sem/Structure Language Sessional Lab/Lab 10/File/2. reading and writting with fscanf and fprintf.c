// writing and reading value until last with fscanf() and fprintf() function
#include<stdio.h>
int  main()
{
    int a;
   FILE *fptr;
    fptr=fopen("test2.txt","w");

    if(fptr==NULL)
        exit(0);

    printf("Enter values for exit(-1):");
    do{
        scanf("%d",&a);

            fprintf(fptr,"%d ",a);
       // printf("\nPosition:%d \n",ftell(fptr));
    }while(a!=EOF);// EOF=-1

    fclose(fptr);

    fptr=fopen("test2.txt","r");
    if(fptr==NULL)
        exit(0);
    printf("\nPrinting values from file....\n");

    while(eof(fptr))
    {
        fscanf(fptr,"%d",&a);


        fseek(fptr,SEEK_CUR,ftell(fptr)+2);//one byte for data one byte for space
        if(a==-1)// here -1 is denoting end of file
            break;
        printf("%d\n",a);
    }
    return 0;
}
