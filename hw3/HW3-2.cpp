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
		printf("整數:%d\n",x);	
		printf("八進位表示 %o\n",x);
		printf("十六進位表示 %x",x);
	}
	else
	{
		printf("整數:%lf\n",y); 
		printf("Error!");
	}
		
		
	return 0;
}
