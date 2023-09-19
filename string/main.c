#include<stdio.h>

int main(void)
{
	//char *name;
	char name[21];
	scanf("%20s", name);      //%s : 문자 배열 마지막에 \o까지 입력함.

	pritnf("%s", name);       //%s : 주소값에소 문자 배열의 \o까지 출력함.

	return 0;
}
