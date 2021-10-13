#include<stdio.h>
#include<stdlib.h>

int a,b,sum;

void myswap(int*ptra,int*ptrb)
{
	int tmp;
	ptra=&a;
	ptrb=&b;
	
	if(a>b)
	{
		tmp=a;
		*ptra=b;
		*ptrb=tmp;
	}
}

int mysubtotal(int a,int b)
{
	sum+=a;
	if(a!=b)
	{
		a++;
		return mysubtotal(a,b); 
	}
	
	else
		return sum;
}

int main()
{
	while((scanf("%d%d",&a,&b))!=EOF)
	{
		sum=0;
		myswap(&a,&b);
		mysubtotal(a,b);
		printf("%d到%d的總合為:%d\n",a,b,sum);
	}
}
