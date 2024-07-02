#include<stdio.h>

#define SQUARE(x) ((x)*(x))  // define macro
#define QUBE(x) (SQUARE(x)*(x))

int main()
{
    int ans;
    ans=QUBE(2);
    printf("Ans is: %d",ans);

    #undef QUBE   //CUBE Marco is undefine here
    //this lline is without semiocolon

return 0;
}
