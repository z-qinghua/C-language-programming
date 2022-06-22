#include<stdio.h> 
int main()
{
	int N,arr[100],m;
	int i,sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
	for(i=0;i<N;i++){
		if(arr[i]==m)
			sum++;
	}
	printf("%d",sum);
	return 0;
}
