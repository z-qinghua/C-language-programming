#include<stdio.h> 
int main(){
	int n,m,i,j,arr[100][100],b[100][100];
	float avg;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
			b[i][j]=arr[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i!=0&&i!=n-1&&j!=0&&j!=m-1){
				avg=(arr[i][j]+arr[i-1][j]+arr[i+1][j]+arr[i][j-1]+arr[i][j+1])/5.0;
				b[i][j]=(int)(avg+0.5)>(int)avg?(int)avg+1:(int)avg;//�˴�����ֱ����arr�н����޸ģ���Ϊ��ı����ֵ�ļ��� 
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
