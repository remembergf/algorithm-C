//����Ĵ��������
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
	int i,n,a;
	head=NULL;
	printf("�����봴������Ľڵ�����");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		p=(struct node *)malloc(sizeof(struct node));
		p->data=a;
		p->next=NULL;
		if(head==NULL)
			head=p;
		else
			q->next=p;
		q=p;
	}
	
	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->data);
		t=t->next;
	}
	
	return 0;
}