//小哼买书的实例

#include<stdio.h>

int main()
{
	int a[101],i,j,k,t;
	printf("请输入小哼买书的人数:");
	scanf("%d",&k);
	printf("请输入每个书本的ISBN编号:");
	for(i=1;i<=k;i++)
		scanf("%d",&a[i]);
	
	//对书本编号来进行排序
	for(i=1;i<=k-1;i++)
		for(j=1;j<=k-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	//输出书本的编号  ---去重
	printf("输出排序、去重之后的代码为:\n");
	for(i=1;i<=k;i++)
	{
		if(a[i]!=a[i+1])
			printf("%d ",a[i]);
	}	
	
	return 0; 
}