//��ax^2+bx+c=0���̵ĸ���a,b,c�ɼ������룬��b2-4ac>0

/*
1-ע�����b^2-4ac>=0���ж�
2-����math.h�еĺ������ 
*/ 

#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,d,x1,x2;
	printf("enter three numbers!\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	/*ע�����a�Ƿ�Ϊ0���ж�*/
	if(a==0)
		printf("x1=x2=%f\n",-c/b);		
	else if(d>=0)
	{
		x1=(b+sqrt(d))/(-2*a);
		x2=(b-sqrt(d))/(-2*a);
		printf("���̵ĸ�Ϊ:\nx1=%f\nx2=%f\n",x1,x2);
	}
	else
		printf("the numbers are error!");
		
 } 
