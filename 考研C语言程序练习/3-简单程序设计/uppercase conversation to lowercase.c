//给定一个大写字母，要求要小写字母输出
 
#include<stdio.h>

int main()
{
	char x,y;
	printf("please enter a char from A to Z!\n");
	scanf("%c",&x);
	y=x+32;
	printf("输入的字母转化为小写字母为：%c",y);
	return 0;
}
