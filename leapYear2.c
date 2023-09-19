#include<stdio.h>

int main(void)
{
	int year;
	printf("input year:");
	scanf("%d", &year);
	printf("%d\n", year / 800);
	
	//int leapYear;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 ==0){
		printf("%d is a leap year: \n", year);
	}
	else{
		printf("%d is a ordinary year: \n", year);
	}
//	leapYear = year % 4 == 0 && year % 100 != 0 || year % 400 ==0;
//	leapYear = year % 400 == 0 || year %  == 0 && year % 100 !=0;
//	printf("%d is a leap: %d\n", year, leapYear);
	return 0;
}
// 400year, 4year, 100year



