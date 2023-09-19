#include<stdio.h>
#include"date.h"

void printDate(struct date d)
{
	printf("(%d/%d/%d)\n", d.year, d.month, d.day);
}
