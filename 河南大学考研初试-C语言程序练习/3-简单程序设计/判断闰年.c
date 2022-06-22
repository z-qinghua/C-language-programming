//写一程序，判断某一年是否为闰年
/*
1-能整除4不能整除100 || 能整除400 的为闰年 
2-用if结构进行判断输出 
*/

#include<stdio.h>
void main()
{
	int year;
	printf("input a year :");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)||year%400==0)
		printf("%d是闰年\n",year);
	else
		printf("%d不是闰年\n",year);
 } 


