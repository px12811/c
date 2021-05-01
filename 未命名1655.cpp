#include<stdio.h>
#include<math.h>
 int main()
 {
 	int x1,x2,x3;
	x1=1; 
    x2=1;
    x3=2;
    int month;
    month=2;
 	int n; 
 	scanf("%d",&n);
 	if(n==1)
 	{
 	printf("1");	
	}
 	else
 	{
 	for(;x3<n;month++)
    {
    	x3 = x1 + x2;
    	x1 = x2;
    	x2 = x3;
    	
	} 	 
	printf("%d",month); 
	return 0;	
	}
 	
 }
 	
 	
 	
 	
 	
 
