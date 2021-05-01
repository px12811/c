#include<stdio.h>
int main(){
    double sum=0,fenzi=2,fenmu=1;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=fenzi/fenmu;
        double temp=fenmu;
        fenmu=fenzi;
        fenzi=fenzi+temp;
         printf("%.2f\n",sum);
        
    }
    printf("%.2f",sum);
}
