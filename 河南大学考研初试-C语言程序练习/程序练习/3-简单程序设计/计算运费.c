/*
���乫˾���û�����������á�·��ԽԶ���˷�Խ�͡���׼���¡�
S<250 û���ۿ�
250<=s<500 2%�ۿ�
500<=s<1000 5%�ۿ�
1000<=s<2000 8%�ۿ�
2000<=s<3000 10%�ۿ�
3000<=s 15%�ۿ�
*/

/*
1-��if�ṹ����ѡ�� 
*/
#include<stdio.h>
void main()
{
	double s,p,w,d,sum;
	printf("input the price,weight,s :");
	scanf("%lf%lf%lf",&s,&p,&w);
	if(s<250)
		d=0;
	else if(s>=250 && s<500)
		d=2;
	else if(s>=500 && s<1000)
		d=5;
	else if(s>=1000 && s<2000)
		d=8;
	else if(s>=2000 && s<3000)
		d=10;
	else
		d=15;
	sum=p*w*s*(1-d/100);
	printf("�ܼ۸�ӦΪ%lf\n",sum);
		
 } 
