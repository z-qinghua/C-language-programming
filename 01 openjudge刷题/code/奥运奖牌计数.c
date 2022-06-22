#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	int jin=0,yin=0,tong=0;
	scanf("%d",&n);
	if(n>=1&&n<=17){
		for(i=1;i<=n;i++){
			scanf("%d%d%d",&a,&b,&c);
			jin+=a;
			yin+=b;
			tong+=c;
		}
		printf("%d %d %d %d",jin,yin,tong,jin+yin+tong);
	}
	return 0;
}
