#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int a,b,c,d;
	printf("��J�|���:");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a==b&&b==c&&c==d&&d==a)
		printf("�٧�");

	else if(a==c&&b==d)
		printf("����|���");

	else if(a+b+c<d||a+b+d<c||a+c+d<b||b+c+d<a)
		printf("Banana!");

	else
		printf("��L�|���");
	
	return 0;
}
