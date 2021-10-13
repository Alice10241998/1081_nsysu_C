#include<stdio.h>
#include<stdlib.h>

int main()
{
	int h,m,s;
	int H,M,S;
	
	scanf("%d%d%d%d%d%d",&h,&m,&s,&H,&M,&S);
	
	printf("%.2d:%.2d:%.2d\n",h,m,s);
	printf("%.2d:%.2d:%.2d\n",H,M,S);
	
	int a;
	a=h*60*60+m*60+s;
	int b;
	b=H*60*60+M*60+S;
	
	int t;
	if(a>=b)
	{
		t=a;
		a=b;
		b=t;
	}
	
	int c;
	c=b-a;
	int hour,min,sec;
	sec=c%60;
	min=c/60%60;
	hour=c/60/60;
	
	printf("¬Û®t®É¶¡ %.2d:%.2d:%.2d",hour,min,sec);

	return 0;	
 } 
