//写一函数，将一个3*3整数矩阵转置

/*
1-用一个二位数组存放矩阵；
2-交换矩阵行和列存放在另一个数组中
3-输出这个数组 
*/

#include<stdio.h>
void main()
{
	int a[3][3],b[3][3];
	int i,j;
	printf("原本的矩阵\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		{
			a[i][j]=rand()%10;	
			printf("%2d",a[i][j]);
			
		}
	printf("\n");	
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("转置后的矩阵\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%2d",a[i][j]);
		}
	printf("\n");
	}
}
