//�ú���ʵ��1��+2��+3��+����+N��
/*
1-�ú���ʵ�ֹ��ܽ׳�
2-��ѭ���е��ú��� 
*/
#include<stdio.h>

int fac(int x)
{
	int i,sum=1;
	for(i=1;i<=x;i++)
	{
		sum=sum*i;
	}
	return sum;
 } 
 void main()
 {
 	int i,n,sum=0;
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		sum=sum+fac(i);
	 }
	 printf("%d",sum);
 }
