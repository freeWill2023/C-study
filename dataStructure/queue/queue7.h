#ifndef QUEUE7_H
#define QUEUE7_H

//구조체 정의는 헤더파일에서
typedef struct queue {
	void *pArr;
	int eleSize;
	int size;
	int front;
	int rear;
} Queue;

void initQueue(Queue *pq, int size, int eleSize);
void cleanUp(Queue *pq);

void push(Queue *pq, const void *pdata);
void pop(Queue *pq, void *pResult);

#endif
