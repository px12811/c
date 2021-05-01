#include<stdio.h>
#include<math.h>
int PrimeSum( int m, int n )
{
	int k;
	int sum = 0;
	int flag=0;
	int i;
	for(;m<=n;m++)
	{
	 if(m<=0||m==1){
		continue;
	}
	 k=(int)sqrt( (double)m );	
		for (i=2;i<=k;i++)
 	    {
		 if((m%i==0)||(m==1||m<=0)){
		 	break;
		 }		 
		 } 
		 if(i>k)
		 {
		 	sum=sum+m;
		 }	
	}
	return sum;
}
	int prime(int p)
{
	int ret =1;
	int k ;
	if(p<=0||p==1){
		ret =0;
	}
	else{	
	for (k=2;k<p-1;k++)
	{
		if(p%k==0)
		{
			ret =0;
			break;
		}		
	}
}
	return ret;
}
int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}
