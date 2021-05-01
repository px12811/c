#include<stdio.h>
int main()
{
	int a[4][5],min,max,a_min,a_max,k,i,j,flag=0;
	for(i=1;i<4;i++)
		for(j=1;j<5;j++)
			scanf("%d",&a[i][j]);

	for(i=1;i<4;i++){
		a_max=a[i][1];
		max=1;
		for(j=1;j<5;j++)
		if(a_max<a[i][j]){
			a_max=a[i][j];
			max=j;
		}
		a_min=a[1][max];
		min=1;
		for(k=1;k<4;k++)
		if(a_min>a[k][max]){
			a_min=a[k][max];
			min=k;
		}
		if(a_max==a_min){
			flag=1;
		printf("%d %d %d",a_max,min,max);
		}
	}
	if(flag==0)
	printf("no\n");
 } 
