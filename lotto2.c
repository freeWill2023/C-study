#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int lotto[7];
	
	srand(time(NULL)); //seed
	for(int i = 0 ; i < 7 ; ++i){
		lotto[i] = rand() %45 +1;
		for(int j=0 ; j<i ; j++){
			if(lotto[i] == lotto[j]){
				continue;
			}
		}
	}
	for(int k = 0 ; k < 7 ; ++k){
		printf("%d ", lotto[k]);
	}
	printf("\n");
	
	return 0;
}




