//输入5名学生的分数并显示出其中的最高分和最低分

/*
1-定义一个数组存放五名学生分数
2-用for语句比较得出最大值、最小值 
*/

#include<stdio.h>
void main()
{
	int i,j;
	double a[5];
	for(i=0;i<5;i++)
	{
		printf("输入%d号学生分数：",i+1);
		scanf("%lf",&a[i]);
	}
	double max=a[0],min=a[0];
	for(i=0;i<5;i++)
	{
		
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	printf("最高分为：%lf\n最低分为：%lf",max,min);
}
