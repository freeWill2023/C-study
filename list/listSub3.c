#include<stdio.h>
#include "list.h"
#include<stdlib.h>
#include<assert.h>
#include<string.h>

void initList(List *pList, int eleSize)
{
	pList->ptr = malloc(sizeof(Node));  //dummy
	assert(pList->ptr);
	pList->eleSize = eleSize;
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

void insertFirstNode(List *pList, const void *pData)
{
	Node *tmp = malloc(sizeof(Node) + pList->eleSize);
	assert(tmp );
	//tmp->data = data;
	memcpy(tmp+1, pData, pList->eleSize);
	tmp->next = pList->ptr->next;
	pList->ptr->next = tmp;
}

void insertNode(List *pList, const void *prevData, const void *pData)
{
	Node *p = pList->ptr->next;
	
	while(p != NULL){
		//if(prevData == p->data){
		if(memcmp(pprevData, p +1, pList->eleSize == 0)){
			break;
		}
		p = p->next;
	}
	if(p != NULL){
		Node *tmp = malloc(sizeof(Node) + pList->eleSize);
		//tmp->data = data;
		memcpy(tmp+1, pData, pList->eleSize);		
		tmp->next = p->next;
		p->next = tmp;	
	}else {
		// do not
	}
}

void deleteNode(List *pList, const void *pData)
{
	Node *p = pList->ptr->next;
	Node *p2 = pList->ptr;
	while(p != NULL){
		//if(data == p->data){
		if(memcmp(pData, p +1, pList->eleSize == 0)){
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

void printList(const List *pList, void(*print)(const void *))
{
	Node *p = pList->ptr->next;
	
	printf("[");
	while(p != NULL){
		//printf("%d ", p->data);
		(*print)(p + 1);
		printf( (p->next) ? ", " : "");
		p = p->next;
	}
	printf("]\n");
}
