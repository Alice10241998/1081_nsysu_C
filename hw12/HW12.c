#include<stdio.h>
#include<stdlib.h>

struct node{int data;struct node *next};

struct node *top;

void mypush(int value)
{
	struct node *new;
	new=malloc(sizeof(struct node));
	new->data=value;
	new->next=NULL;
	new->next=top;
	top=new;
}

int mypop()
{
	if(top==NULL)
		return -1;
	else
	{
		struct node *keep;
		int value;
		value=top->data;
		keep=top;
		top=top->next;
		free(keep);
		return value;
	}
}

int main()
{
	struct node *point;

	int n1,n2,pop;
	
	printf("Nothing in stack.\nPlease input the instruction:");
	while((scanf("%d",&n1))!=EOF)
	{
		if(n1==1)
		{
			scanf("%d",&n2);
			printf("push %d into stack.\n",n2);
			mypush(n2);
			point=top;
			while(point!=NULL)
			{
				printf("*       *\n");
				printf("*%5d  *\n",point->data);
				printf("*       *\n");
				printf("*********\n");
				point=point->next;
			}
		}
		else
		{
			pop=mypop();
			if(pop==-1)
				printf("Error pop.\nNothing in stack.\n");
				
			else
			{
				point=top;
				printf("pop %d from stack.\n",pop);
				while(point!=NULL)
				{
					printf("*       *\n");
					printf("*%5d  *\n",point->data);
					printf("*       *\n");
					printf("*********\n");
					point=point->next;
				}
			}
		}
		printf("Please input the instruction:");
	}
	return 0;
}
