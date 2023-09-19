#include<stdio.h>

int main(void)
{
	long long sum = 0LL; //합계 표현 자릿수 문제
	int i = 1;
	while (i <= 1000000){
		sum = sum + 1;
		++i;
	}
	printf("sum[1, 10, +1]: %lld\n", sum);
	
	long long sum2 = 0LL;
	int j = 1;
	while(j <= 1000000){
		sum2 = sum2 + j + j + 1;
		j += 2;
	}
	printf("sum[1, 10, +2]: %lld\n", sum2);
	
	return 0;
}
