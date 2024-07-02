main()
{
    char str[50],v[]="aeiouAEIOU";
    int i,j,count=0;
    printf("Enter a string :");
    gets(str);
    for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
        {
            if(str[i]==v[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nToatal vowels in %s is : %d",str,count);
}
