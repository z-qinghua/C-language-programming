//编写一个C程序,运行时输人a,b,c三个值,输出其中值最大者
/*
1-先对前两个数进行比较，把较大值赋给最大值
2-把最大值和第三个数比较，较大者赋给最大值 
*/

#include<stdio.h>
int main()
{
	int a,b,c,max;
	scanf("%d,%d,%d",&a,&b,&c);
	max=a>b?a:b;
	if(max<c)
	{
		max=c;
	}
	printf("the max is:%d",max);
	return 0;
}
