#include<stdio.h>

int a[100];

void quicksort(int left, int right)
{
	int temp,i,j,t;
	if(left > right)
		return;
	
	temp=a[left];
	i=left;
	j=right;
	
	while(i!=j)
	{
		while(a[j]>=temp && i<j)
			j--;
		while(a[i]<=temp && i<j)
			i++;
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		} 
	}
	a[left]=a[i];
	a[i]=temp;
	
	//�ݹ���������㷨
	quicksort(left,i-1);
	quicksort(i+1,right); 
}

int main()
{
	int i,n;
	printf("����������ĸ���:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(0,n-1);
	printf("�����ĸ���Ϊ:"); 
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);	
	}
	
	return 0;
}