//�����������еĽϴ���
/*����˼·��
1-��һ������ʵ�ֱȽϵó������еĽϴ���
2-��main�������ô˺�����������*/

#include<stdio.h>
int max(int x,int y)
{
	return x>y?x:y;
 } 
 
int main()
{
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("The max mum is:%d",c);
}
