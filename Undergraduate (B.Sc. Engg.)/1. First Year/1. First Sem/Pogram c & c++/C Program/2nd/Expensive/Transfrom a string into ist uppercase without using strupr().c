main()
{
    int i;
    char str[20];
    printf("Enter a string : ");
   scanf("%s",&str);
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;//here change ascii code change
            /*
            becouse small character ascii code is less than big character
            */
        }


    }
printf("\n Your string is : %s",str);
}

