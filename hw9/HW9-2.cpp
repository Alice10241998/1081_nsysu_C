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
		printf("�C�檺�r����:");
		scanf("%d",&num);
		
		if(num>=1)
		printf("�󥿧���!\n\n");
		
		else if(num==-1)
		printf("�����ק�\n");
		
		else
		printf("��J���~�A�A�դ@���C\n\n"); 
	}
	
	
}
