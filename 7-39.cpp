#include<stdio.h>
int main(){
	int n;
	double sum=0;
	scanf("%d",&n);
	double q = 1.0;
	for(int i=1;i<=n;i++)
	{	
		sum = sum + q*(i)/(2*i-1);
		q = -q;		
	 } 
	 printf("%.3f",sum);
} 
