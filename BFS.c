//使用BFS来实现迷宫的最段路径问题
#include<stdio.h>
struct node
{
	int x;
	int y;
	int f;
	int s;
};

int main()
{
	//因为最多只能出现50*50大小的迷宫地图 
	struct node que[2501];
	int i,j,n,m,p,q,tx,ty,x,y,flag; 
	int book[51][51]={0},a[51][51]={0};
	int head,tail;
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	printf("请输入迷宫尺寸的大小:\n");
	scanf("%d %d",&n,&m);
	printf("请对迷宫进行初始化:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	printf("请输入起点坐标和终点坐标:\n");
	scanf("%d %d %d %d",&x,&y,&p,&q);
	
	//对队列进行初始化
	head=1;
	tail=1;
	//插入入口的坐标
	que[tail].x=x;
	que[tail].y=y;
	que[tail].f=0;
	que[tail].s=0;
	tail++;
	book[x][y]=1;
	//用来标记是否到达了目标点的位置 
	flag=0;
	while(head<tail)
	{
		for(i=0;i<4;i++)
		{
			tx=que[head].x+next[i][0];
			ty=que[head].y+next[i][1];
			if(tx<1 || tx>n || ty<1 || ty>m)
				continue;
			if(a[tx][ty]==0 && book[tx][ty]==0)
			{
				book[tx][ty]=1;
				que[tail].x=tx;
				que[tail].y=ty;
				que[tail].f=head;
				que[tail].s=que[head].s+1;
				tail++;	
			}
			if(tx==p&&ty==q)
			{
				flag=1;
				break;
			}	
		}
		if(flag==1)
			break;
		//使队首出队，以此来更新数据 
		head++;
	}
	
	printf("最段路径为%d步\n",que[tail-1].s);
	
	return 0; 
	 
} 