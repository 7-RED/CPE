#include<stdio.h>
#include<stdlib.h>
void buble_sort(int a[],int length)//使用泡沫排序考ＣＰＥ建議使用QSORT
{
	for(int i=0;i<length-1;i++)
		for(int j=0;j<length-1-i;j++)
		{
			if(a[j]>a[j+1])
				{
					int ch=a[j];
					a[j]=a[j+1];
					a[j+1]=ch;
				}
		}
}
int main(void)
{
	int r,rownum,ans=0,home;//r為幾筆資料，rowmun為每列幾個家，ans用來輸出加總，home為中位數老大的家
	int si[500];//最大只能有500筆資料
	scanf("%d",&r);
	for(int x=0;x<r;x++)
	{
		scanf("%d",&rownum);
			for(int y=0;y<rownum;y++)
				scanf("%d",&si[y]);
		buble_sort(si,rownum);//進行排序
		home=(rownum+1)/2-1;//印出中位數
			for(int z=0;z<rownum;z++)
				ans=ans+abs(si[z]-si[home]);//計算所有到老大家的距離

		printf("ans=%d\n",ans);//印出答案
		ans=0;//清零
	}


	return 11;
}

