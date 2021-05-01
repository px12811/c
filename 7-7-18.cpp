#include<stdio.h>
int main()
{
int count=0,i=0;
char flag;
char a[1000];
gets(a);

scanf("%c",&flag);
//printf("%c ",flag);	
for(int j=0;a[j]!='\n';j++)
{
	if(a[j]==flag){
		count++;
	}
}

printf("%d",count);
return 0;
}

