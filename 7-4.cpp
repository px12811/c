#include<stdio.h>
int main()
{
	int n,a[10],temp;
	scanf("%d",&n);
	int min=0;
	int max=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[min]>a[i])
			min=i;
		
	}
	//for(int j=0;j<n;j++)
		//printf("%d ",a[j]);
	//printf("%d %d\n",a[max],a[min]);
	temp = a[min];a[min]=a[0];a[0]=temp;
	for(int j=0;j<n;j++)
		if(a[max]<a[j])
			max=j;
	temp = a[max];a[max]=a[n-1];a[n-1]=temp;
	for(int j=0;j<n;j++)
		printf("%d ",a[j]);
}
