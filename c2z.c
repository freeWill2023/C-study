#include<stdio.h>

int main(void)
{
	char c;
	printf("input char:");
	scanf("%c", &c);    //문자로 입력 받음 %c, 1bye 정수
	
	int isTrue = (c >= 'C' && c <= 'Z');
	
	printf("%c is a big letter then C: %d\n", c, isTrue); //문자로 출력 %c

	return 0;
}
