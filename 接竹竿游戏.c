//�˷ݴ������ڽ��ܽ���ͣ������ӣ���ֽ����Ϸ 

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
	
	//��ʼ�����С�ջ 
	q1.head=1;
	q1.tail=1;
	q2.head=1;
	q2.tail=1;
	s.top=0;
	
	//��ʼ����������������Ѿ����ڵ���
	for(i=1;i<=9;i++)
	{
		book[i]=0;
	}
	//A������в���������
	printf("��������A�в����������:\n");
	for(i=1;i<=6;i++)
	{
		scanf("%d",&q1.data[q1.tail]);
		q1.tail++;
	}
	//B������в���������
	printf("��������B�в����������:\n");
	for(i=1;i<=6;i++)
	{
		scanf("%d",&q2.data[q2.tail]);
		q2.tail++;
	}	 
	//�����в�Ϊ��ʱִ���ж�
	while(q1.head<q1.tail && q2.head<q2.tail)
	{
		t=q1.data[q1.head];
		//�Ƿ����Ӯ��
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
			//������Ӯ���Ʒŵ��Լ�������
			while(s.data[s.top]!=t)
			{
				book[s.data[s.top]]=0;
				q1.data[q1.tail]=s.data[s.top];
				q1.tail++;
				s.top--;
			}
			//����������ʣ���һ����
			book[s.data[s.top]]=0;
			q1.data[q1.tail]=s.data[s.top];
			q1.tail++;
			s.top--; 
		}
		if(q1.head==q1.tail)	break;
			
		t=q2.data[q2.head];
		//�Ƿ����Ӯ��
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
			//������Ӯ���Ʒŵ��Լ�������
			while(s.data[s.top]!=t)
			{
				book[s.data[s.top]]=0;
				q2.data[q2.tail]=s.data[s.top];
				q2.tail++;
				s.top--;
			}
			//����������ʣ���һ����
			book[s.data[s.top]]=0;
			q2.data[q2.tail]=s.data[s.top];
			q2.tail++;
			s.top--; 
		} 
	}
	
	if(q2.head==q2.tail)
	{
		printf("AӮ\n");
		printf("A��ǰ���������:\n");
		for(i=q1.head;i<=q1.tail-1;i++)
		{
			printf("%d ",q1.data[i]);
		}
		//��������ϻ�����
		if(s.top>0)
		{
			printf("\n�����ϵ�����:  ");
			for(i=1;i<=s.top;i++)
			{
				printf("%d ",s.data[i]);
			}
		}
		else
		{
			printf("\n�����Ѿ�û����");
		} 
	}
	else
	{
		printf("BӮ\n");
		printf("B��ǰ���������:\n");
		for(i=q2.head;i<=q2.tail-1;i++)
		{
			printf("%d ",q2.data[i]);
		}
		//��������ϻ�����
		if(s.top>0)
		{
			printf("\n�����ϵ�����:  ");
			for(i=1;i<=s.top;i++)
			{
				printf("%d ",s.data[i]);
			}
		}
		else
		{
			printf("\n�����Ѿ�û����");
		} 
	}
	
	return 0; 
}