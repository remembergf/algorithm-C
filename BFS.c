//ʹ��BFS��ʵ���Թ������·������
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
	//��Ϊ���ֻ�ܳ���50*50��С���Թ���ͼ 
	struct node que[2501];
	int i,j,n,m,p,q,tx,ty,x,y,flag; 
	int book[51][51]={0},a[51][51]={0};
	int head,tail;
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	printf("�������Թ��ߴ�Ĵ�С:\n");
	scanf("%d %d",&n,&m);
	printf("����Թ����г�ʼ��:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	printf("���������������յ�����:\n");
	scanf("%d %d %d %d",&x,&y,&p,&q);
	
	//�Զ��н��г�ʼ��
	head=1;
	tail=1;
	//������ڵ�����
	que[tail].x=x;
	que[tail].y=y;
	que[tail].f=0;
	que[tail].s=0;
	tail++;
	book[x][y]=1;
	//��������Ƿ񵽴���Ŀ����λ�� 
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
		//ʹ���׳��ӣ��Դ����������� 
		head++;
	}
	
	printf("���·��Ϊ%d��\n",que[tail-1].s);
	
	return 0; 
	 
} 