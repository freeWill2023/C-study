#include "stack.h"
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>

void initStack(Stack *ps, int size)
{
	ps->pArr = malloc(sizeof(int)*size);
	assert(pd->pArr != NULL);
	ps->size = size;
	ps -> tos = 0;
}

void cleanupStack(Stack *ps)
{
	free(pa->pArr);
}

void push(Stack *ps, int data)
{
	if(ps->tos == ps->size){
		fprintf(stderr, "stack is full\n");
		exit(1);
	}
}

void push(Stack *ps, int data)
{
/*
	ps->array[ps->tos] = data;
	++ps->tos;
	*/
	assert(ps->tos != ps->size);
	
	ps->pArr[ps->tos] = data;
	++ps->tos;
}

int pop(Stack *ps)
{
/*
	if(ps->tos == 0){
		fprintf(stderr, "stack is empty\n");
		exit(2);
	}
	*/
	assert(ps->tos !=0)
	
	--ps->tos;
	return ps->pArr[ps->tos];
}
