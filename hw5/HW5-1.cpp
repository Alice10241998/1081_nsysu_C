#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ans,Max=500,min=0,num,time=0;
	printf("�п�J����(�d��:0~500):\n");
	scanf("%d",&ans);

	while(num!=ans)
	{
	printf("\n�q�@�ӼƦr\n");
	scanf("%d",&num);
	
	if(num<=Max&&num>=min)
	{
		if(num<ans)
		{
			printf("�d�� %d �� %d \n",num,Max);
			time++;
			min=num;
		}
		
		else if(num>ans)
		{
			printf("�d�� %d �� %d \n",min,num);
			time++;
			Max=num;
		}
	}	
	if(num>Max||num<min)
	{
		printf("�d�� %d �� %d \n",min,Max);
		time++;
	}
	}
	printf("���߲q��!!\n�A�q�F %d �� \n",time);
	return 0;
}
