//�����ʽ1-1/2+1/3-1/4��+1/99-1/100

/*
1-�ֱ�����ӡ���ĸ�����š�����
2-��ĸΪż��ʱ����Ϊ���� 
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

