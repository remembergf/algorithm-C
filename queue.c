#include<stdio.h>
int main()
{
	int q[30]={0,6,3,1,7,5,8,9,2,4};
	int head=1;
	int tail=10;
	while(head<tail)
	{
		//��ӡ������Ϣ�������׳���
		printf("%d ",q[head]);
		head++;
		//�����еķŵ���β
		q[tail]=q[head];
		tail++;
		 
	 	//�ٴγ���
		head++; 
	}
	
	return 0;
}