#include<stdio.h>
int main()
{
	int n,i,num,max=0,min=1000;
	scanf("%d",&n);
	if(n>=1&&n<=10000){
		for(i=1;i<=n;i++){
			scanf("%d",&num);
			if(num>=0&&num<=1000){
				if(num>max)
					max=num;
				if(num<min)
					min=num;
			}
				
		}	
		printf("%d",max-min);
	}

	return 0;
}
