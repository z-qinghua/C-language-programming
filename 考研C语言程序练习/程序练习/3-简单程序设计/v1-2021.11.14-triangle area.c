//给出三角形的三边长，求三角形面积

/*
1-定义三条边长变量、面积变量s
2-用海伦公式求出面积并存在面积变量s并输出 
*/
#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,sum=0.0,s;
	printf("输入三个数！\n");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a+b>c && a+c>b && b+c>a)
{
	sum=(a+b+c)/2;
	s=sqrt(sum*(sum-a)*(sum-b)*(sum-c));
	printf("a=%f\tb=%f\tc=%f\n",a,b,c);
	printf("三角形的面积为：%f",s); 
}
	else
		printf("the number is error!");
	return 0;
}
