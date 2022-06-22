#include<stdio.h>

int main()
{
	int x=0,y=6;
	do
	{
		while(--y)
		x++;
	}while(y--);
	printf("%d,%d",x,y);
	return 0;
 } 
