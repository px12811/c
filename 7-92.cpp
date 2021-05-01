#include<math.h>
#include<stdio.h>
int main(){
	int a[3][4];
	int i,j,min_x,min_y;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	min_x=0;
	min_y=0;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{	
			if(a[i][j]<a[min_x][min_y])
			{
				min_x=i;
				min_y=j;
			}
		}

	printf("%d %d %d",min_x+1,min_y+1,a[min_x][min_y]);
}
