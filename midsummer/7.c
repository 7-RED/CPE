#include<stdio.h>
#include<stdlib.h>

int compare(const void * a,const void * b)//qsort必要
{
	return(*(int*)a - *(int*)b);
}
int main(void)
{
	int n;//n組測資
	while(scanf("%d",&n)!=EOF)
	{
		int num[n];
		for(int i=0;i<n;++i)
			scanf("%d",&num[i]);//num的陣列
		qsort(num,n,sizeof(int),compare);//進行排序
		int median=num[(n-1)/2];//奇中位數
		int median2=num[n/2];//偶中位數

		int count=0;
		for(int j=0;j<n;j++)
			if(num[j]==median || num[j]==median2)
				count++;//計算幾個中位數
		int ans=median2-median+1;//中位數中間有幾個數
		printf("%d %d %d\n",median,count,ans);
	}
	return 0;

}
