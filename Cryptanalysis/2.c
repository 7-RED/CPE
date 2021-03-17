#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int n;
	char input[1000]={0};
	int count[26]={0};
	int total=0;


	scanf("%d\n",&n);
	while(n--)
	{
		fgets(input,1000,stdin);
		for(int y=0;y<strlen(input);y++)
		{
			if(input[y]>='a' && input[y]<='z')
			{
				count[input[y]-'a']++;
				total++;
			}
			else if(input[y]>='A' && input[y]<='Z')
			{
				 count[input[y]-'A']++;
				 total++;
			}
		}
	}
	for(int z=total;z>0;z--)
		for(int a=0;a<26;a++)
			if(count[a]==z)
				printf("%c %d\n",a+'A',z);
	return 0;
}
