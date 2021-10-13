#include<stdio.h>
#include<stdlib.h>

int main()
{
	long long int m,n,i;
	while(scanf("%lld %lld",&m,&n)!=EOF)
	{
		double sol=1;
		
		if(m-n>=n)
		{
			for(i=1;i<=n;i++)
			sol=sol*(m-i+1)/i;	
		}
		else
		{
			for(i=1;i<=m-n;i++)
			sol=sol*(m-i+1)/i;
		}
		printf("C(%lld, %lld) = %lld\n",m,n,(long long int)sol);
	}
	return 0;
}
