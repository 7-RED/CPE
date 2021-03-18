#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int n;//輸入n列字串
	char input[1000]={0};//輸入的文字
	int count[26]={0};//字母26個
	int total=0;//計數器


	scanf("%d\n",&n);
	while(n--)
	{
		fgets(input,1000,stdin);//fgets函數讀取字串
		for(int y=0;y<strlen(input);y++)
		{
			if(input[y]>='a' && input[y]<='z')//字母小寫
			{
				count[input[y]-'a']++;//把字母減掉小寫a，正規化
				total++;
			}
			else if(input[y]>='A' && input[y]<='Z')//字母大寫
			{
				 count[input[y]-'A']++;//字母正規化
				 total++;
			}
		}
	}
	for(int z=total;z>0;z--)//計數迴圈
		for(int a=0;a<26;a++)
			if(count[a]==z)
				printf("%c %d\n",a+'A',z);
	return 0;
}
