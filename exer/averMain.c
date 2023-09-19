#include<stdio.h>
#include "aver.h"

void inputData(int *pa, int *pb)
{
	printf("두 정수 입력: ");
	scanf("%d %d", pa, pb);
}


double average(int a, int b)
{
	int total = a + b;
	double aver = total/2.0;

	return aver;
}

int main(void)
{
	int a, b;
	double aver;
	
	inputData(&a, &b);
	aver = average(a, b);
	
	printf("%d와 %d의 평균 : %.1lf\n", a, b, aver);

	return 0;
}
