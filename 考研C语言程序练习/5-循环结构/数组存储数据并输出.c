//���ΰ�1,2,3,4,5��ֵ������ÿ��Ԫ�ز���ʾ

/*
1-����һ������
2-��forѭ���ṹʵ���������� 
*/

#include<stdio.h>

void main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("������a[%d]��",i);
		scanf("%d",&a[i]);
	}
	i=0;
/*
while(i<5)
	{
		printf("a[%d]=%2d\t",a[i]);
		i++;
	}
*/	

//��for���

	for(i;i<5;i++)
	{
		printf("a[%d]=%2d\t",i,a[i]);
	 } 
}
