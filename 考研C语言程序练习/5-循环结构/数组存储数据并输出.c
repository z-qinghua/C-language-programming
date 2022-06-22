//依次把1,2,3,4,5赋值给数组每个元素并显示

/*
1-定义一个数组
2-用for循环结构实现连续输入 
*/

#include<stdio.h>

void main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("请输入a[%d]：",i);
		scanf("%d",&a[i]);
	}
	i=0;
/*
while(i<5)
	{
		printf("a[%d]=%2d\t",a[i]);
		i++;
	}
*/	

//用for语句

	for(i;i<5;i++)
	{
		printf("a[%d]=%2d\t",i,a[i]);
	 } 
}
