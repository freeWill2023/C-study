#include<stdio.h>

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
