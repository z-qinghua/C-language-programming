#include<stdio.h>
int main()
{
	int n,i;
	int a,b,max=0,sum=0;
	scanf("%d",&n);
	if(n>0&&n<100){
		for(i=1;i<=n;i++){
			scanf("%d%d",&a,&b);
			if((a>=90&&a<=140)&&(b>=60&&b<=90)){
				sum++;
				if(sum>max)
					max=sum;
			}
			else
				sum=0;
		}
			printf("%d",max);
	}
	return 0;
}
