#include<stdio.h>
int main()
{
	int n,x,y;
	scanf("%d%d%d",&n,&x,&y);
	if(y/x<10) 
		if(y%x==0)
			printf("%d",n-(y/x));
		else
			printf("%d",n-(y/x+1));
	else
		printf("0"); 
	return 0;
}
//ע�⣺Ҫ��������ƻ���� 
