#include<stdio.h>
void test(int &x){
	x = 1024;
	printf("test�����ڲ� x=%d\n",x);
} 
int main(){
	int x=1;
	printf("����testǰ=%d\n",x);
	test(x);
	printf("����test��=%d\n",x);
}
