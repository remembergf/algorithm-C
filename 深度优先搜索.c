//ʹ���������������ʵ���Թ���������·���ж��ٲ� (DFS)
#include<stdio.h>
int a[51][51],book[51][51];
int n,m,q,p;
int min=100;

void dfs(int x,int y,int step)
{
	int tx,ty,i;
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	if(x==p&&y==q)
	{
		if(step<min)
			min=step;
		return; 
	}
	
	for(i=0;i<4;i++)
	{
		tx=x+next[i][0];
		ty=y+next[i][1];
		if(tx<1 || tx>n || ty<1 ||ty >m)
			continue;
		if(a[tx][ty]==0 && book[tx][ty]==0)
		{
			book[tx][ty]=1;
			dfs(tx,ty,step+1);
			book[tx][ty]=0;
		}	
	}
	return;
}

int main()
{
	int i,j,x,y;
	printf("�������Թ��ĳߴ�:\n");
	scanf("%d %d",&n,&m);
	printf("�����������������Թ�:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	printf("���������������յ�����:\n");
	scanf("%d %d %d %d",&x,&y,&p,&q);
	book[x][y]=1;
	dfs(x,y,0);
	printf("�ܹ���������%d��\n",min);
	
	return 0;
} 