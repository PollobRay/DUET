#include<stdio.h>
int main()
{

    FILE *file, *file1;
    char ch,numc;
    int count=1;

    file = fopen("sentence.txt", "r");
    file1 = fopen("copy.txt", "w");

    if(file!=NULL&&file1!=NULL)
    {
         while ((ch = fgetc(file)) != EOF)
         {
             if(count==1)
             {
                numc=count+'0'; // to convert int as char
                putc(numc,file1);
                putc(' ',file1);
                count++;
             }
            if(ch=='.'||ch=='?'||ch=='!'||ch=='\n')
            {
                putc(ch,file1);
                putc('\n',file1);
                numc=count+'0';
                putc(numc,file1);
                putc(' ',file1);
                count++;
            }
            else if(ch!='\n')
            {
                putc(ch,file1);
            }

         }
    }
    else
    {
        printf("File is not exits");
    }

    fclose(file);
    fclose(file1);
    return 0;
}
