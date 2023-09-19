#include<stdio.h>

int main(void)
{
	long long sum2 = 0LL;
	
	int j = 1;
	for(int j = 1 ; j <= 1000000; j += 2){
		sum2 = sum2 + j + j + 1;
	}
	printf("sum[1, 10, +2]: %lld\n", sum2);
	
	return 0;
}
