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
	printf("������Ҫ��������Ľڵ���: ");
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
	
	//��ȡ���������
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
	
	//����������Ϣ
	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->data);
		t=t->next;
	}
	
	return 0; 	
}