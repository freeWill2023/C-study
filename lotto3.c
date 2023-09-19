#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	// balls ready---------------------------------
	int balls[45];
	
	for(int i=0 ; i<45 ; ++i){
		balls[i] = i + 1;
	}

	// shuffle-------------------------------------
	srand(time(NULL));
	for(int j=1 ; j<1000000 ; ++j){
		int left = rand()%45;
		int right = rand()%45;
		
		int tmp = balls[left];
		balls[left] = balls[right];
		balls[right] = tmp;	
	}
	
	// outpot -------------------------------------
	for(int k = 0 ; k < 7 ; ++k){
		printf("%2d", balls[k]);
		printf( (k<6) ? " " : "\n");
	}
	
	return 0;
}




