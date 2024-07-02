#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy(int x,int y)
{
    COORD C;
    C.X=x;
    C.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);
}
main()
{
//clrscr();

gotoxy(5,5);
printf("Pollob C Roy");

getch();
}
