#ifndef STACK_H
#define STACK_H
#define ARRAYSIZE 100

void initStack(Stack *ps)
//타입 Stack로 재정의
typedef struct stack {
	int array[ARRAYSIZE];
	int tos;
} Stack;

void push(Stack *ps, int data);
int pop(Stack *ps);

/*
struct stack {
	int array[100];
	int tos;
};

void push(struct stack s, int data);
void pop(struct stack s);
*/
#endif
