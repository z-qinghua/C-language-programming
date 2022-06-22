#include<stdio.h>
int main()
{
	float average(float array[],int n);
	float score1[5],score2[10],aver1,aver2;
	int i;
	printf("please input 5 numbers\n");
	for(i=0;i<5;i++)
	{
		scanf("%f",&score1[i]);
	}
	
	printf("please input 10 numbers\n");
	for (i=0;i<10;i++)
	{
		scanf("%f",&score2[i]);
	}
	aver1 = average(score1,5);
	aver2 = average(score2,10);
	printf("The average of class A is %5.2f\n",aver1);
	printf("The average of class B is %5.2f\n",aver2);
	return 0;
 } 
 
 float average(float array[],int n)
 {
 	float aver,sum = array[0];
 	int i;
 	for(i=1;i<n;i++)
 	{
 		sum +=array[i];
	 }
	 aver = sum/n;
	 return aver;
 }
