//���������ε����߳��������������

/*
1-���������߳��������������s
2-�ú��׹�ʽ�������������������s����� 
*/
#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,sum=0.0,s;
	printf("������������\n");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a+b>c && a+c>b && b+c>a)
{
	sum=(a+b+c)/2;
	s=sqrt(sum*(sum-a)*(sum-b)*(sum-c));
	printf("a=%f\tb=%f\tc=%f\n",a,b,c);
	printf("�����ε����Ϊ��%f",s); 
}
	else
		printf("the number is error!");
	return 0;
}
