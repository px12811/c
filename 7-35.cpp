#include<stdio.h>
int main(){
	int head,foot;
	scanf("%d%d",&head,&foot);
	for(int i=0;i<=foot/4;i++){
		for(int j=0;j<=foot/2;j++){
			if(4*i+2*j==foot&&j+i==head){
				printf("%d %d",i,j);
			}
		}
	}
}
