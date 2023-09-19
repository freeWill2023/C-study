#include<stdio.h>

int main(void)
{

	int kuk, young, suu;
	printf("input kor eng mat : ");
	scanf("%d %d %d", &kuk, &young, &suu);
	
	int sum;
	sum = kuk + young + suu;

	double avg;
	avg = sum / 3.0;
	
	printf("sum: %d\tavg: %.2f\n", sum, avg);

	return 0;
}






