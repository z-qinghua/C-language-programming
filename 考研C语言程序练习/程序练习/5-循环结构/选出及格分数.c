//输入5名学生的分数并显示出60分以上的一览表
/*
1-定义两个数组，一个存放所有学生分数，一个存放及格学生分数下标 
2-for语句遍历数组，if语句比较 
*/

#include<stdio.h>

#define NUM 5	//学生人数

void main()
{
	int i,j=0;
	int sum=0;//及格学生人数
	int a[NUM],b[NUM];
	for(i=0;i<NUM;i++)
	{
		printf("输入%d号学生分数；",i+1);
		scanf("%d",&a[i]);
		if(a[i]>=60)
		{
			b[j++]=i;//记录及格学生下标 
		}
	 } 
	 printf("及格学生分数一览表：\n"); 
	 for(i=0;i<j;i++)
	 {
	 	printf("%d号（%d分）\t",b[i]+1,a[b[i]]);
	 }
 } 
