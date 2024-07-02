#include<stdio.h>
#include<string.h>

struct cricket
{
    char player_name[100];
    char team_name[100];
    float batting_average;
};
int main()
{
    struct cricket *player;
    int i,n;
    char *teamlist;
    int n1=0,k,j,t=0;

    printf("Enter no of players information want to store: ");
    scanf("%d",&n);

   // printf("%d",strcmp("Roy","Roy"));

    player=(struct cricket*) calloc(n,sizeof(struct cricket));

    //
    teamlist=(char*)calloc(n,sizeof(char)*100);//

    printf("Enter %d players information...\n",n);
    for(i=0,k=0;i<n;i++)
    {
        fflush(stdin);// clear buffer
        printf("\nEnter player name: ");
        fgets((player+i)->player_name,99,stdin);
        printf("Enter team name: ");
        fgets((player+i)->team_name,99,stdin);
        printf("\nEnter batting average: ");
        scanf("%f",&(player+i)->batting_average);

        //insert team name to team list array
        for(j=0;j<n1;j++)
        {
            if(strcmp((teamlist+j),(player+i)->team_name)==0)
            {
                t++;
                break;
            }
        }
        if(t==0)
        {
           // *(teamlist+k)=*(player+i);
            strcpy((teamlist+k),(player+i)->team_name);
            k++;
            n1++;
            printf("\nStore %s",(teamlist+k));
        }
        t=0;

    }



    for(k=0;k<n1;k++)
    {
        printf("\n\n%s player list...\n\n ",(teamlist+k));
        for(i=0;i<n;i++)
        {
            if(strcmp((teamlist+k),(player+i)->team_name)==0)
            {
                printf("\nPlayer name: %s",(player+i)->player_name);
                printf("\nBatting average: %f",(player+i)->batting_average);
            }
        }
    }
    /*for(i=0;i<n;i++)
    {
        printf("\n%d 'th player information..",i+1);
        printf("\nPlayer name: %s",(player+i)->player_name);
        printf("\nTeam name: %s",(player+i)->team_name);
        printf("\nBatting average: %f",(player+i)->batting_average);
        printf("\n\n");
    }
    */
    return 0;
}


