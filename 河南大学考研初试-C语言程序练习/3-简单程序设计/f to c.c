//进行华氏度到摄氏度的转换
/*
1-注意变量类型 
*/

#include<stdio.h>
int main()
{
	double c,f;
	scanf("%lf",&f);
	c=5.0/9*(f-32);
	printf("c=%lf",c);
	return 0;
 } 
