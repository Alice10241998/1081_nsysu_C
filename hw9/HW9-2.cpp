#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main()
{
	char txt;
	int num=0;
	
	srand(time(NULL));
	FILE *fp = fopen("input1.txt","w+");
	txt=(rand()%1000)+1;
	
	while(num!=-1)
	{
		printf("每行的字元數:");
		scanf("%d",&num);
		
		if(num>=1)
		printf("更正完成!\n\n");
		
		else if(num==-1)
		printf("結束修改\n");
		
		else
		printf("輸入錯誤，再試一次。\n\n"); 
	}
	
	
}
