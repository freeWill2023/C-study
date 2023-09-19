#include "queue3.h"

int queue[100];
int front;
int rear;

//void push(int data)
void push(Queue *pq, int data)
{
	//queue[rear] = data;
	pq->array[pq->rear] = data;
	//++rear;
	
}

//void pop(int
int pop(Queue *pq)
{
	//int result = queue[front];
	int result = pq->array[pq->front];
	//++front;
	++pq->front;
	
	return result;
}
