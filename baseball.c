#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
/*
	//문제 내기---------------------------------------------------------------
	int question[3] = {0};
	
	srand(time(NULL));	//seed 랜덤함수의 기준값을 , 초단위로
	for(int i = 1 ; i <= 3 ; ++i){
		question[i] = rand() % 3 + 1 ;
		if(question[i] != question[i+1]){ question[i] = question[i]; }
		else{ question[i] = rand() % 6 + 1; } 
	}

	printf("question: %d %d %d\n", question[1], question[2], question[3]);

	//게임 진행------값 입력---------------------------------------------------------
	int strike, ball, count;
	
	int answer[3];
	for(int j =0 ; j < 3 ; ++j){
		scanf("%d", &answer[j]);
	}
	printf("answer: %d %d %d\n", answer[0], answer[1], answer[2]);
	
	//게임 진행------값 연산---------------------------------------------------------
	for(int k = 0 ; k < 3 ; ++k){
		if(question[k] == answer[k]){ ball = ball + 1; }
		else{ ball = ball ;}
	}
	printf("strike: %d", strike);
	
	for(int k = 0 ; k < 3 ; ++k){
		for(int l =0 ; l < 3 ; ++l){
		if(question[k] == answer[l]){ strike = strike + 1; }
		else{ strike = strike ;}
		}
	}
	printf("\t ball: %d\n", ball);
*/	
///////////////////////////////////////////////////////////////////////////////////
	int question[3];
	srand(time(NULL));

	question[0] = rand() % 9 + 1;
	question[1] = rand() % 9 + 1;
	do{
		question[1] = rand() % 9 + 1;
		}
	while(question[1] == question[0]);
	question[2] = rand() % 9 + 1;
	while(question[2] == question[0] || question[2] == question[1]){
		question[2] = rand() % 9 + 1;
	}

	printf("question: %d %d %d\n", question[0], question[1], question[2]);
	
	//--------------------------------------------------------------------------------
	int strike = 0;
	int ball = 0;
	int count = 0;
	
	while(strike != 3){
		++count;
		strike = ball = 0;
		
		int answer[3];
		printf("input nums: ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);

	//--------------------------------------------------------------------------------

		for(int k = 0 ; k < 3 ; ++k){
			for(int l =0 ; l < 3 ; ++l){
				if(question[k] == answer[l]){
					if(k == l){ strike = strike +1 ;}
					else{++ball;
					}
				}
			}
		}
		printf("strike: %d \t ball: %d\n", strike, ball);
	}

	printf("your count: %d\n", count);

	return 0;
}




