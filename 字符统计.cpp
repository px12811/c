#include<stdio.h>
int main()
{
        int a,b,f;
        char c;
        scanf("%d %c %d",&a,&c,&b);
        int e=(int) c;
        switch(e)
        {
        	case 43:
        	f=a+b;
        	printf("%d",f);
			break;	
			case 45:
        	f=a-b;
        	printf("%d",f);
			break;
			case 42:
        	f=a*b;
        	printf("%d",f);
			break;
			case 47:
        	f=a/b;
        	printf("%d",f);
			break;
			case 37:
        	f=a%b;
        	printf("%d",f);
			break;
			default:
    		printf("ERROR");
    		break;
			
			
			
		}
  }
