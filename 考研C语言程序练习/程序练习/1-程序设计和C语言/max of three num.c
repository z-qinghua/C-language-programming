//��дһ��C����,����ʱ����a,b,c����ֵ,�������ֵ�����
/*
1-�ȶ�ǰ���������бȽϣ��ѽϴ�ֵ�������ֵ
2-�����ֵ�͵��������Ƚϣ��ϴ��߸������ֵ 
*/

#include<stdio.h>
int main()
{
	int a,b,c,max;
	scanf("%d,%d,%d",&a,&b,&c);
	max=a>b?a:b;
	if(max<c)
	{
		max=c;
	}
	printf("the max is:%d",max);
	return 0;
}
