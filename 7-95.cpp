#include<stdio.h>
int main(){
	int max,a[10],mid;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<9;j++){
			int temp = j;
		for(int k=j;k<10;k++)
		{
		if(a[temp]<a[k])
			temp =k;
		}
		mid = a[j];a[j]=a[temp];a[temp]=mid;	
	}
	for(int i=0;i<2;i++){
		printf("%d\n",a[i]);
	}
}
