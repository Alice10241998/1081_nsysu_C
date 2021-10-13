#include<stdio.h>
#include<stdlib.h>

struct node{ int data; struct node *prev;};

struct node *front,*back;

void myenqueue(int num)
{
	struct node *new;
	new=malloc(sizeof(struct node));
	new->data=num;
	new->prev=NULL;
	new->prev=back;
	back=new;
	if(front==NULL)
	{
		front=new;
		back=new;
	}
} 

int mydequeue()
{
	struct node *current,*temp;
	int value;
	temp=front;
	
	if(front==NULL)
		return -1;
	else if(front==back)
		front=back=NULL;
	else
	{
		current=back;
		while(current->prev!=front)
			current=current->prev;
		front=current;
	}
	value=temp->data;
	free(temp);
	return value;
}

void status()
{
	printf("Queue :");
	struct node *point,*current;
	if(front!=NULL)
	{
		point=front;
		while(point!=back)
		{
			current=back;
			while(current->prev!=point)
			{
				current=current->prev;
			}
			printf("%d ",point->data);
			point=current;
		}
		printf("%d",point->data);
	}
	printf("\n--------------------------------\n");
}

int main(void) {
	FILE *file=fopen("input.txt","r");
	int n,i,temp;
	char s[8];
	fscanf(file,"%d",&n);
	printf("Insert the original numbers.\n\n");
	for(i=0;i<n;i++)
	{
		fscanf(file,"%d",&temp);
		myenqueue(temp);
	}
	status();
	while((fscanf(file,"%s",&s))!=EOF)
	{
		if(s[0]=='D')
		{
			temp=mydequeue();
			printf("%s\n\n",s);
			if(temp==-1)
			{
				printf("Nothing in queue.\n\n");
			}
			else
			{
				printf("%s %d from queue.\n\n",s,temp);
			}
			status();
		}
		if(s[0]=='E')
		{
			fscanf(file,"%d",&temp);
			myenqueue(temp);
			printf("%s %d\n\n",s,temp);
			printf("%s %d into queue.\n\n",s,temp);
			status();
		}
	}
	printf("Finish total input.\n");
	fclose(file);
	return 0;
}
