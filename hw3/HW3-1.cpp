#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int a,b,c,d;
	printf("輸入四邊長:");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a==b&&b==c&&c==d&&d==a)
		printf("菱形");

	else if(a==c&&b==d)
		printf("平行四邊形");

	else if(a+b+c<d||a+b+d<c||a+c+d<b||b+c+d<a)
		printf("Banana!");

	else
		printf("其他四邊形");
	
	return 0;
}
