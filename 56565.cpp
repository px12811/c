#include<stdio.h>
int main(){
    int num,N,count=0;
    scanf("%d %d",&num,&N);//numҪ�µ��Ǹ������  N������ 
    int x;//xÿ�βµ��� 
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
            //1�β³�
           if(count==1){
               printf("Bingo!\n");
               break;
           }else if(count<=3){//3������
               printf("Lucky You!\n");
               break;
           }else if(count>3&&count<=N){//����3�ε�С�ڵ���n
               printf("Good Guess!\n");
               break;
           } 
       }
   }while(x>0);
}
