#include<stdio.h>

int main(void)
{
	int num;
	printf("input num: ");
	scanf("%d", &num);
	
	int isTrue = (num >= 1 && num <= 10);
	//int isTrue = (1 <= num <= 10);
	printf("%d in [1 ~ 10] : %d\n", num, isTrue);
	
	return 0;
}




