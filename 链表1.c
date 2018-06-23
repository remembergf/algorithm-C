#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head,*p,*q,*t;
	int i,j,k,n;
	head=NULL;
	printf("请输入要创建链表的节点数: ");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		p=(struct node *)malloc(sizeof(struct node));
		p->data=n;
		p->next=NULL;
		if(head==NULL)
			head=p;
		else
			q->next=p;
		q=p;
	}
	
	//读取待插入的数
	scanf("%d",&j);
	t=head;
	while(t!=NULL)
	{
		if(t->next==NULL || t->next->data > j)
		{
			p=(struct node *)malloc(sizeof(struct node));
			p->data=j;
			p->next=t->next;
			t->next=p;
			break; 
		}
		t=t->next;
	}
	
	//输出链表的信息
	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->data);
		t=t->next;
	}
	
	return 0; 	
}