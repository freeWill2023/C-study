#include<stdio.h>

int main(void)
{
	char c;
	printf("input char:");
	scanf("%c", &c);         //문자로 입력 받음

	int isTrue = (c>= 'A' && c <= 'Z');

	printf("%c is a big letter : %d\n", c, isTrue);    //문자출력 %c

	return 0;
}
