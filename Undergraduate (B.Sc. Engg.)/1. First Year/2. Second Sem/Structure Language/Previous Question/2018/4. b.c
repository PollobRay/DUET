//
// Created by Ray on 8/16/2021.
//
//valid password
#include <stdio.h>

int isValidpasword(char *pswd)
{
    int lowerC=0;
    int upperC=0;
    int nonletter=0;

    for (int i = 0; pswd[i]!='\0'; ++i)
    {
        if (pswd[i]>='a'&&pswd[i]<='z')
            lowerC++;
        else if (pswd[i]>='A'&&pswd[i]<='Z')
            upperC++;
        else if (pswd[i]>='0'&&pswd[i]<='9')
        {

        }
        else
            nonletter++;
    }
    if (lowerC>=1&&upperC==1&&nonletter>=1)
        return 1;
    else
        return 0;
}
/*
int main() {
    char str[20];
    gets(str);

    printf("%d", isValidpasword(str));

    return 0;

}*/