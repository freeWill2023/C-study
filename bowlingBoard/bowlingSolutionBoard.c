#include<stdio.h>
#include "board.h"
/*
int main(void)
{
	setScore(1, 1, 5);
	setScore(5, 1, 10);
	setScore(6, 1, 9);
	setScore(6, 2, 1);
	setScore(10, 1, 0);
	setScore(10, 2, 10);
	
	setFrameScore(1, 150);
	
	printBoard();

	return 0;
}
*/
int main(void)
{
	int frameScores[11] = {0, };    				// erase
	int scores[11][3] = {0, };                   // erase

	int bonus;			// 10 frame third cast.
	
	printBoard();
	
	for(int i =1 ; i <=10 ; ++i){
		//first cast -------------------------------------------------------------------
		printf("%d frame first cast: ", i);
		scanf("%d", &scores[i][1]);                 //    &setScores(i, 1, ?)
		setScore(i , 1, scores[i][1]);
		printBoard();
		
		//calc score, print frameScores
		if((i>=2) && (scores[i-1][1] + scores[i-1][2] == 10) && (scores[i-1][1] != 10)){
			frameScores[i-1] = frameScores[i-2] + 10 +	scores[i][1];
			//printf("%d frame score: %d\n", i, frameScores[i-1]);
			setFrameScore(i-1, frameScores[i-1]);
			printBoard();
		}else if((i>=3) && (scores[i-2][1] ==10) && (scores[i-1][1] == 10)){
		
			//printf("%d frame score: %d\n", i-2, frameScores[i-2]);
			printBoard();
		}
		
		
		//second/spare cast, 1~9 frame (1 cast != 10), 10 frame must be.----------------
		if(scores[i][1] < 10 || i == 10){
			printf("%d frame second cast : ", i);
			scanf("%d", &scores[i][2]);
			setScore(i, 2, scores[i][2]);
			printBoard();
			//calc score, print frameScores
			if(scores[i-1][1] == 10){
				frameScores[i-1] = frameScores[i-2] + scores[i][1] + scores[i][2] + 10;	
				setFrameScore(i-1, frameScores[i-1]);			
				//printf("%d frame score : %d\n", i-1, frameScores[i-1]);
				printBoard();	
			}
			if(scores[i][1] + scores[i][2] < 10){
				frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2];
				setFrameScore(i, frameScores[i]);			
				//printf("%d frame score : %d\n", i, frameScores[i]);
				printBoard();		
			}
		}
		
		
		//bonus cast, 10 frame third cast (frame == 10) && (10 frame first + second >= 10)--
		if(i == 10 && scores[i][1]	+ scores[i][2] >= 10){
			printf("%d frame third cast :  ", i);
			scanf("%d", &bonus);
			setScore(i, 3, bonus);
		   //calc score, print frameScores			
			frameScores[i] = frameScores[i-1] +  scores[i][1]	+ scores[i][2] + bonus;
			setFrameScore(i, frameScores[i]);
			//printf("%d frame score :  %d\n", i, frameScores[i]);
			printBoard();
		}	
	}
	return 0;
}
