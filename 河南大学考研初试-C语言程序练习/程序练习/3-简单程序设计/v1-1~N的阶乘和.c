//用函数实现1！+2！+3！+……+N！
/*
1-用函数实现功能阶乘
2-在循环中调用函数 
*/
#include<stdio.h>

int fac(int x)
{
	int i,sum=1;
	for(i=1;i<=x;i++)
	{
		sum=sum*i;
	}
	return sum;
 } 
 void main()
 {
 	int i,n,sum=0;
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		sum=sum+fac(i);
	 }
	 printf("%d",sum);
 }
