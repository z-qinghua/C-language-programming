#include<stdio.h>	
int pell[1000001],a[100000];//������Ҫ���������������� 
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		scanf("%d",&k);
		pell[1]=1;
		pell[2]=2;
		for(i=3;i<=k;i++){
			pell[i]=pell[i-2]+pell[i-1]*2;//an=2*an-1+an-2
			pell[i]%=32767;//ÿ�ζ���������ȡ�࣬��ֹ���� 
		}
		a[j]=pell[k];
	}
	for(i=1;i<=n;i++)
		printf("%d\n",a[i]);
	return 0;
}//ע�������鶨�����������ڲ������ 
