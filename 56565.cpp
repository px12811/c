#include<stdio.h>
int main(){
    int num,N,count=0;
    scanf("%d %d",&num,&N);//num要猜的那个随机数  N最大次数 
    int x;//x每次猜的数 
    do{
        scanf("%d",&x);
        count++;
        if(x<0){
            printf("Game Over\n");
            break;
        }
        if(count>N){
            printf("Game Over\n");
            break;
        }
        if(x>num){
            printf("Too big\n");
        }else if(x<num){
            printf("Too small\n");
        }else{
            //1次猜出
           if(count==1){
               printf("Bingo!\n");
               break;
           }else if(count<=3){//3次以内
               printf("Lucky You!\n");
               break;
           }else if(count>3&&count<=N){//大于3次旦小于等于n
               printf("Good Guess!\n");
               break;
           } 
       }
   }while(x>0);
}
