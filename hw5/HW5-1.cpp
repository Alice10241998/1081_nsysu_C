#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ans,Max=500,min=0,num,time=0;
	printf("請輸入答案(範圍:0~500):\n");
	scanf("%d",&ans);

	while(num!=ans)
	{
	printf("\n猜一個數字\n");
	scanf("%d",&num);
	
	if(num<=Max&&num>=min)
	{
		if(num<ans)
		{
			printf("範圍 %d 到 %d \n",num,Max);
			time++;
			min=num;
		}
		
		else if(num>ans)
		{
			printf("範圍 %d 到 %d \n",min,num);
			time++;
			Max=num;
		}
	}	
	if(num>Max||num<min)
	{
		printf("範圍 %d 到 %d \n",min,Max);
		time++;
	}
	}
	printf("恭喜猜對!!\n你猜了 %d 次 \n",time);
	return 0;
}
