#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,i,sum=0;
	double avg;
	scanf("%d",&n);
	if(n>=1&&n<=10000)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			if(abs(num)<=10000)
				sum=sum+num;
		}
		avg=1.0*sum/n;
		printf("%d %.5lf",sum,avg);
	}
	
	return 0;
}
