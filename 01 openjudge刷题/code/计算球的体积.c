#include<stdio.h>
#define pi 3.14
int main()
{
	double r,v;
	scanf("%lf",&r);
	v=4/3.0*pi*r*r*r;//����4/3ȡ�õ�ֵΪ���ͣ�����������Ҫ�õ�һ��������������д��4/3.0ʹ�ý��Ϊ���������Ա�õ����յ���ȷ��� 
	printf("%.2lf",v);	
	return 0;
}
