/*计算存款利息。有1000元，想存一年。有3种方法可选：
（1）活期，年利率为r1，0.0036；
（2）一年期定期，年利率为r2，0.0225；
（3）存两次半年定期，年利率为r3，0.0198；
请分别计算出一年后按3种方法所得到的本息和*/

/*
用switch实现方式选择 
*/

#include<stdio.h>
double sum(double x)
{
	int num;
	double sum,r1=0.0036,r2=0.0225,r3=0.0198;
	printf("input the num between 1 to 3!\n");

	printf("%lf\n",x*(1+r1));
	scanf("%d",&num);
	switch(num)
	{
		case 1:sum=x*(1.0+r1); break;
		case 2:sum=x*(1+r2);break;
		case 3:sum=2*((x/2.0)*(1+r3)); break;
		default:printf("please input a right num!");
	}
	return sum;
}
int main()
{
	double i=1000;
	double cash_and_benfit;
	cash_and_benfit=sum(i);
	printf("the sum is:%lf",cash_and_benfit);
	return 0;
 } 
