//汉诺塔递归：n个盘子从A移动到C，一次只能移动一个，大盘在下，小盘在上 

/*算法 
1-先将n-1个盘子从A移到B
2-然后可以将第n个盘子从A移动到C move(n,A,C)
3-我们再将n-2个盘子从B移到A
4-第n-1个移到C 
重复上面步骤 
*/ 

#include<stdio.h>
int m;
void hanoi(int n,char a,char b,char c){
	m++;//移动次数 
	if(n==1)		//一定要设置结束条件 
		printf("%c-->%c\n",a,c);
	else{
		hanoi(n-1,a,c,b);//n-1个塔移到B，C做辅助塔  
		printf("%c-->%c\n",a,c);//A柱上第n个盘子 直接移到C柱 ，此输出语句不能少 
		hanoi(n-1,b,a,c);//把B柱上n-1个盘子移到C柱 
	}
	
	
}
int main(){
	int n;
	while(1){
		m=0; 
		printf("输入塔数：");
		scanf("%d",&n);
		if(n<=0)
			printf("the data error!\n");
		else
			
			hanoi(n,'A','B','C');//n个塔移到C，B做辅助塔  
		printf("循环次数：%d\n",m);
		
	}
	return 0; 
}
 



