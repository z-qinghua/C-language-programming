//根据输入年、月，判断该月有多少天

/*
1-对输入月份进行判断，正确则继续执行，否则结束运行
2-判断输入年份是否为闰年；
	1）闰年2月份为29天
	2）否则2月份为28天 
*/ 

#include<stdio.h>

void main()
{
	int month,year;
	printf("input the year and month:");
	scanf("%d%d",&year,&month);
	if(month<13&&month>0)
	{
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("31天");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
			printf("30天");break;
			case 2:
				if((year%4==0&&year%100!=0)||year%400==0)
					printf("29天");
				else
					printf("28天");
				break;
		}
	}
 } 
