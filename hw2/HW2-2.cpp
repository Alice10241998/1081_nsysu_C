#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define A 1.41428
#define B 1.73205 

int main()
{
	double s;
	
	scanf("%lf",&s);
	
	printf("���:%.2lf\n",s);
	printf("����:%.2lf\n",A*B/3*s);
	printf("�����n:%.2lf\n",B/4*pow(s,2));
	printf("���n:%.2lf\n",4*(B/4*pow(s,2)));
	
	double a,b;
	a=A*B/3*s;
	b=B/4*pow(s,2);
	printf("��n:%.2lf",1.0/3.0*a*b);

	return 0;	
 } 
