#include<stdio.h>
int main()
{
	char *s={"ABC"};
	do 
	{
		printf("%d",*s%10);
		s++;
	}while(*s);
	return 0;
 } 
