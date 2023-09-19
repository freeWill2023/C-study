#include<stdio.h>

// (섭씨-32)*5/9=화씨

int main(void)
{
	int fah;
	int fah_1;
	int fah_2;
	int cel;
	
	cel=100;
	
	fah = ((cel-32)*5)/9;
	
	//fah_1 = ((cel-32)*5*100)/9-3700;
	fah_1 = (1000* ((cel-32)*5)/9)-37000;
	fah_2 = (fah_1 + 5)/10;
	
	
	//int fah= 1000*5*(cel-32)/9
	//int fah= 5000*(cel-32)/9
	
	//int fah_1= cel / 1000;
	//int fah_2= ((cel - (cel/1000))*1000+5)/10
	
	printf("cel:%d => fah:%d.%d \n", cel, fah, fah_2);

	return 0;
	
}












