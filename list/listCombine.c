#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct node{
	int data;
	struct node *next;
}Node;

typedef struct list{
	Node *ptr;
}List;

void initList(List *pList)
{
	pList->ptr = malloc(sizeof(Node));  //dummy
	assert(pList->ptr);
	
	pList->ptr->next = NULL;
}

void cleanUpList(List *pList)
{
	Node *p = pList->ptr;
	while(p != NULL){
		Node *p2 = p;
		p = p->next;
		free(p2);
	}
}

void insertFirstNode(List *pList, int data)
{
	Node *tmp = malloc(sizeof(Node));
	assert(tmp );
	tmp->data = data;
	tmp->next = pList->ptr->next;
	pList->ptr->next = tmp;
}

void insertNode(List *pList, int prevData, int data)
{
	Node *p = pList->ptr->next;
	
	while(p != NULL){
		if(prevData == p->data){
			break;
		}
		p = p->next;
	}
	if(p != NULL){
		Node *tmp = malloc(sizeof(Node));
		tmp->data = data;
		tmp->next = p->next;
		p->next = tmp;	
	}else {
		// do not
	}
}
void deleteNode(List *pList, int data)
{
	Node *p = pList->ptr->next;    //dummy
	Node *p2 = pList->ptr;         //data
	while(p != NULL){
		if(data == p->data){
			break;
		}
		p = p->next;
		p2 = p2->next;
	}
	if(p != NULL){
		p2->next = p->next;
		free(p);
	}else {
		//do not.
	}
}

void printList(const List *pList)
{
	Node *p = pList->ptr->next;
	
	printf("[");
	while(p != NULL){
		printf("%d, ", p->data);
		p = p->next;
	}
	printf("]\n");
}
//---------------------------------------------------------
int main(void)
{
	List list;
	initList(&list);
	
	insertFirstNode(&list, 4);
	printList(&list);

	insertFirstNode(&list, 3);
	printList(&list);

	insertFirstNode(&list, 1);
	printList(&list);
	
	insertNode(&list, 1, 2);
	printList(&list);
	
	deleteNode(&list, 3);	
	printList(&list);
	
	cleanUpList(&list);
	
	return 0;
}
