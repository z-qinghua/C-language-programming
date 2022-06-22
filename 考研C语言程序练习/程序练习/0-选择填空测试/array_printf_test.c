#include<stdio.h>
int main()
{
	int num[][3]={{1,2},3,4,5,6},i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%2d",num[i][j]);	
		printf("\n");
	}

 } 
