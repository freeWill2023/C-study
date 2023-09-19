#include<stdio.h>

int main(void)
{
	int *p;
	p = NULL;
	
	int num;
	p = &num;
	*p = 100;
	
	printf("*p: %d\n",num);


	int nums[5];
	p = &nums[2];
	*p = 200;
	
	printf("*p: %d\n",nums[2]);

	return 0;
}




