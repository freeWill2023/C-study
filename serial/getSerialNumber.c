#include<stdio.h>
//#include"serial.h"

int getSerialNumber(void)
{
	static int count = 0;
	return ++count;
}

int main(void)
{
	for(int i=0 ; i<=10 ; ++i){
		int number = getSerialNumber();
		
		printf("Hyundai_ramda_%010d\n", number);
	}

	return 0 ;
}

//#ifndef SERIAL_H
//#define SERIAL_H

//int getSerialNumber(void)

//#endif
