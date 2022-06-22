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
			//n和m也要转换循环输出 ，否则在矩阵不是方阵时输出会出错 
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
