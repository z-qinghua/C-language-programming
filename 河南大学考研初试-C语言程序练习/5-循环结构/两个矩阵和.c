//计算2行3列矩阵的和

/*
1-定义三个2行3列二维数组 
2-用rand（）函数对前两个数组初始化
3-把前两个矩阵相加的值存储在第三个矩阵 
*/

#include<stdio.h>
void main()
{
	int a[2][3],b[2][3],c[2][3];
	int i,j;
	puts("第一个矩阵");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=rand()%9+1;
			b[i][j]=rand()%9+1;
			printf("%2d",a[i][j]); 
		}
	printf("\n");	
	}	
	puts("第二个矩阵");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	puts("矩阵和"); 
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		{
			printf("%3d",c[i][j]);
			if(j==2)
			{
				printf("\n");
			}
		}
}
