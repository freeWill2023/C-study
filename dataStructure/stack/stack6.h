#ifndef STACK6_H
#define STACK6_H
//#define ARRAYSIZE 100

//타입 Stack로 재정의
typedef struct stack {
	//int *pArr;
	void *pArr;
	int eleSize;
	int size;
	int tos;
} Stack;

void initStack(Stack *ps, int size, int eleSize);
void cleanupStack(Stack *ps);
//void push(Stack *ps, int data);
//void push(Stack *ps, const void *pData, int eleSize);
void push(Stack *ps, const void *pData);
//void pop(Stack *ps, int *pResult);
//void pop(Stack *ps, int *pResult, int eleSize);
void pop(Stack *ps, int *pResult);

#endif
