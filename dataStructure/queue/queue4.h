#ifndef QUEUE3_H
#define QUEUE3_H

#define ARRAYSIZE =100

//구조체 정의는 헤더파일에서
typedef struct queue {
	int array[ARRAYSIZE];
	int front;
	int rear;
} Queue;

void initQueue(Queue *pq);

//void push(int data);
void push(Queue *pq, int data);
//int pop(void);
int pop(Queue *pq);

#endif
