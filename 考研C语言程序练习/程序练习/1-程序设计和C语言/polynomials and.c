//求多项式1-1/2+1/3-1/4…+1/99-1/100

/*
1-分别定义分子、分母、符号、和数
2-分母为偶数时分子为负数 
*/

#include<stdio.h>
int main()
{
	int sign=1;
	double term,demo,sum=1.0;
	for(demo=2.0;demo<=100;demo++)
	{
		sign = -sign;
		term=sign/demo;
		sum=sum+term;
		}	
	printf("the sum is:%lf",sum);
	return 0;
}

