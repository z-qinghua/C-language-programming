#include<stdio.h>
int main(){
	int L,M;
	int a[10001],b[201],i,j;
	scanf("%d%d",&L,&M);
	for(i=0;i<2*M;i+=2){
		scanf("%d%d",&b[i],&b[i+1]);
	}
	for(j=0;j<=L;j++){
		a[j]=j;//0��1��2��������L��������һ������
	}
	int r,s;
	for(i=0;i<2*M;i+=2){
		r=b[i];//������� 
		s=b[i+1];//�����յ� 
		for(j=r;j<=s;j++){
			a[j]=-1;
		}
	}
	int sum=0;
	for(j=0;j<=L;j++){
		if(a[j]!=-1){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
