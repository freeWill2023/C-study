#include<stdio.h>
#include"serial.h"

int main(void)
{
	for(int i=0 ; i<=10 ; ++i){
		int number = getSerialNumber();
		
		printf("Hyundai_ramda_%010d\n", number);
	}

	return 0 ;
}
