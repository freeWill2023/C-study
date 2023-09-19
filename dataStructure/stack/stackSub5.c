#include "stack5.h"
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>

void initStack(Stack *ps, int size)
{
	ps->pArr = malloc(sizeof(int)*size);
	assert(ps->pArr != NULL);
	ps->size = size;
	ps -> tos = 0;
}

void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}
/*
void push(Stack *ps, int data)
{
	if(ps->tos == ps->size){
		fprintf(stderr, "stack is full\n");
		exit(1);
	}
}
*/
void push(Stack *ps, int data)
{
	assert(ps->tos != ps->size);
	
	ps->pArr[ps->tos] = data;
	++ps->tos;
}
/*
int pop(Stack *ps)
{

	assert(ps->tos !=0)
	
	--ps->tos;
	return ps->pArr[ps->tos];
}
*/
void pop(Stack *ps, int *pResult)
{
	assert(ps->tos != 0);
	
	--ps->tos;
	*pResult = ps->pArr[ps->tos];
}