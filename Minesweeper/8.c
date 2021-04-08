#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char bomb[102][102];//炸彈的位置
int ans[102][102];//輸出的矩陣
int xy[8][2]={1,0,0,1,-1,0,0,-1,1,-1,-1,1,1,1,-1,-1};//矩陣用來計算前後輸出矩陣的數字

int main(void)
{
	int n,m;//測資
	int field=1;//用來統計幾個field
	while(scanf("%d %d",&n,&m)!=EOF && !(n==0 && m==0))//不等於零且必為數字
	{
		for(int i=0;i<n;++i)
			scanf("%s",bomb[i]);//掃描炸彈的矩陣

		memset(ans,0,sizeof(ans));//把整個矩陣都填上零

		for(int j=0;j<n;++j)
			for(int k=0;k<m;k++)
				if(bomb[j][k]=='*')//找到炸彈存在的位置
					for(int l=0;l<8;l++)//xy矩陣大小
					{
						int x=j+xy[l][0];//算出位置
						int y=k+xy[l][1];//算出位置
						if(x >= 0 && x<n && y>=0 && y<m)
							++ ans[x][y];//加在輸出矩陣
					}
		if(field>1)//避免跑超過
			printf("\n");
		printf("Field #%d:\n",field++);
		for(int a=0;a<n;a++)
		{
			for(int b=0;b<m;b++)
				if(bomb[a][b]=='*')
					printf("*");//在輸出矩陣印出炸彈位置
				else
					printf("%d",ans[a][b]);//輸出計算好的解答
			printf("\n");
		}
	}
	return 0;
}
