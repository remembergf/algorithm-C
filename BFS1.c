//ʹ�ù�����������½�������õ�ը������Ϸ
#include<stdio.h>
struct node
{
	int x;
	int y;
};

char a[20][21]={0};
 
int getnum(int i,int j)
{
	int sum,x,y;
	sum=0;
	x=i;
	y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
		{
			sum++;
			x--;
		}
	}
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
		{
			sum++;
			x++;
		}
	}
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
		{
			sum++;
			y++;
		}
	}
	x=i;y=j;
	while(a[x][y]!='#')
	{
		if(a[x][y]=='G')
		{
			sum++;
			y--;
		}
	}
	return sum;
}

int main()
{
	struct node que[401];
	int i,j,n,m,x,y,q,p,tx,ty,mx,my,sum,max=0;
	int head,tail;
	int next[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
	int book[20][20]={0};
	printf("�������ͼ�ĳߴ��С:\n");
	scanf("%d %d",&n,&m);
	printf("�������ͼ�ϵ�ÿ���㣺\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%s",&a[i]);
	}
	printf("��������������:\n");
	scanf("%d %d",&x,&y);
	
	//�����н��г�ʼ��
	head=1;
	tail=1;
	que[tail].x=x;
	que[tail].y=y;
	tail++;
	book[x][y]=1;
	max=getnum(x,y);
	mx=x;
	my=y;
	
	while(head<tail)
	{
		for(i=0;i<4;i++)
		{ 
			tx=que[head].x+next[i][0];
			ty=que[head].y+next[i][1];
			if(tx<0 || tx>n-1 ||ty<0 || ty>m-1)
				continue;
			if(a[tx][ty]=='.' && book[tx][ty]==0)
			{
				book[tx][ty]=1;
				que[tail].x=tx;
				que[tail].y=ty;
				tail++;
				
				sum=getnum(tx,ty);
				if(sum>max)
				{
					max=sum;
					mx=tx;
					my=ty;
				}
			}
		}
		head++; 
	}
	
	printf("��(%d,%d)��λ�������������࣬���Ϊ%d��\n",mx,my,max);
	
	return 0; 
} 