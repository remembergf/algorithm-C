#include<stdio.h>
int main()
{
	int q[30]={0,6,3,1,7,5,8,9,2,4};
	int head=1;
	int tail=10;
	while(head<tail)
	{
		//打印队首信息并将队首出列
		printf("%d ",q[head]);
		head++;
		//将出列的放到队尾
		q[tail]=q[head];
		tail++;
		 
	 	//再次出列
		head++; 
	}
	
	return 0;
}