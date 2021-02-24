#include<stdio.h>
#include<math.h>
 int main()
 {
 	int sum,a,n,t;
 	sum = 0;
 	scanf("%d %d",&a,&n);
 	t = n;
 	while (t!=0)
 	{
	 
 	for(int i=0;i<n;i++)
 	{
 		sum = sum + a*pow(10,i);
 		//printf("sum = %d\n",sum);
	 }
 	 
 	
 	
 	t--;
 	n--;
     }
 	
 	
 	printf("s = %d",sum);
 	
 	
 	
 	
 	
 }
