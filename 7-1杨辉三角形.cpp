#include <stdio.h>
int is(int m,int n)//
{
	int s;
	if(n==1||n==m||m==1)
	s=1;
	else
	{
		s=is(m-1,n-1)+is(m-1,n);
	}
	
	return s;
 } 

int main()
{
	int m,n;
	scanf("%d",&m);
	for(int z=1;z<=m;z++)
	{
		for (n=1;n<=z;n++) 
		{
			if(n<z)
			printf("%4d ",is(z,n));
			else
			printf("%4d",is(z,n));
		}
		printf("\n");
	}
}



