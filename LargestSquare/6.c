#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int T,M,N,Q,r,c;//T組測資、MN矩陣大小、Q行rc行數
	char DP[102][102];//存字元

	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d",&M,&N,&Q);
		printf("%d %d %d\n",M,N,Q);
		for(int i=0;i<M;++i)
			scanf("%s",DP[i]);

		while(Q--)
		{
			scanf("%d %d",&r,&c);
			int ans=1;
			for(int j=0;j <= M || j<=N;j++)//跑完矩陣
			{
				int flag=0;
				for (int k=r-j;k<=r+j;k++)//循環找相同
				{
					for (int l=c-j;l<=c+j;l++)//循環找相同
					{
						if(k<0 || l<0 || k>=M || l>=N)//超過找不到
						{
							flag=1;
							break;
						}
						if(DP[k][l]!=DP[r][c])//不同大小
							flag=1;
					}
				}
				if(flag==0)
				{
					if(ans<2*j+1)
						ans=2*j+1;//算出大小
				}
				else
					break;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
