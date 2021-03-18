#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int line,m,d;//line表幾行,m月份,d日期
	const int monthday[]={0,31,28,31,30,31,30,31,31,30,31,30,31};//常數表每個月份的天數
	const char *dayweek[]={ "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};//每週日期 從星期六開始（因為２０１１年1月1號是星期六從題意推算
	scanf("%d",&line);//看資料有幾行
	while(line--)
	{
		scanf("%d %d",&m,&d);
		int totalday=0;//歸零
		for(int i=0;i<m;i++)//幾個月份
		{
			totalday+=monthday[i];//加天數
		}
		totalday+=d;//加上最後的日期
		printf("%s\n",dayweek[totalday%7-1]);//取餘數-1因為陣列從零開始
	}
	return 0;
}
