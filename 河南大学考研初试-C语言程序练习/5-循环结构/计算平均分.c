//输入5名学生的分数并显示它们的总分和平均分
/*
1-用i统计人数，sum统计总分，grade记录分数。avg表示平均分；
2-用for循环实现 
*/

#include<stdio.h>
void main()
{
	int i;
	double sum=0,grade,avg;
	for(i=1;i<=5;i++)
	{
		printf("请输入%d号分数：",i);
		scanf("%lf",&grade);
		sum=sum+grade;
	}
	avg=sum/i;
	printf("总分为：%lf，平均分为：%lf",sum,avg);
}
