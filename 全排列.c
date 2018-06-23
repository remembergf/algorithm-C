//使用深度优先搜索的方法来进行数的全排列输出 

#include<stdio.h>
int a[10],book[10],n;

 void dfs(int step)
 {
 	int i;
 	if(step==n+1)
 	{
		for(i=1;i<n+1;i++)
		{
			printf("%d ",a[i]);
		} 	
		printf("\n");
		return;
 	}
 	for(i=1;i<n+1;i++)
 	{
		if(book[i]==0)
		{
			a[step]=i;
			book[i]=1;
			dfs(step+1);
			book[i]=0;
		}	 	
	 }
	 return;
 }
 int main()
 {
 	printf("请输入全排列的最大数:");
	scanf("%d",&n);
	dfs(1);
	return 0;	
 }