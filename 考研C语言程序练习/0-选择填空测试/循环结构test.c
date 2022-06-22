#include<stdio.h>
int main()
{
	char ch;
	/*通过while循环不断读入字符，当读入N时中断循环*/
	while((ch=getchar())!='N')
	printf("%c",ch);
	return;
 } 
