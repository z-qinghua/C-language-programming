//把数组中的全部元素赋值到另一个数组中
/*
1-定义两个数组，给第一个数组赋随机值 
2-直接进行元素拷贝 
*/

#include<stdio.h>

void main()
{
	int a[5],b[5]; 
	int i=0,j=0;
	for(i;i<5;i++)
	{
		a[i]=rand()%100+1;//获得一个1-100的伪随机数，赋给数组元素 
		printf("a[%d]=%d\t",i,a[i]);
	 }
	 printf("\n");
	 i=0;
	 while(i<5)
	 {
	 	b[j++]=a[i];
	 	i++;
	  }
	  for(j=0;j<5;j++)
	  {
	  	printf("b[%d]=%d\t",j,b[j]);
	   } 
 } 
