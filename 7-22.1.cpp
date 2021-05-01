#include<stdio.h>
int main(){
    int i,fenzi=1,fenmu=1,n;double s=0;int t=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=fenzi*t/(fenmu*1.0);
        fenzi++;fenmu=2*i-1;
        t*=-1;
         printf("%d  %d %f\n",fenzi,fenmu,s);
    }
    printf("%.3lf",s);
    return 0;
}
