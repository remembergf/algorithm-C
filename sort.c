//С�������ʵ��

#include<stdio.h>

int main()
{
	int a[101],i,j,k,t;
	printf("������С�����������:");
	scanf("%d",&k);
	printf("������ÿ���鱾��ISBN���:");
	for(i=1;i<=k;i++)
		scanf("%d",&a[i]);
	
	//���鱾�������������
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
	//����鱾�ı��  ---ȥ��
	printf("�������ȥ��֮��Ĵ���Ϊ:\n");
	for(i=1;i<=k;i++)
	{
		if(a[i]!=a[i+1])
			printf("%d ",a[i]);
	}	
	
	return 0; 
}