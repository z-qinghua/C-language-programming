//����5��ѧ���ķ�������ʾ�����е���߷ֺ���ͷ�

/*
1-����һ������������ѧ������
2-��for���Ƚϵó����ֵ����Сֵ 
*/

#include<stdio.h>
void main()
{
	int i,j;
	double a[5];
	for(i=0;i<5;i++)
	{
		printf("����%d��ѧ��������",i+1);
		scanf("%lf",&a[i]);
	}
	double max=a[0],min=a[0];
	for(i=0;i<5;i++)
	{
		
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	printf("��߷�Ϊ��%lf\n��ͷ�Ϊ��%lf",max,min);
}
