#include<stdio.h>

int main(void)
{
	int frameScores[11] = {0, };
	int scores[11][3] = {0, };

	int bonus;			// 10 frame third cast.
	
	for(int i =1 ; i <=10 ; ++i){
		//first cast -------------------------------------------------------------------
		printf("%d frame first cast: ", i);
		scanf("%d", &scores[i][1]);
		
		//calc score, print frameScores		
		if((i>=2) && (scores[i-1][1] + scores[i-1][2] == 10) && (scores[i-1][1] != 10)){
			frameScores[i-1] = frameScores[i-2] + 10 +	scores[i][1];
			printf("%d frame score: %d\n", i, frameScores[i-1]);
		}
		
		if((i>=3) && (scores[i-2][1] ==10) && (scores[i-1][1] == 10)){
			printf("%d frame score: %d\n", i-2, frameScores[i-2]);
		}
		
		
		//second/spare cast, 1~9 frame (1 cast != 10), 10 frame must be.----------------
		if(scores[i][1] < 10 || i == 10){
			printf("%d frame second cast : ", i);
			scanf("%d", &scores[i][2]);
			//calc score, print frameScores
			if(scores[i-1][1] == 10){
				frameScores[i-1] = frameScores[i-2] + scores[i][1] + scores[i][2] + 10;				
				printf("%d frame score : %d\n", i-1, frameScores[i-1]);
			}
			if(scores[i][1] + scores[i][2] < 10){
				frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2];
				printf("%d frame score : %d\n", i, frameScores[i]);				
			}
		}
		
		
		//bonus cast, 10 frame third cast (frame == 10) && (10 frame first + second >= 10)--
		if(i == 10 && scores[i][1]	+ scores[i][2] >= 10){
			printf("%d frame third cast :  ", i);
			scanf("%d", &bonus);
		   //calc score, print frameScores			
			frameScores[i] = frameScores[i-1] +  scores[i][1]	+ scores[i][2] + bonus;
			printf("%d frame score :  %d\n", i, frameScores[i]);
		}	
	}
	return 0;
}

