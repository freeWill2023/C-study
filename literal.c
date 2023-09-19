#include<stdio.h>

int main(void)
{
	printf("%d %d %d\n", 100, 0144, 0x64);
	printf("%d %o %x\n", 100, 100, 100);    
	//decimal(10), octal(8), hexa-deci(16)
	
	printf("%d %d %d\n", 'A', 'a', '0');
	printf("%d %d %d\n", 'A', 'A'+1, 'A'+2);
	// ASCII
	
	printf("%c %c %c\n", 'A', 'a', '0');
	//printf("%c %c %c\n", '65', 97, 48);
	
	printf("%c %c %c\n", 'A', 'A'+1, 'A'+2);
	//printf("%c %c %c\n", 'A', 'B', 'C');
	
	printf("%f %f\n", 3.14, 2.718F);
	printf("%s\n", "ABCD");
	
	printf("%lld\n", 10000000000LL);  
	//유효숫자를 넘어선 정수 표현
	
	return 0;
}












