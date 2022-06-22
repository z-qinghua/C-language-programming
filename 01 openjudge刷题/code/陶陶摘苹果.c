#include<stdio.h>
int main(){
	int arr[10];
	int i,height,sum=0;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&height);
	for(i=0;i<10;i++){
		if((height+30)>=arr[i])
		sum++;
	}
	printf("%d",sum);
	return 0;
}
