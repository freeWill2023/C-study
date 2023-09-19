#include<stdio.h>

int main(void)
{
	printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n");

	int i=1;
	
	while (i<=10){
		printf("%d\n", i);
		++i;
	}
	
	printf("%d", i);
	
	return 0;
}
