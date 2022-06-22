#include<stdio.h> 
#include<string.h>
int main(){
	int i,N;
	scanf("%d",&N);
	char str1[100],	str2[100];
	int a[100];
	for(i=0;i<N;i++){
		scanf("%s",str1);
		scanf("%s",str2);
		if((str1[0]=='R'&&str2[0]=='S')||(str1[0]=='S'&&str2[0]=='P')||(str1[0]=='P'&&str2[0]=='R'))
			a[i]=1;	
		else if(strcmp(str1,str2)==0)//(str1[0]==str2[0])
			a[i]=0;
		else
			a[i]=-1;
	}
	for(i=0;i<N;i++){
		if(a[i]==1)
			printf("Player1\n");
		else if(a[i]==0)
			printf("Tie\n");
		else if(a[i]==-1)
			printf("Player2\n") ;
	}
	return 0;
}
