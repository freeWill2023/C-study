#include<stdio.h>
#include<math.h>  //pow()

long long power(int base, int exponent)
{
	long long result = 1;
	
	for(int i=1 ; i<=exponent ; ++i){
		result = 	result * base; //result *= base
	}
	
	return result;
}

int main(void)
{
	for(int i=0 ; i<=32 ; ++i){
		long long result = power(2, i);
		printf("2 power of %d = %lld\n", i, result);
	}
	
	return 0;
}




