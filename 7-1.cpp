#include<stdio.h>
int main()
{
	int a[10],temp;
	for(int i =0;i<10;i++)
		scanf("%d",&a[i]);
	int x;
	scanf("%d",&x);
	for(int j=1;j<=x;j++)
	{
		temp=a[0];
		for(int k=0;k<=8;k++)
		{
			a[k]=a[k+1];
		}
		a[9]=temp;
	}
	for(int j =0;j<10;j++){
		printf("%d ",a[j]);
	}
}
