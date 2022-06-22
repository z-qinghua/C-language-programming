#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(b*b==4*a*c)
		printf("x1=x2=%.5f",-b/(2*a));
	else if(b*b>4*a*c)
		printf("x1=%.5f;x2=%.5f", (-b + sqrt(b*b-4*a*c))/(2*a),(-b - sqrt(b*b-4*a*c))/(2*a));
	else if(b*b<4*a*c)
	{
		if(b!=0)
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",-b / (2*a), sqrt(4*a*c-b*b) / (2*a),-b / (2*a), sqrt(4*a*c-b*b) / (2*a));	
		else
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",b / (2*a), sqrt(4*a*c-b*b) / (2*a),b / (2*a), sqrt(4*a*c-b*b) / (2*a));	
	}
	return 0; 	
}
