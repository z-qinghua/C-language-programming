//�ֶ�N������������

/*
1-��һ������洢���������
2-�ú���ʵ�ִ�С��������
3-ʵ�ִӴ�С�ʹ�С����������� 
*/

#include<stdio.h>
int fun(int a[10])
{
	int i,j,t;
	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++)
			if(a[i]>a[j])
		{
			t=a[i];a[i]=a[j];a[j]=t;
		}
	/*ǧ��ע��if�еĻ�����*/
}

int main()
{
	int a[10],i;
	printf("ԭ����˳��:\n");
	for(i=0;i<10;i++)
	{
		a[i]=rand()%10;
	printf("%3d",a[i]);
	}
	printf("\n"); 
	fun(a);
	printf("��С���������\n");
	for(i=0;i<10;i++)
	{
		printf("%3d",a[i]);
		if(i==9)
			printf("\n");
	}
	printf("�Ӵ�С���:\n");
	for(i=9;i>=0;i--)
		printf("%3d",a[i]);
		 
}
