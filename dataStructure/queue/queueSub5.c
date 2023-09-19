#include "queue5.h"


void initQueue(Queue *pq, int size)
{
	pq->pArr = malloc(sizeof(int)*size);
	pq->size = size
	pq->front = 0;
	pq->rear =0;
}

void cleanUp(Queue *pq)
{
	free(pq->pArr);
}

void push(Queue *pq, int data)
{
	if(pq->rear == pq->size){
		fprintf(stderr, "queue is full\n");
		exit(1);	
	}
	pq->pArr[pq->rear] = data;
	++pq->rear;
}

int pop(Queue *pq)
{
		if(pq->front == pq->rear){
		fprintf(stderr, "queue is empty\n");
		exit(2);	
	}
	int result = pq->pArr[pq->front];
	++pq->front;
	
	return result;
}
