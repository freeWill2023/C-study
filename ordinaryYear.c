#include<stdio.h>

int main(void)
{
	int year;
	printf("input year:");
	scanf("%d", &year);
	printf("%d\n", year / 800);
	
	int isOradinary;
	//isOradinary = !(year % 4 == 0 && year % 100 != 0 || year % 400 ==0;)
	isOradinary = year % 4 != 0 || year % 100 == 0 && year % 400 !=0;
	
	printf("%d is a ordinary: %d\n", year, isOradinary);
	return 0;
}



