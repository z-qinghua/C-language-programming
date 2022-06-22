#include<stdio.h>
int main()
{
	int m,M,N,X;
	m=0;
	scanf("%d%d%d",&M,&N,&X);
	while(X>0){
		X--;
		m=m+N;
		if(m>=M)
		{
			N=N+M/N;
			m=0;//体力值清零 
		}	
	}
	printf("%d",N);
	return 0;
}
