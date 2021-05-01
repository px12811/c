#include<stdio.h>
int main()
{
    int a[10],i,max,maxi;
    scanf("%d",&a[0]);
    max=a[0];
    maxi=0; 
    for(i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
            maxi=i;
        }
    }
    printf("%d %d",max,maxi);
    return 0;
}
