/*һ������ʮ��Ԫ�أ���д����ɾ������ֵΪn��Ԫ�� 
Ҫ��
1�����������n�����룬����Ԫ�ص������Լ�ɾ������������
2��ɾ���������Ӻ������ 
*/

#include<stdio.h>
#define N 10
int j=0;
//ɾ������ 
void  delete(int arr[],int n){
	int i,k;
	for(i=0;i<N-j;i++)
		if(arr[i]==n){
			for(k=i;k<N-j-1;k++)
				arr[k]=arr[k+1];
			j++;
			i--;//����Ҫ�����ܺ��ԣ����������һ����û�Ƚ� 
	}
	

}


int main(){
	int arr[10],i,n;
	
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);//���������������������Ԫ��ʱ���ᱻ��������Ҫ����ıȽ�ֵ ������Ҫ���淶���� 
	for(i=0;i<N;i++)
		printf("%2d",arr[i]);
	printf("\n");
	printf("������ֵ��");
	scanf("%d",&n);//
	delete(arr,n);
	for(i=0;i<N-j;i++)
		printf("%2d",arr[i]);
		return 0;
}
