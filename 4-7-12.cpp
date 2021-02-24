#include <stdio.h>
double fact(int n)
{
if(n==1||n==0) return 1;
    return n*fact(n-1);
}
int main()
{
	int n;
	double e=1.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		e = e +1.0/fact(i);
	
	}
	printf("%.8lf",e);
	return 0;
	}
