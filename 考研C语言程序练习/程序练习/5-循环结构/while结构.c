//求1+2+3+…+100

/*
1-用while实现 


#include<stdio.h>

void main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum=sum+i;
		i++;
	}
	printf("%d\n",sum);
}
*/

/*
2-用do-while结构实现 
*/

#include<stdio.h>
void main()
{
	int i=1,sum=0;
	do{
		sum=sum+i;
		i++;
	}while(i<=100);
	printf("%d",sum);
 } 

 
