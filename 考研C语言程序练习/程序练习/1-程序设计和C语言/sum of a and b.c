//求两个整数之和

/*解题思路
1-定义三个变量a,b,sum；注意sum要初始化
2-通过调用函数scanf进行数值输入 
3-sum存放两个整数之和
*/

#include<stdio.h>
int main()
{
	int a,b,sum=0;
	scanf("%d",&a);
	scanf("%d",&b);
	sum=a+b;
	printf("The sum is:%d",sum); 
	return 0;
 } 
