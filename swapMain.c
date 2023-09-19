#include<stdio.h>

int main(void)
{
	int a, b;
	a= 100;
	b= 200;
	printf("a: %d \t b: %d\n", a, b);
	
	//swap
	/*int temp;
	temp = a;
	a = b;
	b = temp;*/
	swap(&a, &b);

	printf("a: %d \t b: %d\n", a, b);

	return 0;
}

