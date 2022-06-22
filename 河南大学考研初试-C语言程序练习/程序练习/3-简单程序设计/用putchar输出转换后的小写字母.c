//大写字母，把它转换位小写字母，然后用putchar函数输出该小写字母

#include<stdio.h>
 
void main()
{
	char x,y;
	x=getchar();
	y=x+32;
	putchar(y);
}
