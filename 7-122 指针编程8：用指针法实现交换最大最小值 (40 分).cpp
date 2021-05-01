#include<stdio.h>
int main(){
	int a[10],*p,*q,*max,*min,temp;
	scanf("%d",&a[0]);
	p=min=max=a;
	//printf("a[0]=%d,max=%d,min=%d\n",a[0],*max,*min);
	for(p=a+1;p<a+10;p++){
	scanf("%d",p);
	if(*min>*p)
		min=p;
	if(*max<*p)
		max=p;
	}
	//printf("max=%d,min=%d\n",*max,*min);
	temp=*max;*max=*min;*min=temp;
		//printf("max=%d,min=%d\n",*max,*min);
	for(p=a;p<a+10;p++)
	printf("%d ",*p);
	
}
