#include<stdio.h>
void test(int &x){
	x = 1024;
	printf("test函数内部 x=%d\n",x);
} 
int main(){
	int x=1;
	printf("调用test前=%d\n",x);
	test(x);
	printf("调用test后=%d\n",x);
}
