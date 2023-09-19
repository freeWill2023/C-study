#include<stdio.h>

int stack[100];
int tos;             //topOfStack;

void push(int data)
{
	stack[tos] = data;
	++tos;
}

int pop(void)
{
	--tos;
	return stack[tos];
}

int main(void)
{
	push(300);
	push(200);
	push(100);
	
	printf("1st pop() : %d\n", pop());
	printf("2nd pop() : %d\n", pop());
	printf("3rd pop() : %d\n", pop());

	return 0;
}
