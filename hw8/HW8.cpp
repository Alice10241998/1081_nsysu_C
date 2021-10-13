#include<stdio.h>
#include<stdlib.h>

int main()
{
	int input,year,month,firstday,day;

	while(1)
	{
		printf("Input: ");
		scanf("%d",&input);
		year=input/1000;
		month=input%1000/10;
		firstday=input%10;
		
		if(month>12||month<1||firstday>6||firstday<0)
			continue;
		else
		{
		if(year%4==0&&year%100!=0||year%400==0&&year%3200!=0)
		{
			switch(month)
			{
				case 1:
					printf("                      January, %d",year);
					day=31;
					break;
				case 2:
					printf("                     February, %d",year);
					day=29;
					break;
				case 3:
					printf("                        March, %d",year);
					day=31;
					break;
				case 4:
					printf("                        April, %d",year);
					day=30;
					break;
				case 5:
					printf("                          May, %d",year);
					day=31;
					break;
				case 6:
					printf("                         June, %d",year);
					day=30;
					break;
				case 7:
					printf("                         July, %d",year);
					day=31;
					break;
				case 8:
					printf("                       August, %d",year);
					day=31;
					break;
				case 9:
					printf("                    September, %d",year);
					day=30;
					break;
				case 10:
					printf("                      October, %d",year);
					day=31;
					break;
				case 11:
					printf("                     November, %d",year);
					day=30;
					break;
				case 12:
					printf("                     December, %d",year);
					day=31;
					break;
			}
		}
		else
		{
			switch(month)
			{
				case 1:
					printf("                      January, %d",year);
					day=31;
					break;
				case 2:
					printf("                     February, %d",year);
					day=28;
					break;
				case 3:
					printf("                        March, %d",year);
					day=31;
					break;
				case 4:
					printf("                        April, %d",year);
					day=30;
					break;
				case 5:
					printf("                          May, %d",year);
					day=31;
					break;
				case 6:
					printf("                         June, %d",year);
					day=30;
					break;
				case 7:
					printf("                         July, %d",year);
					day=31;
					break;
				case 8:
					printf("                       August, %d",year);
					day=31;
					break;
				case 9:
					printf("                    September, %d",year);
					day=30;
					break;
				case 10:
					printf("                      October, %d",year);
					day=31;
					break;
				case 11:
					printf("                     November, %d",year);
					day=30;
					break;
				case 12:
					printf("                     December, %d",year);
					day=31;
					break;
			}	
		}
		printf("\n  SUN  MON  TUE  WED  THU  FRI  SAT\n");
		}
		int i,j,k;
		for(i=0;i<firstday;i++)
			printf("     "); //空格 
		i=0;
		for(j=1;j<=day;j++)
		{
			printf("%5d",j); //日期
			i++;
			//printf("%d",i);
			
			if(firstday+i==7) //換行 
			{
				printf("\n");
				i=0;
				firstday=0;
			} 
			if(j==day)
			printf("\n");
		}
	}	
	return 0;
} 
