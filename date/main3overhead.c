#include<stdio.h>

struct date{
	int year;
	int month;
	int day;
};

void printDate(const struct date *pd)
{
	printf("(%d/%d/%d)\n", (*pd).year, (*pd).month, (*pd).day);
	printf("(%d/%d/%d)\n", pd->year, pd->month, pd->day);
}

int main(void)
{
	struct date today;
	today.year = 2023;   //struct date.year = 2023
	today.month = 7;     //struct date.month = 7
	today.day = 7;       //struct date.day = 7
	
	struct date birthday = {2005, 8, 2};
	
	printDate(&today);
	printDate(&birthday);
	
	return 0;
}

