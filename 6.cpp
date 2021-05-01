#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i =1;i<=a;i++)
	{	
		for(int j =0;j<a-i;j++){
		
		printf(" ");
	}
		for(int k=0;k<2*i-1;k++)
		{
		
		printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<a-1;i++)
	{
		for(int m = 0;m<a-1-i;m++){
	
		printf(" ");
	}	
		for(int b = 0;b<2*i-1;b++){
			printf("*");
		}
	}
} 
