#include<stdio.h>
int main(){
	int a[10];
	int x,j,flag=0;
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	scanf("%d",&x);
	for(j=0;j<10;j++)
	{
		if(x==a[j])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		for(int i=j;i<9;i++)
		{
			a[i]=a[i+1];
		}
		for(int i=0;i<9;i++)
			printf("%d ",a[i]);
	}
	else{
		printf("no");
	}
}
