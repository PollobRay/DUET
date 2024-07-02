#include<graphics.h>
int main()
{
int driver,mode;
driver=DETECT;
mode=0;
initgraph(&driver,&mode,"C:\Program Files (x86)\CodeBlocks\MinGW\lib");
circle(200,300,100);
closegraph();
return 0;
}
