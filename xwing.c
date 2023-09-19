#include<stdio.h>

int main(void)
{
	int i, j;
	
	for(i=0 ; i<5 ; ++i){
		for(j=0 ; j<5 ; ++j){
			/*if((i==j) || (i+j == 4)){
				printf("*");
				}
			else{
				printf(" ");
				} */
				printf( ((i==j) || (i+j == 4)) ? "*" : " ");
		}
		printf("\n");
	}
	
	return 0;
}


//printf( ((i==j) || (i+j == 4)) ? "*" : " "); instead of  'if ~ else'



