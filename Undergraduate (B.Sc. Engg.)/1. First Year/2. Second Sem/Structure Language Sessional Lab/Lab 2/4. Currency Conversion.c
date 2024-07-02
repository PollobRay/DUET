#include<stdio.h>
int main()
{

    int start,end,update,i;
    float convertrate=82.6;

    printf("Enter start value: ");
    scanf("%d",&start);
    printf("Enter end Value: ");
    scanf("%d",&end);
    printf("Enter update value: ");
    scanf("%d",&update);

    if(start>end)
    {
        if(update>0)
            update*=-1;
        if(update==0)
            update=-1;
       start=start+end-(end=start);
    }
    if(start<end &&update<0)
        update*=-1;

    printf("\n%20s%3s%20s%3s","","USD","","BDT");
    for(i=start;i<=end;i=i+update)
    {
        printf("\n%20s%-3d%20s%-3.1f","",i,"",convertrate*i);
    }
}
