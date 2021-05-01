#include<stdio.h>
int main(){
	int a[10],mid,left,right;
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	int x;
	scanf("%d",&x);
	left = 0;right=9;
	while(left<=right)
	{
		mid = (left+right)/2;
		if(a[mid]==x)
			break;
		else if (a[mid]>x)
			left++;
		else if(a[mid]<x)
			right--;
	}
	if(left<right)
	printf("%d\n",mid);
	else
	printf("no\n"); 
	
} 
