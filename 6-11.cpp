#include<math.h>

int narcissistic( int number ){
	int g,a,sum=0,t,count=0,ret =0;
		t=number;
		a=t;
	do{
		count ++;
		number =number /10; 
	}while(number>0);
	for(int i=0;i<count;i++){
		g = t/10;
		t = t/10;
		sum = sum+pow(g,count);
	}
	if(sum == a){
		ret=1;
	}
	return ret;
} 
