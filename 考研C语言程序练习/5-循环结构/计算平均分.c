//����5��ѧ���ķ�������ʾ���ǵ��ֺܷ�ƽ����
/*
1-��iͳ��������sumͳ���ܷ֣�grade��¼������avg��ʾƽ���֣�
2-��forѭ��ʵ�� 
*/

#include<stdio.h>
void main()
{
	int i;
	double sum=0,grade,avg;
	for(i=1;i<=5;i++)
	{
		printf("������%d�ŷ�����",i);
		scanf("%lf",&grade);
		sum=sum+grade;
	}
	avg=sum/i;
	printf("�ܷ�Ϊ��%lf��ƽ����Ϊ��%lf",sum,avg);
}
