#include<stdio.h>

int main(void)
{
	int frameScores[11] = {0, };
	int scores[11][3] = {0, };
	
	for(int i = 1 ; i <= 10 ; ++i){
		// first cast
		printf("%d frame first cast: ", i);
		scanf("%d", &scores[i][1]);
		// calc score , print frameScores
		frameScores[i] = frameScores[i] + frameScores[i-1] + scores[i][1];
		printf("%d frame score: %d\n", i, frameScores[i]);	
		
		if((i < 10) && (scores[i][1] != 10)){
		// fspare cast
			printf("%d frame spare cast: ", i);
			scanf("%d", &scores[i][2]);
		// calc score, print frameScores
			frameScores[i] = frameScores[i] + scores[i][2];
			printf("%d frame score: %d\n", i, frameScores[i]);	
		}
		// 10 feame bonus cast
		if(i == 10 && scores[i][1] >= 10){
			printf("%d frame second cast: ", i);
			scanf("%d", &scores[i][2]);
			frameScores[i] = frameScores[i] + scores[i][2];
			printf("%d frame score: %d\n", i, frameScores[i]);

			printf("%d frame bonus cast: ", i);
			scanf("%d", &scores[i][3]);
			frameScores[i] = frameScores[i] + scores[i][3];
			printf("%d frame score: %d\n", i, frameScores[i]);	
		}
	}
	
	return 0;
}

