#ifndef STACK5_H
#define STACK5_H
//#define ARRAYSIZE 100

//타입 Stack로 재정의
typedef struct stack {
	//int array[ARRAYSIZE];
	int *pArr;
	int size;
	int tos;
} Stack;

void initStack(Stack *ps, int size);
void cleanupStack(Stack *ps);
void push(Stack *ps, int data);
//int pop(Stack *ps);
void pop(Stack *ps, int *pResult);

#endif
