#include<stdio.h>
int main(){
	int sum,arr[100],i;
	scanf("%d",&sum);
		int a=0,b=0,c=0,d=0;
	for(i=0;i<sum;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<sum;i++){
		if(arr[i]>0&&arr[i]<=18){
			a++;
		}
		else if(arr[i]>=19&&arr[i]<=35){
			b++;
		}
		else if(arr[i]>=36&&arr[i]<=60){
			c++;
		}
		else
			d++;
	}
	printf("%0.2f%%\n%.2f%%\n%.2f%%\n%.2f%%\n",100.0*a/sum,100.0*b/sum,100.0*c/sum,100.0*d/sum);
	return 0;
}
