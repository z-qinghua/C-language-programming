//�������е�ȫ��Ԫ�ؽ��е�������

/*
1-����һ�����飬����ʼ��
2-����for���ʵ�ֵ������� 
*/

#include<stdio.h>

void main()
{
	int a[5],i,j;
	for(i=0;i<5;i++)
	{
		a[i]=rand()%100+1;
		printf("a[%d]=%d\t",i,a[i]);
	}
	printf("\n");
	for(i=0;i<(5/2);i++)
	{
		int j=a[i];
		a[i]=a[4-i];
		a[4-i]=j;
	}
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}
 } 
