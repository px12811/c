#include<stdio.h>
int main(){
	int x,count=1,n,N;
	scanf("%d %d",&x,&N);
	do{
		scanf("%d",&n);
		if(n<0){
			printf("Game Over\n");
			break;
		}
		if (count==1&&n==x){
			printf("Bingo!\n");
			break;
		}
			if(count<=N&count>3&&n==x)
		{
			printf("Good Guess!\n");
			break;
		}
		if(count<=3&&n==x)
		{
			printf("Lucky You!\n");
			break;
		}
		if(count<=N&&n!=x)
		{
		if(n>x){
			printf("Too big\n");
			count ++;
			continue;
		}
		else if(n<x){
			printf("Too small\n");
			count ++;
			continue;
		}
		}
		if(count>N)
		{
			printf("Game Over\n");
			break;
		}
		}while(x>0);
} 
