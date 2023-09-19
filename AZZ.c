#include<stdio.h>

int main(void)
{
	int code;
	printf("asc code : ");
	scanf("%d", &code);
	
//	int isTrue = (code >= 65 && code <= 70);
	int isTrue = (code >= 'A' && code <= 'Z');
	printf("code : %d --- big letter ASC code: %d\n", code, isTrue);
	
	return 0;
}




