//使用栈来对回文数进行判断 

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
		
	//判断字符串长度的奇偶性
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
		printf("该字符串是回文数\n");
	else
		printf("该字符串不是回文数\n");
		
	return 0;
}