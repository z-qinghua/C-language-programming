//��ȫϵ1000��ѧ���о��д���ļ�裬�������ﵽ10��Ԫʱ�ͽ�����ͳ�ƴ�ʱ��������Լ�ƽ��ÿ�˾�����Ŀ��
/*
1-�ֱ�������x,�����Ŀamount������ܶ�total,ƽ��ÿ�˾����Ŀavg
2-��forѭ������ۼ� 
*/

#include<stdio.h>
#define SUM 100000
void main()
{
	int x;
	double total=0,amount,avg;
	for(x=1;x<=1000;x++)
	{
		printf("please input amount :");
		scanf("%lf",&amount); 
		total+=amount;
		if(total>=SUM)
			break;//����������ѭ�� 
	}
	avg=total/x;
	printf("�������Ϊ��%d,ƽ��ÿ�˾�����Ŀ��%lf",x,avg);
 } 
