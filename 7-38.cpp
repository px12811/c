#include<stdio.h>
int main(){
	int m,n;
	double sum = 0.0;
	scanf("%d%d",&m,&n);
	for(;m<=n;m++){
		sum = sum + m*m+1.0/m;
	}
	printf("sum = %.6f",sum);
}
