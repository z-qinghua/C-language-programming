//计算出1000以内的质数（第1版）

/*
1-一个大于1的自然数，除了1和本身，不能被其他自然整数整除
2-if筛选范围
3-循环结构遍历，选出质数 
*/

#include<stdio.h>
#define NUM 1000
void main()

{
	int num,i,ptr=0; 
	for(num=2;num<=NUM;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)	//存在除1和本身能整除的数，结束内循环，进行外循环 
			break;
		}
		if(i==num)			//直到最后也未被整除 
		{
			printf("%4d",i);
			ptr+=1;
		}
			
	}
	puts("\n质数个数：") ;
	printf("\n%d",ptr);

}
