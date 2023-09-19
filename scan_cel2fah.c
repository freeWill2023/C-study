#include<stdio.h>

// 0°C × 9/5) + 32 = 32°F
int main(void)
{
	//int cel;
	//cel = 36;
	double cel;
	scanf("%lf", &cel);
	
	double fah;
	fah = (cel*9.0/5.0)+32;
	
	//printf("cel: %d ---> fah: %.2f\n", cel, fah);
	printf("cel: %f ---> fah: %.2f\n", cel, fah);
	
	return 0;
}
