#include<stdio.h>
int main()
{
	int min,s;
	scanf("%d:%d",&s,&min);
	if(s<=12&s>=0){
	printf("Only %02d:%02d.  Too early to Dang.",s,min);
	}
	else{
			for(int i=1;i<s-11;i++){
				printf("Dang");
			}
			if(min !=0){
				printf("Dang");
			}
		}
}
