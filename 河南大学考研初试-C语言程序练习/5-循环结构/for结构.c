//在全系1000名学生中举行慈善募捐，当总数达到10万元时就结束，统计此时捐款人数以及平均每人捐款的数目。
/*
1-分别定义人数x,捐款数目amount、捐款总额total,平均每人捐款数目avg
2-用for循环解决累加 
*/

#include<stdio.h>
#define SUM 100000
void main()
{
	int x;
	double total=0,amount,avg;
	for(x=1;x<=1000;x++)
	{
		printf("please input amount :");
		scanf("%lf",&amount); 
		total+=amount;
		if(total>=SUM)
			break;//跳出并结束循环 
	}
	avg=total/x;
	printf("捐款人数为：%d,平均每人捐款的数目：%lf",x,avg);
 } 
