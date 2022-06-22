#include<stdio.h>
int main(){
	int i,j,a[5][5];
	int max,k,flag,point;	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++){	
		max=a[i][0];//每循环一行初始化最大值 
		for(j=0;j<5;j++){
			if(a[i][j]>=max){
				max=a[i][j];
				point=j;//记录所在列 
			}	
		}
		flag=1;
		for(k=0;k<5;k++){
			if(a[k][point]<max)
				flag=0;
		}	
		if(flag!=0){
			printf("%d %d %d",i+1,point+1,max);
			return 0;			
		}
	
	}
	printf("not found");
	return 0;
}
