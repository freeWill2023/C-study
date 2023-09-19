#include<stdio.h>
#include "serialSub.c"

int main(void)
{	
	int num = 0;
	for(int i=0 ; i<=10 ; ++i){
		num = getNum();
		printf("Hyundai_ramda_%5d\n", num);
	}
	
	return 0;
}
