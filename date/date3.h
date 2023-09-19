#ifndef DATE_H
#define DATE_H

struct date{
	int year;
	int month;
	int day;
};

void  printDate(const struct date *pd); //*pd 값 안바꿈

#endif
