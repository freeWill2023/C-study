#include<stdio.h>

int main(void)
{
	for(int i = 1 ; i <= 5 ; ++i){
		for( int j = 4 ; j >= i ; --j){ //(int j=4 ; 5-i ; ++j)
			printf(" ");
			}
	
		for( int k = 1 ; k <= i*2-1 ; ++k){
			printf("*");
		}
		printf("\n");	
	}
	
	return 0;
}




