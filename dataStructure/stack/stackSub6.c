#include "stack6.h"
#include<stdlib.h>
//#include<stdio.h>
#include<assert.h>
#include<string.h>

void initStack(Stack *ps, int size, int eleSize)
{
	//ps->pArr = malloc(sizeof(int)*size);
	ps->pArr = malloc(eleSize*size);
	assert(ps->pArr != NULL);
	
	ps->eleSize = eleSize;
	ps->size = size;
	ps->tos = 0;
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
//void push(Stack *ps, int data)
//void push(Stack *ps, const void *pData, int elesize)
void push(Stack *ps, const void *pData)
{
	assert(ps->tos != ps->size);
	
	//ps->pArr[ps->tos] = data;
	//memcpy(&ps->pArr[ps->tos], pData, ps->eleSize);
	memcpy((unsigned char *)ps->pArr + ps->eleSize * ps->tos, pData, ps->eleSize);
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
//void pop(Stack *ps, int *pResult, int elesize)
void pop(Stack *ps, int *pResult)
{
	assert(ps->tos != 0);
	
	--ps->tos;
	//*pResult = ps->pArr[ps->tos];
	//memcpy(pResult, &ps->pArr[ps->tos], ps->eleSize);
	memcpy(pResult, (unsigned char *)ps->pArr + ps->eleSize * ps->tos, ps->eleSize);
}
