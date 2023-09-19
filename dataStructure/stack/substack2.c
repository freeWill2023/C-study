#include "stack.h"
#include<stdlib.h>
#include<stdio.h>

void initStack(Stack *ps)
{
	ps -> tos = 0;
}

void push(Stack *ps, int data)
{
	if(ps->tos == ARRAYSIZE){
		fprintf(stderr, "stack is full\n");
		exit(1);
	}

}

void main(Stack *ps, int data)
{
	ps->array[ps->tos] = data;
	++ps->tos;
}

int pop(Stack *ps)
{
	if(ps->tos == 0){
		fprintf(stderr, "stack is empty\n");
		exit(2);
	}
	--ps->tos;
	return ps->array[ps->tos];
}
