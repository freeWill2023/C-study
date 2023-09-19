/*
#include<stdio.h>

//(32°F − 32) × 5/9 = 0°C, (0°C × 9/5) + 32 = 32°F
int main(void)
{
	int fah;	//화씨
	//int fah;	//화씨
	float cel;	//섭씨
	
	fah = 100;
	cel = (fah-32)*5/9;
	//cel = (fah-32)*5.0/9.0;		//부동소수점 연산
	//cel = ((fah-32)*5.0)/9.0;
	//cel = 5*(fah-32)/9;
	printf("fah: %d ----> cel: %lf \n", fah, cel);

	return 0;
}
*/

#include<stdio.h>

//(32°F − 32) × 5/9 = 0°C, (0°C × 9/5) + 32 = 32°F
int main(void)
{
	int fah;	//화씨
	double cel;	//섭씨
	
	fah = 100;
	//cel = (fah-32)*5/9;    cel = int(((double)(fah-32)) - (double)(5/9))
	//cel = (fah-32)*5.0/9.0;		//부동소수점 연산
	cel = (fah-32)*5.0/9.0;
	//cel = 5*(fah-32)/9;
	printf("fah: %d ----> cel: %.2f \n", fah, cel);

	return 0;
}

