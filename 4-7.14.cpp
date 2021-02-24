#include <stdio.h>
int main()
{
	int n,ascll = 65;
	scanf("%d",&n);
	for(;n>0;n--)
	{
		for (int i =n;i>0;i--)
		{
		
		printf("%c ",ascll);
		ascll++;
		
	    }
	    printf("\n");
	}
