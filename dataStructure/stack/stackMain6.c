//generic version
#include<stdio.h>
#include "stack6.h"

int main(void)
{
	Stack s1, s2;
	
	initStack(&s1, 10, sizeof(int));
	initStack(&s2, 100, sizeof(double));
	
	//int i = 100; push(&s1, &i, sizeof(int));
	int re;
	
	int i = 100; push(&s1, &i);
	i = 200;     push(&s1, &i);
	i = 300;     push(&s1, &i);

	//int re;
	
	pop(&s1, &re); 	printf("s1 1st pop() :  %d\n", re);
	pop(&s1, &re);  	printf("s1 2nd pop() :  %d\n", re);
	pop(&s1, &re);  	printf("s1 3rd pop() :  %d\n", re); 

	double d = 1.1; push(&s2, &d);
	d = 2.2;        push(&s2, &d);
	d = 3.3;        push(&s2, &d);

	pop(&s2, &re);	printf("s2 1st pop() :  %d\n", re);
	pop(&s2, &re);	printf("s2 2nd pop() :  %d\n", re);
	pop(&s2, &re);	printf("s2 3rd pop() :  %d\n", re);

	cleanupStack(&s1);
	cleanupStack(&s2);

	return 0;
}
