#include<stdio.h>

int main(void)
{
	void *p;
	
	int i = 100;
	p = &i;
	//*p = 200;
	*(int *)p = 200;

	printf("i: %d\n", i);
	
	double d = 3.14;
	p = &d;
	*(double *)p = 2.71;
	
	printf("d: %.2f\n", d);
		
	return 0;
}




