/*一个数组十个元素，编写程序删除所有值为n的元素 
要求：
1）主函数完成n的输入，数组元素的输入以及删除后的数组输出
2）删除功能用子函数完成 
*/

#include<stdio.h>
#define N 10
int j=0;
//删除函数 
void  delete(int arr[],int n){
	int i,k;
	for(i=0;i<N-j;i++)
		if(arr[i]==n){
			for(k=i;k<N-j-1;k++)
				arr[k]=arr[k+1];
			j++;
			i--;//很重要，不能忽略，否则会跳过一个数没比较 
	}
	

}


int main(){
	int arr[10],i,n;
	
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);//当输入的数个数超过数组元素时，会被当作下面要输入的比较值 ，所以要按规范输入 
	for(i=0;i<N;i++)
		printf("%2d",arr[i]);
	printf("\n");
	printf("输入数值：");
	scanf("%d",&n);//
	delete(arr,n);
	for(i=0;i<N-j;i++)
		printf("%2d",arr[i]);
		return 0;
}
