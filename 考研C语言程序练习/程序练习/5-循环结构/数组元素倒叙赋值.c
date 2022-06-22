//把数组中的全部元素倒序赋值到另一个数组中

/*
1-从数组中按下标从小到大取元素值，赋给零一数组中下标从大到小赋值 
*/

#include<stdio.h>

void main()
{
	int a[]={1,2,3,4};
	int b[4],i;
	for(i=0;i<4;i++)
	{
		b[i]=a[3-i];
	}
	i=0;
	while(i<4)
	{
		printf("%2d",b[i]);
		i++;
	}
}
