#include<stdio.h>
int main()
{
int count=0;
char b,c;
while(1)
{
b=getchar();
c=b;
if((b<=90&&b>=65)||(b<=122&&b>=97))
{
	if(b!='A'&&b!='a'&&b!='i'&&b!='I'&&b!='o'&&b!='O'&&b!='E'&&b!='e'&&b!='U'&&b!='u')
		{
			if(b<=90&&b>=65){
			count=count+1;
			//printf("%c ",b);
		}
		}
}

if(c=='\n')
    break;
}
printf("%d",count);
return 0;
}

