//
// Created by Ray on 12/12/2021.
//
// count how many times a letter occur
// if occurrence of two letter is same then delete one occurrence of one's
/*
#include<iostream>
using namespace std;

void deleteChar(char s[],char c)
{
    int position;
    int size=0;

    for (int i = 0; s[i]!='\0'; ++i)
    {
        if(c==s[i])
        {
            position = i;
        }
        size++;
    }

    for (int i = position; i <size-1 ; ++i)
    {
        s[i]=s[i+1];
    }
    s[size-1]='\0';
}
void countLetter(int l[])
{
    cout<<"Letters occurrence"<<endl;
    for (int i = 0; i < 26; ++i)
    {
        if(l[i]!=0)
            cout<<(char)(i+'a')<<" : "<<l[i]<<endl;
    }
}
int main()
{
    char str[100];
    int letter[27]={0};
    int size=0;

    cin>>str;

    for (int i = 0; str[i]!='\0'; ++i)
    {
        letter[str[i]-'a']++;
        size++;
    }

    for (int i = 0; i<26 ; ++i)
    {
        if(i==0)
            countLetter(letter);

        for (int j = i+1; j <26 ; ++j)
        {
            if(letter[i]==letter[j]&&letter[i]!=0)
            {
                deleteChar(str,(char)(i+'a'));
                size--;
                letter[i]--;
                cout<<"Delete "<<(char)(i+'a')<<endl<<endl;
                i=-1;
                break;
            }
        }
    }

    cout<<str<<endl;

    return 0;
}
*/