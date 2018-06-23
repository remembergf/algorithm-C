#include<stdio.h>

struct student{
	char name[21];
	int score;
};

int main(){
	struct student a[10],t;
	int i,j,k;
	printf("请输入要排序的个数：");
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%s %d", &a[i].name,&a[i].score);
	for(i=0;i<k-1;i++)
		for(j=0;j<k-i-1;j++)
		{
			if(a[i].score > a[i+1].score)
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
		
		printf("排序后的顺序为：\n");
		
		for(i=0;i<k;i++)
		{
			printf("%s %d\n",a[i].name,a[i].score);
		}
		return 0;
}