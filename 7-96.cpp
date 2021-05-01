#include<math.h>
#include<stdio.h>
int main(){
	int m,a[100],n,i=0;
	scanf("%d",&m);
	n=abs(m);
	if(n==0)
	{
		printf("0 ");
	}
	while(n>0)
	{
		a[i] =n%10;
		n = n/10;
		i++;
	}
	//printf("%d ",i);
	for(int j =i-1;j>=0;j--)
	{
		printf("%d ",a[j]);
	}
	
}
