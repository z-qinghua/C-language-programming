//дһ�����ж�ĳһ���Ƿ�Ϊ����
/*
1-������4��������100 || ������400 ��Ϊ���� 
2-��if�ṹ�����ж���� 
*/

#include<stdio.h>
void main()
{
	int year;
	printf("input a year :");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)||year%400==0)
		printf("%d������\n",year);
	else
		printf("%d��������\n",year);
 } 


