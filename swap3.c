#include<stdio.h>

int a;			//전역변수,배열
int b;

void swap(void){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	a= 100;
	b= 200;
	printf("a: %d \t b: %d\n", a, b);
	
	swap();

	printf("a: %d \t b: %d\n", a, b);

	return 0;
}

