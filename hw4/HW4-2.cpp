#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Exercise2
	int year,day,month;
	scanf("%d%d%d",&year,&month,&day);
	
	if(month<1||month>12)
		printf("Error!");
	  
	else if(year%4==0&&year%100!=0||year%400==0&&year%3200!=0)
	{
		printf("It's leap year\n");
			switch(month)
			{
				case 12: day+=30;
				case 11: day+=31;
				case 10: day+=30;
				case 9: day+=31;
				case 8: day+=31;
				case 7: day+=30;
				case 6: day+=31;
				case 5: day+=30;
				case 4: day+=31;
				case 3: day+=29;
				case 2: day+=31;
				case 1: day=day;
				printf("It's the %dth day in %d.",day,year);
			}
	}
	else	
	{
		printf("It's common year\n");
		if(month>=1&&month<=12)
			switch(month)
			{
				case 12: day+=30;
				case 11: day+=31;
				case 10: day+=30;
				case 9: day+=31;
				case 8: day+=31;
				case 7: day+=30;
				case 6: day+=31;
				case 5: day+=30;
				case 4: day+=31;
				case 3: day+=28;
				case 2: day+=31;
				case 1: day=day;
				printf("It's the %dth day in %d.",day,year);
			}
	}
	
	return 0;
} 
