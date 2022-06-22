#include<stdio.h>
int main()
{
	int n,a,b,i;
	float x,y;
	int arr[20]={0};
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	x=1.0*b/a;
	for(i=1;i<n;i++){
		scanf("%d%d",&a,&b);
		y=1.0*b/a;
		if(y-x>0.05)
			arr[i]=1;	
		else if(x-y>0.05)
			arr[i]=-1;			
		else
			arr[i]=0;		
	}
	for(i=1;i<n;i++){
		if(arr[i]==1)
			printf("better\n");
		else if(arr[i]==-1)
			printf("worse\n");
		else
			printf("same\n");
	}
	return 0;
}
