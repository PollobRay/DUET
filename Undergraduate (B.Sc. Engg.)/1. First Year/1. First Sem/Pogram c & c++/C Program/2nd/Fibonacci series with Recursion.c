int fib(int n);
main()
{
int i,n;
printf("Enter how many terms of fibonacci you want to see:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("  %d",fib(i));
}

}
int fib(int n)
{
if(n==1||n==2)
{
return(1);
}
return(fib(n-1)+fib(n-2));
}
