#include<stdio.h>

int gcd(int n, int m)
{
	int result;
	
	for(int i=0 ; i<=10 ; ++i){
		result[i] = n % m;
		if(result == 0){
		break;
		}
	}
	
	return result;
}
//------------------------------------------------------
int main(void)
{
	int value[2] = {48, 52}

	printf("%d %d G.C.D: %d\n", value[0], vlaue[1], gcd(value[0], vlaue[1]));
	
	return 0;
}




