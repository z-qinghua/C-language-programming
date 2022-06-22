#include<stdio.h> 
int main()
{
	int i,n,L,R,num=0;
	scanf("%d%d",&L,&R);
	for(i=L;i<=R;i++){
		n=i;
		while(n){
			if(n%10==2)
				num++;
			n=n/10;		
		}
	}
	printf("%d",num);
	return 0;
}
