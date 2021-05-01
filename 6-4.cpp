#include <stdio.h>
#include <math.h>
int IsSquare( int n ){
	int ret = 0;
	if(n==0||n==1)
	{
		ret =0;
	}
	for(int i=1;i<n/2.0;i++)
	{
		if(i*i==n){
			ret = 1;
			break;
		}
	}
	return ret;
}
int main()
{
    int n;

    scanf("%d", &n);
    if ( IsSquare(n) ) printf("YES\n");
    else printf("NO\n");
    return 0;
}
