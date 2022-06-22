//输出杨辉三角形

//杨辉三角形各元素的值是（a+b）^n的各项系数 

/*
1-第一列和对角线为1
2-其余元素为上一行依次两个元素的和 
3-二维数组存储各元素的值 
*/

#include<stdio.h>
#define LINE 10
int main(){
	int a[LINE][LINE],i,j;
	for(i=0;i<LINE;i++){
			a[i][0]=1;	//	使第一列元素值为 1 
			a[i][i]=1;	// 使对角线元素值为 1 
		}
	for(i=2;i<LINE;i++)	//从第三行开始处理 
		for(j=1;j<i;j++){	//从第二列开始处理 
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
	for(i=0;i<LINE;i++){
		for(j=0;j<=i;j++){
			printf("%-5d",a[i][j]);
		}	
		printf("\n");//换行输出 
	}
	
	return 0;
} 
