#include<stdio.h>

int large(int ar[],int l)
{
    static int i=0,big =-9999;
    if(i < l)
    {
         if(big<ar[i])
           big=ar[i];
        i++;
      large(ar,l);//calling the function MaxElem itself to compare with further element
    }
    return big;

}
int main()
{
    int a[]={1,5,8,20,6,10,15};
    printf("%d ",large(a,7));
}
