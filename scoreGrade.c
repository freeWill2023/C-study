#include<stdio.h>

int main(void)
{
	int score;
	printf("input score: ");
	scanf("%d", &score);

	if(score >= 90){
		printf("score %d: --- Grade A\n", score);
	}else if(score >= 80){printf("score %d: --- Grade B\n", score);
	}else if(score >= 70){printf("score %d: --- Grade C\n", score);
	}else if(score >= 60){printf("score %d: --- Grade D\n", score);
	}else{printf("score %d: --- Grade F\n", score);
	}
	
	return 0;
}




