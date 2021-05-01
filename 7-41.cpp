#include<stdio.h>
int main(){
	int x,count=0;
	scanf("%d",&x);
	for(int i=x/5;i>0;i--){
		for(int j=x/2;j>0;j--){
			for(int k=1;k<x;k++){
				if(5*i+2*j+k==x){
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
					count =count+1;
				}
			}
		}
	}
	printf("count = %d",count);
}
