// delete all space from file
#include<stdio.h>
int main()
{
    char c1,c2;
    long pos,totalBytes=0;
    FILE *fp;

    fp=fopen("message.txt","r+");

    // count total bytes of file
    fseek(fp,0l,SEEK_END);// moves pointer 0 to end
    totalBytes=ftell(fp);
    rewind(fp);
    //end

    while((c1=fgetc(fp))!=EOF)
    {
        if(c1==' ')
        {
            pos=ftell(fp);

            while((c2=fgetc(fp))!=EOF)
            {
                //printf("d: %c Position: %d\n",c2,ftell(fp));
                // start

                fseek(fp,ftell(fp)-2,SEEK_SET);
                fputc(c2,fp);
                // printf("d: %c Position: %d\n",c2,ftell(fp));
                fseek(fp,ftell(fp)+1,SEEK_SET);

            }

            fseek(fp,pos-1,SEEK_SET);
           // printf("Set next\n\n");
            //byte
            totalBytes--;
           // fputc(EOF,fp);
        }
        // print
        //printf("position: %d  total: %d \n",ftell(fp),totalBytes);
        //
    }
    //fseek(fp,totalBytes,SEEK_SET);
    //fputc(EOF,fp);
    //fclose(fp);
    return 0;
}

