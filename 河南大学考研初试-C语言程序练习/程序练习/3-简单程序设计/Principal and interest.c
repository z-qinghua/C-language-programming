/*��������Ϣ����1000Ԫ�����һ�ꡣ��3�ַ�����ѡ��
��1�����ڣ�������Ϊr1��0.0036��
��2��һ���ڶ��ڣ�������Ϊr2��0.0225��
��3�������ΰ��궨�ڣ�������Ϊr3��0.0198��
��ֱ�����һ���3�ַ������õ��ı�Ϣ��*/

/*
��switchʵ�ַ�ʽѡ�� 
*/

#include<stdio.h>
double sum(double x)
{
	int num;
	double sum,r1=0.0036,r2=0.0225,r3=0.0198;
	printf("input the num between 1 to 3!\n");

	printf("%lf\n",x*(1+r1));
	scanf("%d",&num);
	switch(num)
	{
		case 1:sum=x*(1.0+r1); break;
		case 2:sum=x*(1+r2);break;
		case 3:sum=2*((x/2.0)*(1+r3)); break;
		default:printf("please input a right num!");
	}
	return sum;
}
int main()
{
	double i=1000;
	double cash_and_benfit;
	cash_and_benfit=sum(i);
	printf("the sum is:%lf",cash_and_benfit);
	return 0;
 } 
