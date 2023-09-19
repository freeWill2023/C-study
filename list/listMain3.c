//generic programing
#include "list3.h"

void printInt(const void *p)
{
	printf("%d", *(int *)p);
}

void printDouble(const void *p)
{
	printf("%f", *(double *)p);
}

int main(void)
{
	List list1, list2;
	initList(&list1, sizeof(int));
	initList(&list2, sizeof(double));
	
	int i;
	i = 4;		insertFirstNode(&list1, &i);
	i = 3;		insertFirstNode(&list1, &i);
	i = 1;		insertFirstNode(&list1, &i);
	
	int j;
	j = 1;
	j = 2;		insertNode(&list1, &j, &i);
	j = 3;		deleteNode(&list1, &i);
	
	printList(&list1, printInt);

	double d;
	d = 1.1;	insertFirstNode(&list2, &d);
	d = 2.2;	insertFirstNode(&list2, &d);
	d = 3.3;	insertFirstNode(&list2, &d);

	double f;
	f = 1.1;
	f = 2.2;	insertNode(&list2, &f, &d);
	f = 3.3;	deleteNode(&list2, &d);
	
	printList(&list2, printDouble);
	
	cleanUpList(&list1);
	cleanUpList(&list2);
	
	return 0;
}
