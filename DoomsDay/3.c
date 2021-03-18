#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int line,m,d;
	const int monthday[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	const char *dayweek[]={ "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	scanf("%d",&line);
	while(line--)
	{
		scanf("%d %d",&m,&d);
		int totalday=0;
		for(int i=0;i<m;i++)
		{
			totalday+=monthday[i];
		}
		totalday+=d;
		printf("%s\n",dayweek[totalday%7-1]);
	}
	return 0;
}
