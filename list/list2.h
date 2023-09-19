#ifndef LIST2_H
#define LIST2_H

typedef struct node{
	int data;
	struct node *next;
}Node;

typedef struct list{
	Node *ptr;
}List;

void initList(List *pList);
void cleanUpList(List *pList);

void insertFirstNode(List *pList, int data);
void insertNode(List *pList, int prevData, int data);
void deleteNode(List *pList, int data);

void printList(const List *pList);

#endif