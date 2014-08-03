#include<stdio.h>
#include<conio.h>

struct Team
{
	int TeamNo,Matches_Played,Matches_Won,Matches_Lost,Matches_Drawn,Points;
	char TeamName[20];
}arr[5];

void Update_Points(struct Team[],int,int);
void Points_Table(struct Team[]);
int Team_Count=0;
int main()
{
	int choice,Team1,Team2;
	clrscr();
	for(int i=0;i<5;i++)
	{
		arr[i].Matches_Played=arr[i].Matches_Won=arr[i].Matches_Lost=arr[i].Matches_Drawn=arr[i].Points=0;
		arr[i].TeamNo=i;
	}
	do
	{
		printf("\nMain Menu \n1>Enter Team Details\n2>Enter Match Details\n3>Display Points_Table\n4>Exit\n\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Team_Count++;
				printf("Enter the Name of Team No. %d",Team_Count);
				scanf("%s",arr[Team_Count].TeamName);
				break;
			case 2:
				if(Team_Count>=2)
				{
					label_match:
					printf("Enter the Team nos between whom the match was played\n");
					scanf("%d%d",&Team1,&Team2);
					if(Team1<=Team_Count&&Team2<=Team_Count&&Team1>0&&Team2>0&&Team1!=Team2)
						Update_Points(arr,Team1,Team2);
					else
					{
						printf("Enter valid Team Numbers\n");
						goto label_match;
					}
				}	
				else
					printf("Not Enough Teams for a match\n");
				break;
			case 3:
				Points_Table(arr);
				break;
			case 4:
				break;
			default:
				printf("Enter valid choices\n");
		}
	}
	while(choice!=4);
	return 0;
}
void Points_Table(struct Team arr[])
{
	int i;
	printf("\nTeam No Team Name Matches played Matches won Matches lost Matches drawn Points\n\n");
	for(i=1;i<=Team_Count;i++)
	{
		printf("\n%d\t\t\t%s\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d",arr[i].TeamNo,arr[i].TeamName,arr[i].Matches_Played,arr[i].Matches_Won,arr[i].Matches_Lost,arr[i].Matches_Drawn,arr[i].Points);
	}
}
void Update_Points(struct Team arr[],int Team1,int Team2)
{
	int winner;
label_result:	
	printf("\nEnter the Winner %s(1) vs %s(2) !! (0 for draw) ",arr[Team1].TeamName,arr[Team2].TeamName);
	scanf("%d",&winner);
	if(winner!=0)
	{
		if(winner==1)
		{
			arr[Team1].Matches_Won++;
			arr[Team2].Matches_Lost++;
			arr[Team1].Points+=3;
		}
		else if(winner==2)
		{
			arr[Team2].Matches_Won++;
			arr[Team1].Matches_Lost++;
			arr[Team2].Points+=3;
		}
		else
		{
			printf("\nPlease Enter valid option between 0-2\n");
			goto label_result;
		}

	}
	else
	{
		arr[Team1].Matches_Drawn++;
		arr[Team2].Matches_Drawn++;
		arr[Team1].Points++;
		arr[Team2].Points++;
	}
	arr[Team1].Matches_Played++;
	arr[Team2].Matches_Played++;
}




