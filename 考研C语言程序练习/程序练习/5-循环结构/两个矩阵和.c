//����2��3�о���ĺ�

/*
1-��������2��3�ж�ά���� 
2-��rand����������ǰ���������ʼ��
3-��ǰ����������ӵ�ֵ�洢�ڵ��������� 
*/

#include<stdio.h>
void main()
{
	int a[2][3],b[2][3],c[2][3];
	int i,j;
	puts("��һ������");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=rand()%9+1;
			b[i][j]=rand()%9+1;
			printf("%2d",a[i][j]); 
		}
	printf("\n");	
	}	
	puts("�ڶ�������");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%2d",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	puts("�����"); 
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		{
			printf("%3d",c[i][j]);
			if(j==2)
			{
				printf("\n");
			}
		}
}
