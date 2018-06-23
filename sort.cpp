#include<stdio.h>
int main()
{
	int a[100],i,j,k,t;
	printf("排序的个数有：");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=k-1;i++)
		for(j=1;j<k-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]= t;
			}
		} 
	for(i=1;i<=k;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}