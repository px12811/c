#include <stdio.h>
int main()
{
 int a[18];
 int sum,i,sum1,sum2,min,n;
 scanf("%d",&n);
 for(int j = 0;j<n;j++)
     scanf("%d",&a[j]);
sum = a[0]+a[1]+a[2];
for(i =1;i<n-2;i++){	
	if(sum>a[i]+a[i+1]+a[i+2])
	sum = a[i]+a[i+1]+a[i+2];	
}
sum1 = a[0]+a[n-1]+a[n-2];
sum2 = a[1]+a[0]+a[n-1];
if(sum1<sum2)
	min = sum1;
else
	min = sum2;
if(min<sum)
	printf("%d",min);
else
	printf("%d",sum); 
}

