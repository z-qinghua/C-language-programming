//求两个整数中的较大者
/*解题思路：
1-用一个函数实现比较得出两者中的较大者
2-在main函数调用此函数并输出结果*/

#include<stdio.h>
int max(int x,int y)
{
	return x>y?x:y;
 } 
 
int main()
{
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("The max mum is:%d",c);
}
