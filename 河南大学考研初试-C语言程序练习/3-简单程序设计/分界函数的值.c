//��һ��Ծ����y={-1(x<0);0(x=0);1(x>0),�����������һ��xֵ��Ҫ�������Ӧ��yֵ
/*
1-��if�������ж� 
*/

#include<stdio.h>
void main()
{
	int x,y;
	scanf("%d",&x);
	if(x<0)
		y=-1;
	else if(x==0)
		y=0;
	else
		y=1;
	printf("x=%d\ty=%d",x,y); 
}
