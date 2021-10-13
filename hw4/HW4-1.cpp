#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Exercise1
	int min;
	scanf("%d",&min);
	printf("Time (minutes): %d\n",min);
	
	if(min>0)
	{
		if(0<min&min<=70)
			printf("The parking fee is 100 dollar(s).");
		if(70<min&min<=130)
			printf("The parking fee is 170 dollar(s).");
		if(130<min&min<=190)
			printf("The parking fee is 220 dollar(s).");
	int a;
	a=220+20*((min-191)/60+1);	
		if(190<min)
			printf("The parking fee is %d dollar(s).",a);
	}
	else
		printf("Error!");
		
	return 0;
} 
