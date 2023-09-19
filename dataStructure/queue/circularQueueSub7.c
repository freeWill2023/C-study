#include "circularQueue7.h"
#include<stdlib.h>
#include<assert.h>
#include<string.h>


void initQueue(Queue *pq, int size, int eleSize)
{
	pq->pArr = malloc(eleSize*size);
	assert(pq->pArr != NULL);
	
	pq->eleSize = eleSize;
	pq->size = size;
	pq->front = 0;
	pq->rear =0;
}

void cleanUp(Queue *pq)
{
	free(pq->pArr);
}

void push(Queue *pq, const void *pdata)
{
//	assert(pq->rear != pq->size);
	assert( (pq->rear +1) % pq->size != pq->front);
	
	memcpy((unsigned char *)pq->pArr + pq->eleSize * pq->rear, pdata, pq->eleSize);
	pq->rear = (pq->rear + 1) % pq->size;
}

void pop(Queue *pq, void *pResult)
{
	assert(pq->front != pq->rear);
	
	pq->front = (pq->front +1 ) % pq->size;
	memcpy(pResult, (unsigned char *)pq->pArr + pq->eleSize * pq->front, pq->eleSize);
}
