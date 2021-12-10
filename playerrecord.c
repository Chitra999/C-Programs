#include<stdio.h>
#include<string.h>

struct cricket{
	char Name[10];
	char Country[10];
	float bat_avg;
};
void main()
{
	int n;
	printf("Enter no. of players\n");
	scanf("%d",&n);
	struct cricket s[n];
	int i;
	printf("Enter data of %d players\n", n);
	for(i=0;i<n;i++)
	{

		scanf("%s %s %f \n", &s[i].Name,&s[i].Country,&s[i].bat_avg);

	    printf("Country %s\n", s[i].Country);
	    printf("Enter player name, Country name and Batting average for %d player\n",i+1);

	}
	for(i=0;i<n;i++)
	{
		//if(s[i].bat_avg > 50)
		{
			printf("#PLAYER NAME=%s\n COUNTRY NAME=%s\n BATTING AVERAGE=%f\n",s[i].Name , s[i].Country , s[i].bat_avg );
		}
	}
}
