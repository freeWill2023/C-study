#include "queue4.h"

//int queue[100];
//int front;
//int rear;

void initQueue(Queue *pq)
{
	pq -> front = 0;
	pq -> rear =0;
}


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
