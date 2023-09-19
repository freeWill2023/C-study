#include<stdio.h>
#include "queue4.h"

//struct queue {
//	int array[100];
//	int front;
//	int rear;
//};
//typedef struct queue {
//	int array[100];
//	int front;
//	int rear;
//} Queue;

int main(void)
{
//	struct queue  q1, q2	
	Queue q1, q2
	
//	q1.front = q1.rear = 0;	
//	q2.front = q2.rear = 0;	
	initQueue(&q1);
	initQueue(&q2);

	push(&q1, 100);
	push(&q1, 200);
	push(&q1, 300);	
		
	printf("q1 1st pop() : %d\n", pop(&q1));	
	printf("q1 2nd pop() : %d\n", pop(&q1));
	printf("q1 3rd pop() : %d\n", pop(&q1));
	
	push(&q2, 900);
	push(&q2, 800);
	push(&q2, 700);	
		
	printf("q2 1st pop() : %d\n", pop(&q2));	
	printf("q2 2nd pop() : %d\n", pop(&q2));
	printf("q2 3rd pop() : %d\n", pop(&q2));

	return 0;
}
