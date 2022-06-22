//数组元素做函数实参
#include<stdio.h>
int main()
{
	int max(int x,int y);//函数声明
	int a[10],i,max1,n;
	for (i = 0;i < 10;i++)
		scanf("%d",&a[i]);
	printf("\n");	
	max1 = a[0];
	n = 0;
	for(i = 1;i < 10;i++)
	{
	
		if(max(max1,a[i]) > max1)
		{
			max1 = max(max1,a[i]);
			n = i;
		}
	}
	printf("The largest number is %d\n It is the %dth number.\n",max1,n+1);
 } 
 int max(int x,int y)
 {	
 	return (x > y ? x:y);
 }
