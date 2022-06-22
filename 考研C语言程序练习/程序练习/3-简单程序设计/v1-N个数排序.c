//现对N个数进行排序

/*
1-用一个数组存储输入的数据
2-用函数实现从小到大排序
3-实现从大到小和从小到达两种输出 
*/

#include<stdio.h>
int fun(int a[10])
{
	int i,j,t;
	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++)
			if(a[i]>a[j])
		{
			t=a[i];a[i]=a[j];a[j]=t;
		}
	/*千万注意if中的花括号*/
}

int main()
{
	int a[10],i;
	printf("原数据顺序:\n");
	for(i=0;i<10;i++)
	{
		a[i]=rand()%10;
	printf("%3d",a[i]);
	}
	printf("\n"); 
	fun(a);
	printf("从小到大输出：\n");
	for(i=0;i<10;i++)
	{
		printf("%3d",a[i]);
		if(i==9)
			printf("\n");
	}
	printf("从大到小输出:\n");
	for(i=9;i>=0;i--)
		printf("%3d",a[i]);
		 
}
