#include<stdio.h>
int main(){
	int a[10],*p,*q,temp;
	for(p=a;p<a+10;p++)
	scanf("%d",p);
	for(p=a;p<a+9;p++)
	{
		for(q=p+1;q<a+10;q++)
		{
			if(*p>*q)
			{
				temp=*q;*q=*p;*p=temp;
			}
		}
	}
	for(p=a;p<a+10;p++)
	printf("%d ",*p);
	
}
