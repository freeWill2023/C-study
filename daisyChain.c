#include<stdio.h>

int main(void)
{
	int a, b, c;
	a = 100;
	b = a;
	c = a + b;
	
	printf("%d %d %d\n", a, b, c);
	
	a = b = c = 100;   //daisy-chain

	printf("%d %d %d\n", a, b, c);


	return 0;
}



