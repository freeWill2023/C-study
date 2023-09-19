#include<stdio.h>

int main(void)
{
	int a = 0x12345678;
	char *p;
	int *o;
	//char *q;   error
	
	p = (char *) &a;	
	o = &a;
	//q = &a;	    error
	
	printf("*p: 0x%x\n", *p);	
	printf("*o: 0x%x\n", *o);
	//printf("*q: 0x%x\n", *q);    error

	return 0;
}




