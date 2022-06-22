//求ax^2+bx+c=0方程的根。a,b,c由键盘输入，设b2-4ac>0

/*
1-注意进行b^2-4ac>=0的判断
2-利用math.h中的函数求解 
*/ 

#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,d,x1,x2;
	printf("enter three numbers!\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	/*注意进行a是否为0的判断*/
	if(a==0)
		printf("x1=x2=%f\n",-c/b);		
	else if(d>=0)
	{
		x1=(b+sqrt(d))/(-2*a);
		x2=(b-sqrt(d))/(-2*a);
		printf("方程的根为:\nx1=%f\nx2=%f\n",x1,x2);
	}
	else
		printf("the numbers are error!");
		
 } 
