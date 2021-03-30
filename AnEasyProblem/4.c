#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
	char n[10005];//讀n字串
	int sum,d,max;//d存字元大小,max做指引
	while(scanf("%s",n)==1)
	{
	sum=0;
	max=1;
	for(int i=0;i<strlen(n);++i)
	{
		if(isdigit(n[i]))//判斷是否為數字
			d=n[i]-48;
		else if (isupper(n[i]))//判斷大寫
			d=n[i]-55;
		else if (islower(n[i]))//判斷小寫
			d=n[i]-61;
		else
			continue;
		sum+=d;//加總
		if(d>max)
		    max=d;
	}
	for (int j=max;j<63;++j)
	{
		if(sum%j==0)
		{
			printf("%d\n",j+1);
			break;
		}
		else if(j==62)
		{
			printf("such number is impossible!\n");
		}
	}

	}
	return 0;
}
