//有一阶跃函数y={-1(x<0);0(x=0);1(x>0),编译程序，输入一个x值，要求输出相应的y值
/*
1-用if语句进行判断 
*/

#include<stdio.h>
void main()
{
	int x,y;
	scanf("%d",&x);
	if(x<0)
		y=-1;
	else if(x==0)
		y=0;
	else
		y=1;
	printf("x=%d\ty=%d",x,y); 
}
