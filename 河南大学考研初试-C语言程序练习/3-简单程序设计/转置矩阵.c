//дһ��������һ��3*3��������ת��

/*
1-��һ����λ�����ž���
2-���������к��д������һ��������
3-���������� 
*/

#include<stdio.h>
void main()
{
	int a[3][3],b[3][3];
	int i,j;
	printf("ԭ���ľ���\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		{
			a[i][j]=rand()%10;	
			printf("%2d",a[i][j]);
			
		}
	printf("\n");	
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("ת�ú�ľ���\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%2d",a[i][j]);
		}
	printf("\n");
	}
}
