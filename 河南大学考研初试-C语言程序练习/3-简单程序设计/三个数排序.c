//输入3个整数，按由小到大的顺序输出

/*
1-使用选择排序算法 
2-使用冒泡排序算法 
 
*/ 

#include<stdio.h>
void main()
{
	float a[3];
	int i;
	printf("输入三个数：");
	for(i=0;i<3;i++)
		scanf("%f",&a[i]);
	for(i=0;i<3;i++)
		printf("%5.2f",a[i]);


//1-使用选择排序算法 ，3个数比较两次 
	for(i=0;i<2;i++)
	{
		int j,t;
		for(j=i+1;j<3;j++)
		if(a[i]>a[j])
			{
				t=a[i];a[i]=a[j];a[j]=t;
			}
	}

/*	

//2-使用冒泡排序算法。3个数，比较两次 
for(i=0;i<3-1;i++){
	int j,t;
	//大的数放后面 
	for(j=0;j<2-i;j++){
		if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
} 

*/
	
//输出 
printf("\n");
for(i=0;i<3;i++)
	printf("%5.2f",a[i]);
}
