
#include<stdio.h> 
int main()
{
  int x,count;
  int num,N;
  count = 0;
  scanf("%d %d",&num,&N);
  do{
  	scanf("%d",&x);
  	count++;
  	if(x<0)
	  {
	  	printf("Game Over\n");
	  	break;
	   } 
	if(count>N)
	{
		 printf("Game Over\n");
	  	break;
	}
	if(x>num)
	{
		printf("Too big\n");
	}
	else if(x<num)
	{
		printf("Too small\n");
	}
	else 
	{
		if(count==1)
		{
			printf("Bingo!\n");
			break;	
		}
		else if(count<=3)
		{
			printf("Lucky You!\n");
			break;	
		}
		else if(count>3&&count<=N)
		{	
		    printf("Good Guess!\n");
			break;		
		}
	}
	
}
while(x>0);
 
}  

