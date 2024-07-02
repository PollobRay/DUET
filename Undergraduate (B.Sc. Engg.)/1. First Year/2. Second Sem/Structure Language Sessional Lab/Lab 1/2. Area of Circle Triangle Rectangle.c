#include<stdio.h>
int main()
{
    float redius,areaofcirlce,side1,side2,side3,perimeter,s,areaoftriangle,lenght,breath,areaofrectangle;

    //circle
    printf("Enter redius of circle: ");
    scanf("%f",&redius);
    areaofcirlce=3.1416*redius*redius;
    printf("Area od circle is :%.2f",areaofcirlce);

    printf("\n\nEnter three sides of triangle:");
    scanf("%f%f%f",&side1,&side2,&side3);
    perimeter=side1+side2+side3;
    s=perimeter/2;
    if((side1+side2)>side3&&(side2+side3)>side1&&(side1+side3)>side2)
    {
        areaoftriangle=sqrt(s*(s-side1)*(s-side2)*(s-side3));
        printf("Area of triangle is: %.2f",areaoftriangle);
    }
    else
    {
        printf("This is not a triangle");
    }

    printf("\n\n enter length and breath of rectanle:");
    scanf("%f%f",&lenght,&breath);
    areaofrectangle=lenght*breath;
    printf("Area of rectangle is : %.2f",areaofrectangle);

    return 0;
}
