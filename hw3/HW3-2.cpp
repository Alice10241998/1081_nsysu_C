#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	double y;
	
	scanf("%lf",&y);
	x=(int)y;
	
	if(y-x==0)
	{
		printf("���:%d\n",x);	
		printf("�K�i���� %o\n",x);
		printf("�Q���i���� %x",x);
	}
	else
	{
		printf("���:%lf\n",y); 
		printf("Error!");
	}
		
		
	return 0;
}
