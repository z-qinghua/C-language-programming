//求1*2*3*4*5

/*
1-用函数实现该功能
2-在主函数调用并输出 
*/ 
#include<stdio.h>
int  factorial(int i)
{
	int j,sum=1;;
	for( j=1;j<=i;j++)
	{
	
		sum *= j;
	}
	return sum;
}

int main()
{
	int x,sum=0;
	scanf("%d",&x);
	sum = factorial(x);
	printf("%d",sum);
	return 0;
}
