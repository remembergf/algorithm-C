#include<stdio.h>

int main()
{
	int a[10],book[10],i,sum,total;
	total=0;
	for(a[1]=1;a[1]<10;a[1]++)
		for(a[2]=1;a[2]<10;a[2]++)
			for(a[3]=1;a[3]<10;a[3]++)
				for(a[4]=1;a[4]<10;a[4]++)
					for(a[5]=1;a[5]<10;a[5]++)
						for(a[6]=1;a[6]<10;a[6]++)
							for(a[7]=1;a[7]<10;a[7]++)
								for(a[8]=1;a[8]<10;a[8]++)
									for(a[9]=1;a[9]<10;a[9]++)
									{
										for(i=1;i<10;i++)
											book[i]=0;
										for(i=1;i<10;i++)
											book[a[i]]=1;
										sum=0;
										for(i=1;i<10;i++)
											sum+=book[i];
										if(sum==9 && a[1]*100+a[2]*10+a[3] + 
										a[4]*100+a[5]*10+a[6] == a[7]*100+a[8]*10+a[9])
										{
											total++;
											printf("%d%d%d+%d%d%d=%d%d%d\n",a[1],a[2],a[3]
											,a[4],a[5],a[6],a[7],a[8],a[9]);
										}
										
									}
									printf("�ܴ���Ϊ:%d",total/2);
									return 0;


}

