#include<stdio.h>
int main(){
	int n,m,i,j,arr[100][100],b[100][100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[j][i]=arr[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			//n��mҲҪת��ѭ����� �������ھ����Ƿ���ʱ�������� 
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
