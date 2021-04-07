#include<stdio.h>
#include<stdlib.h>

int compare(const void * a,const void * b)//qsort
{
	return(*(int*)a - *(int*)b);
}
int main(void)
{
	int n;//n組測資
	while(scanf("%d",&n),n)
	{
		int num[n];
		for(int i=0;i<n;++i)
			scanf("%d",&num[i]);//num的陣列
		qsort(num,n,sizeof(int),compare);//進行排序
		int median=num[(n+1)/2-1];
		int median2=num[n/2-1];

		int count=0;
		for(int j=0;j<n;j++)
			if(num[j]==median || num[j]==median2)
				count++;
		int ans=median2-median+1;
		printf("%d %d %d",median,count,ans);
	}
	return 0;

}
