#include<stdio.h>

int main(void)
{
	int num;
	printf("input number:");
	scanf("%d", &num);
	
	int oddOReven;
	oddOReven = (num%2 == 0);
	
	printf("num %d is %d(even=1, odd=0)\n",num, oddOReven);
	
	return 0;
}



