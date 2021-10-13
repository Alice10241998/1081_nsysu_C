#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int bubble_sort(int*arr,int n,int* comp)
{
	int i,j,m=0;
	(*comp)=0;
	for(i=n-1;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			(*comp)++;//璸衡ゑ耕Ω计 
			if(arr[j-1]>arr[j])
			{
				int tmp;
				tmp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=tmp;
				m++;//璸衡ユ传Ω计 
			}
		}
	}
	return m;
}

int selection_sort(int*arr,int n,int* comp)
{
	int i,j,m=0;
	(*comp)=0;
	for(i=0;i<n-1;i++)//竚 
	{
		int min=i;//т程 
		for(j=i+1;j<n;j++)
		{
			(*comp)++;
			if(arr[j]<arr[min])
				{
					min=j;
				}
		}
		int tmp;
		tmp=arr[min];
		arr[min]=arr[i];
		arr[i]=tmp;
		m++;
	}
	return m;
}

int insertion_sort(int*arr,int n,int* comp)
{
	int i,j,m=0,index;
	(*comp)=0;
	for(i=1;i<n;i++)
	{
		index=arr[i];
		j=i;
		while((j>0)&&(arr[j-1]>index))
		{
			(*comp)++;
			arr[j]=arr[j-1];
			j=j-1;
		}
		arr[j]=index;
		m++;
	} 
	return m;
}

int main()
{
	int arr1[500],arr2[1000],arr3[2000];
	int num1[500],num2[1000],num3[2000];
	int comp1,comp2,comp3,i,swap1,swap2,swap3;
	
	FILE *fp = fopen("input.txt","r");
	
	FILE *fp2 = fopen("B075020033_bubble.txt","w");
	fprintf(fp2,"Bubble sort result:\n");
	
	FILE *fp3 = fopen("B075020033_selection.txt","w");
	fprintf(fp3,"Selection sort result:\n");
	
	FILE *fp4 = fopen("B075020033_insertion.txt","w");	
	fprintf(fp4,"Insertion sort result:\n");
	
	for(i=0;i<500;i++)
	{
		fscanf(fp,"%d",&num1[i]);
		arr1[i]=num1[i];
	}
	swap1=bubble_sort(arr1,500,&comp1);
	
	for(i=0;i<500;i++)
		fprintf(fp2,"%d ",arr1[i]);
	fprintf(fp2,"\n\n");
	
	
	for(i=0;i<500;i++)
		arr1[i]=num1[i];
	swap2=selection_sort(arr1,500,&comp2);

	for(i=0;i<500;i++)
		fprintf(fp3,"%d ",arr1[i]);
	fprintf(fp3,"\n\n");
	
	
	for(i=0;i<500;i++)
		arr1[i]=num1[i];
	swap3=insertion_sort(arr1,500,&comp3);
	
	for(i=0;i<500;i++)
		fprintf(fp4,"%d ",arr1[i]);
	fprintf(fp4,"\n\n");
	
	
	printf("Sequence 1      bubble          selection       insertion\n");
	printf("-----------------------------------------------------------\n");
	printf("swap times      %-16d%-16d%-15d\n",swap1,swap2,swap3);
	printf("compare times   %-16d%-16d%-15d\n",comp1,comp2,comp3);
	printf("-----------------------------------------------------------\n");
	
	
	for(i=0;i<1000;i++)
	{
		fscanf(fp,"%d",&num2[i]);
		arr2[i]=num2[i];
	}
	swap1=bubble_sort(arr2,1000,&comp1);
	
	for(i=0;i<1000;i++)
		fprintf(fp2,"%d ",arr2[i]);
	fprintf(fp2,"\n\n");
	
	
	for(i=0;i<1000;i++)
		arr2[i]=num2[i];
	swap2=selection_sort(arr2,1000,&comp2);
	
	for(i=0;i<1000;i++)
		fprintf(fp3,"%d ",arr2[i]);
	fprintf(fp3,"\n\n");
	
	
	for(i=0;i<1000;i++)
		arr2[i]=num2[i];
	swap3=insertion_sort(arr2,1000,&comp3);
	
	for(i=0;i<1000;i++)
		fprintf(fp4,"%d ",arr2[i]);
	fprintf(fp4,"\n\n");
	
	
	printf("Sequence 2      bubble          selection       insertion\n");
	printf("-----------------------------------------------------------\n");
	printf("swap times      %-16d%-16d%-15d\n",swap1,swap2,swap3);
	printf("compare times   %-16d%-16d%-15d\n",comp1,comp2,comp3);
	printf("-----------------------------------------------------------\n");
	
	
	for(i=0;i<2000;i++)
	{
		fscanf(fp,"%d",&num3[i]);
		arr3[i]=num3[i];
	}
	swap1=bubble_sort(arr3,2000,&comp1);
	
	for(i=0;i<2000;i++)
		fprintf(fp2,"%d ",arr3[i]);
	fprintf(fp2,"\n");
	
	
	for(i=0;i<2000;i++)
		arr3[i]=num3[i];
	swap2=selection_sort(arr3,2000,&comp2);
	
	for(i=0;i<2000;i++)
		fprintf(fp3,"%d ",arr3[i]);
	fprintf(fp3,"\n");
	
	
	for(i=0;i<2000;i++)
		arr3[i]=num3[i];
	swap3=insertion_sort(arr3,2000,&comp3);
	
	for(i=0;i<2000;i++)
		fprintf(fp4,"%d ",arr3[i]);
	fprintf(fp4,"\n");
	
	
	printf("Sequence 3      bubble          selection       insertion\n");
	printf("-----------------------------------------------------------\n");
	printf("swap times      %-16d%-16d%-15d\n",swap1,swap2,swap3);
	printf("compare times   %-16d%-16d%-15d\n",comp1,comp2,comp3);
	printf("-----------------------------------------------------------\n");
	
	fclose(fp);
	fclose(fp2);
	fclose(fp3);
	fclose(fp4);
}




