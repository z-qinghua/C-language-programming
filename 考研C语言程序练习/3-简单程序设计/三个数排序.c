//����3������������С�����˳�����

/*
1-ʹ��ѡ�������㷨 
2-ʹ��ð�������㷨 
 
*/ 

#include<stdio.h>
void main()
{
	float a[3];
	int i;
	printf("������������");
	for(i=0;i<3;i++)
		scanf("%f",&a[i]);
	for(i=0;i<3;i++)
		printf("%5.2f",a[i]);


//1-ʹ��ѡ�������㷨 ��3�����Ƚ����� 
	for(i=0;i<2;i++)
	{
		int j,t;
		for(j=i+1;j<3;j++)
		if(a[i]>a[j])
			{
				t=a[i];a[i]=a[j];a[j]=t;
			}
	}

/*	

//2-ʹ��ð�������㷨��3�������Ƚ����� 
for(i=0;i<3-1;i++){
	int j,t;
	//������ź��� 
	for(j=0;j<2-i;j++){
		if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
} 

*/
	
//��� 
printf("\n");
for(i=0;i<3;i++)
	printf("%5.2f",a[i]);
}
