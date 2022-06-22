//Õ·×ªÏà³ý·¨ 
#include<stdio.h> 
int main()
{
	int a,b,r,temp;
	scanf("%d%d",&a,&b);
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	while(1){
		r=a%b;
		if(r!=0){
			a=b;
			b=r;
		}
		else
			break;
	}
	printf("%d",b);
	return 0;
}
