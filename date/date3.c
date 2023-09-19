#include<stdio.h>
#include"date3.h"

void printDate(const struct date *pd)
{
	printf("(%d/%d/%d)\n", (*pd).year, (*pd).month, (*pd).day);
	printf("(%d/%d/%d)\n", pd->year, pd->month, pd->day);
}
