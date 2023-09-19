#include<stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);	
	
	switch(score/10){
		case 10: // case 9:
			printf("score: %d grade: A\n", score);
			break;
		case 9:
			printf("score: %d grade: A\n", score);
			break;
		case 8:
			printf("score: %d grade: B\n", score);
			break;
		case 7:
			printf("score: %d grade: C\n", score);
			break;
		case 6:
			printf("score: %d grade: D\n", score);
			break;
		default: // 5, 4, 3, 2, 1
			printf("score: %d grade: F\n", score);
	}
	return 0;
}
