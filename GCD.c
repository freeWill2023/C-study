#include<stdio.h>

int gcd(int n, int m)
{
	int result;
	
	result = n % m;
	while(result != 0){
		n = m;
		m = result;
		result = n % m;
		}
	}
	
	//fwhile((r=a%b) != 0){
		//a = b;
		//b = a;
	//}
	
	return m;
}
//------------------------------------------------------
int main(void)
{
	int a, b;
	printf("input 2 nums: ");
	scanf("%d %d", &a, &b);
	
	int gcdResult;
	gcdResult = gcd(a, b);
	printf("%d %d G.C.D: %d\n", a, b, gcdResult);
	
	return 0;
}




