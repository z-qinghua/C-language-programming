//��1*2*3*4*5

/*
1-�ú���ʵ�ָù���
2-�����������ò���� 
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
