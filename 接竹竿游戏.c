//此份代码用于介绍接竹竿（收麦子）的纸牌游戏 

#include<stdio.h>
struct queue{
	int data[1000];
	int head;
	int tail;
};

struct stack
{
	int data[10];
	int top; 
};

int main()
{
	struct queue q1,q2;
	struct stack s;
	int book[10];
	int i,t;
	
	//初始化队列、栈 
	q1.head=1;
	q1.tail=1;
	q2.head=1;
	q2.tail=1;
	s.top=0;
	
	//初始化用来标记桌子上已经存在的牌
	for(i=1;i<=9;i++)
	{
		book[i]=0;
	}
	//A向队列中插入六张牌
	printf("请输入向A中插入的六张牌:\n");
	for(i=1;i<=6;i++)
	{
		scanf("%d",&q1.data[q1.tail]);
		q1.tail++;
	}
	//B向队列中插入六张牌
	printf("请输入向B中插入的六张牌:\n");
	for(i=1;i<=6;i++)
	{
		scanf("%d",&q2.data[q2.tail]);
		q2.tail++;
	}	 
	//当队列不为空时执行判断
	while(q1.head<q1.tail && q2.head<q2.tail)
	{
		t=q1.data[q1.head];
		//是否可以赢牌
		if(book[t]==0)
		{
			q1.head++;
			s.top++;
			s.data[s.top]=t;
			book[t]=1;
		}
		else
		{
			q1.head++;
			q1.data[q1.tail]=t;
			q1.tail++;
			//将桌上赢得牌放到自己的手中
			while(s.data[s.top]!=t)
			{
				book[s.data[s.top]]=0;
				q1.data[q1.tail]=s.data[s.top];
				q1.tail++;
				s.top--;
			}
			//回收桌子上剩余的一张牌
			book[s.data[s.top]]=0;
			q1.data[q1.tail]=s.data[s.top];
			q1.tail++;
			s.top--; 
		}
		if(q1.head==q1.tail)	break;
			
		t=q2.data[q2.head];
		//是否可以赢牌
		if(book[t]==0)
		{
			q2.head++;
			s.top++;
			s.data[s.top]=t;
			book[t]=1;
		}
		else
		{
			q2.head++;
			q2.data[q2.tail]=t;
			q2.tail++;
			//将桌上赢得牌放到自己的手中
			while(s.data[s.top]!=t)
			{
				book[s.data[s.top]]=0;
				q2.data[q2.tail]=s.data[s.top];
				q2.tail++;
				s.top--;
			}
			//回收桌子上剩余的一张牌
			book[s.data[s.top]]=0;
			q2.data[q2.tail]=s.data[s.top];
			q2.tail++;
			s.top--; 
		} 
	}
	
	if(q2.head==q2.tail)
	{
		printf("A赢\n");
		printf("A当前手里的牌是:\n");
		for(i=q1.head;i<=q1.tail-1;i++)
		{
			printf("%d ",q1.data[i]);
		}
		//如果桌子上还有牌
		if(s.top>0)
		{
			printf("\n桌子上的牌是:  ");
			for(i=1;i<=s.top;i++)
			{
				printf("%d ",s.data[i]);
			}
		}
		else
		{
			printf("\n桌子已经没有牌");
		} 
	}
	else
	{
		printf("B赢\n");
		printf("B当前手里的牌是:\n");
		for(i=q2.head;i<=q2.tail-1;i++)
		{
			printf("%d ",q2.data[i]);
		}
		//如果桌子上还有牌
		if(s.top>0)
		{
			printf("\n桌子上的牌是:  ");
			for(i=1;i<=s.top;i++)
			{
				printf("%d ",s.data[i]);
			}
		}
		else
		{
			printf("\n桌子已经没有牌");
		} 
	}
	
	return 0; 
}