#include<stdio.h>

int main(void)
{
	int T;//T組測資
	scanf("%d",&T);
	while(T--)
	{
		int Day[3651]={0},H,tmp,N,P;//N個天數,H天罷工,P個政黨,Day存天數
		scanf("%d %d",&N,&P);
		for(int i=0;i<P;++i)//跑P個政黨
		{
			scanf("%d",&H);
			tmp=H;
			while(H<=N)
			{
				Day[H]=1;//標記政黨會罷免的天數
				H=H+tmp;//加到天數滿N天
			}
		}
			int count=0;//計數
			for(int x=1;x<=N;++x)
				if(Day[x]==1 && x%7!=0 && x%7!=6)
					//計算非五六的罷工天數
					count++;
			printf("%d\n",count);
	}
	return 0;
}
