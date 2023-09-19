#include<stdio.h>

int main(void)
{
	//int score0, score1, score2, score3, score4;
	int scores[5];
	
	//scanf("%d", &score0)......scanf("%d", &score4)
	for(int i=0 ; i <= 5-1 ; ++i){
		scanf("%d", &scores[i]);
	}
	
	int sum;
	for(int j=0 ; j<5 ; ++j){
		sum = sum + scores[j];
	}
	
	double average = sum/ 5.0;
	
	printf("sum: %d \t average: %.2f\n", sum, average);
		
	return 0;
}




