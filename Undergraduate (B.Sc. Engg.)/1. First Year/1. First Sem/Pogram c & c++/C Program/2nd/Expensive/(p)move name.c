#include<stdio.h>
#include<windows.h>

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
    int x=30,y=10;
    char ch;
    gotoxy(x,y);
    printf("Pollob");
    while(1)
    {
        ch=getch();
        switch(ch)
        {
        case 'a':
            x--;
            break;

        case 's':
            x++;
            break;

        case 'w':
            y--;
            break;

        case 'z':
            y++;
            break;

      case 27://scipe
            exit(0);
        }
        systen("cls");//clear screen
        gotoxy(x,y);
        printf("Pollob");
    }
}
