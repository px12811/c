#include<stdio.h>
int main()
{
int a;
char b,c;
scanf("%d",&a);
b=getchar();
while(1)
{
b=getchar();
c=b;
if((b>='A'&&b<='W')||(b>='a'&&b<='w'))
b=b+a;
else if(b>'W'&&b<='Z')
b=b-'W'+'A'-1;
else if(b>'w'&&b<='z')
b=b-'w'+'a'-1;
if(c=='\n')
break;
printf("%c",b);
}
return 0;
}

