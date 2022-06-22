//对数组中的全部元素进行倒序排列

/*
1-定义一个数组，并初始化
2-利用for语句实现倒叙排列 
*/

#include<stdio.h>

void main()
{
	int a[5],i,j;
	for(i=0;i<5;i++)
	{
		a[i]=rand()%100+1;
		printf("a[%d]=%d\t",i,a[i]);
	}
	printf("\n");
	for(i=0;i<(5/2);i++)
	{
		int j=a[i];
		a[i]=a[4-i];
		a[4-i]=j;
	}
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}
 } 
