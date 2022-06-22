//输出所有“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于数的本身

/*
1-定义一个变量存储这个三位数 
2-定义三个变量存储这个三位数的各位数字
3-进行判断 
*/

#include<stdio.h>

void main()
{
	int s ,x,y,z;
	printf("The figures are:");
	for(s=100;s<=999;s++)
	{
		x=s/100;
		y=(s/10)%10;
		z=s%10;
		if(x*x*x+y*y*y+z*z*z==s)
			printf("%d\t",s);
	}
 } 
