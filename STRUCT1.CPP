#include<stdio.h>
#include<conio.h>
struct player
{
char name[20];
char team[20];
int run;
int wicket;
};
void main()
{clrscr();
struct player p[100];
int N,i;
printf("Enter the Number of players record you want enter\n");
scanf("%d",&N);
printf("Enter the records\n");
for(i=0;i<N;i++)
{
printf("Enter the name of %d player\n",i+1);
fflush(stdin);
gets(p[i].name);
printf("Enter the name of the team of %d player\n",i+1);
fflush(stdin);
gets(p[i].team);
printf("Enter the runs of %d player\n",i+1);
scanf("%d",&p[i].run);
printf("Enter the wickets of %d player\n",i+1);
scanf("%d",&p[i].wicket);
}
for(i=0;i<N;i++)
{
	if(p[i].run>1000&&p[i].wicket>100)
	{
	printf("Name of player and team having runs more than 1000 and wickets more than 100\n");
	puts(p[i].name);
	puts(p[i].team);
	}

}
getch();
}
