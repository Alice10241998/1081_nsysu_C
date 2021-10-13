#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main()
{
	char input='A',txt[1001];
	int num,ASCII,i;
	
	srand(time(NULL));
	FILE *fp = fopen("input1.txt","w");
	
	while(i<1000)
	{
		ASCII=(rand()%58)+65;
		if((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))
		{
			txt[i]=(char)ASCII;
			i++;
		}
	}
	
	fputs(txt,fp);
	fclose(fp);
	fp = fopen("input1.txt","r");
	fgets(txt, 1001 , fp);
	
	while(input!='*')
	{
		printf("您在TEST1.txt 中想找尋數量的字元為: ");
		scanf(" %c",&input);
		
		if(((int)input>=65&&(int)input<=90)||((int)input>=97&&(int)input<=122))
		{
			for(i=0;i<=1000;i++)
			{
				if(txt[i]==(int)input||txt[i]==(int)input+32||txt[i]==(int)input-32)
				num++;
			}
			printf("該字元 '%c' 在該文件中數量為: %d\n\n",input,num);
			num=0;
		}
		
		else if(input=='*')
			printf("輸入結束\n");
		
		else
			printf("Wrong Input\n\n"); 
	}
	
	 return 0;
}
