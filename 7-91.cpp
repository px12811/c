#include<stdio.h>
int main(){
	int  j,a[12],k;
	for(int i=1;i<11;i++)
		scanf("%d",&a[i]);
	int x;
		scanf("%d",&x);
	//for(int i=1;i<11;i++)
	//	printf("a[%d]=%d ",i,a[i]);
//	printf("\n");
	for(j=1;j<11;j++)
		if(a[j]>x)
			break;
	//printf("x=%d\n",x);
	for(int k=11;k>=j;k--)
		a[k+1]=a[k];
	a[j]=x;
	for(int i=1;i<12;i++)
		printf("%d ",a[i]);
}
 
