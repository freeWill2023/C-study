#include<stdio.h>

int main(void)
{
	printf("%d %d %d\n",100, 0144, 0x64);
	printf("%d %o %x\n",100, 100, 100);
	printf("%d %o 0x%x\n",100, 100, 100);
	printf("%d %d %d\n", 'A', 'a', '0');
	printf("%o %o %o\n", 'A', 'a', '0');
	printf("%d %d %d\n", 'A', 'A'+1, 'A'+2);
	printf("%c %c %c\n", 'A', 'B', 'C');
	printf("%f %f\n", 3.14, 2.718F);
	printf("%s\n", "ABCD");
	printf("%lld\n", 10000000000LL);
	
	return 0;
}















