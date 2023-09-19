#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	int isTrue;
	isTrue = num >= 1 && num <= 10;
	printf("%d is [1~10]: %d (True 1, False 0)\n", num, isTrue);
	
	return 0;
}




