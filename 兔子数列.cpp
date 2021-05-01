#include<stdio.h>
int main()
{
	int a[20],count=0;
	a[0]=1;a[1]=1;
	for(int i=2;i<20;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	//printf("a[0]=%d a[1]=%d\n",a[0],a[1]);
	for(int k =0;k<20;k++){
		printf("%5d",a[k]);
        count++;
		if(count%4==0)
		printf("\n");
	}
 } 
