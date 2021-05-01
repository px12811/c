#include<stdio.h>
int main(){
	int t,m,n,s;
	scanf("%d%d",&m,&n);
	s = m*n;
	while(t>0){
	 t=m%n;
	 m=n;
	 n=t;	
	}
	printf("%d\n%d",m,s/m);
} 
