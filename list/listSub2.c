#include<stdio.h>
#include "list2.h"
#include<stdlib.h>
#include<assert.h>

//공용 사용자 함수 정의
static Node *creatNode(int data, Node *next) //listSub2.c에서만 사용
{
	Node *tmp = malloc(sizeof(Node));
	assert(tmp );
	tmp->data = data;
	tmp->next = next;
}



void initList(List *pList)
{
	//pList->ptr = malloc(sizeof(Node));  //dummy
	//assert(pList->ptr);
	
	//pList->ptr->next = NULL;
	pList->ptr = createNode(-1, NULL);
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
	//Node *tmp = malloc(sizeof(Node));
	//assert(tmp );
	//tmp->data = data;
	//tmp->next = pList->ptr->next;
	//pList->ptr->next = tmp;
	pList->ptr->next = createNode(data, pList->ptr->next);
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
		//Node *tmp = malloc(sizeof(Node));
		//assert(tmp );
		//tmp->data = data;
		//tmp->next = p->next;
		//p->next = tmp;	
		p->next = createNode(data, p->next);
	}else {
		// do not
	}
}

void deleteNode(List *pList, int data)
{
	Node *p = pList->ptr->next;
	Node *p2 = pList->ptr;
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
		printf("%d ", p->data);
		printf( (p->next) ? ", " : "");
		p = p->next;
	}
	printf("]\n");
}
