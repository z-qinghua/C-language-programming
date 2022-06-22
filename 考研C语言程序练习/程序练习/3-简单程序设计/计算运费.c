/*
运输公司对用户计算运输费用。路程越远，运费越低。标准如下。
S<250 没有折扣
250<=s<500 2%折扣
500<=s<1000 5%折扣
1000<=s<2000 8%折扣
2000<=s<3000 10%折扣
3000<=s 15%折扣
*/

/*
1-用if结构进行选择 
*/
#include<stdio.h>
void main()
{
	double s,p,w,d,sum;
	printf("input the price,weight,s :");
	scanf("%lf%lf%lf",&s,&p,&w);
	if(s<250)
		d=0;
	else if(s>=250 && s<500)
		d=2;
	else if(s>=500 && s<1000)
		d=5;
	else if(s>=1000 && s<2000)
		d=8;
	else if(s>=2000 && s<3000)
		d=10;
	else
		d=15;
	sum=p*w*s*(1-d/100);
	printf("总价格应为%lf\n",sum);
		
 } 
