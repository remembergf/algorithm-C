//ʹ��ջ���Ի����������ж� 

#include<stdio.h>
#include<string.h>

int main()
{
	char a[20],s[20];
	int i,len,mid,next,top;
	gets(a);
	len=strlen(a);
	mid=(len/2) -1;
	top=0;
	for(i=0;i<=mid;i++)
	{
		top++;
		s[top]=a[i];
	}
		
	//�ж��ַ������ȵ���ż��
	if(len%2==0){
		next=mid+1;	
	}
	else{
		next=mid+2;		
	}

	for(i=next;i<len;i++)
	{
		if(a[i]!=s[top])
			break;
		top--;		
	}
	if(top==0)
		printf("���ַ����ǻ�����\n");
	else
		printf("���ַ������ǻ�����\n");
		
	return 0;
}