#include<stdio.h>

int main(void)
{
	///*input------------------------------------
	int score, score2, score3;
	int sum =0 ;
	
	//1~9 frame-----------------------------------	
	for(int i=1 ; i<10 ; ++i){
		printf("%d frame first  cast: ", i);
		scanf("%d", &score);
		sum = sum + score;
		
		if(score < 10){
			printf("%d frame spare  cast: ", i);
			scanf("%d", &score2);
			sum = sum + score2;
			
			if(score + score2 == 10){
			printf("%d frame bonus  cast: ", i);
			scanf("%d", &score3);
			sum = sum + score3;
			}else{
				printf("-------------------------\n");
				continue;
			}
		}
	
		printf("sum =  %d\n", sum);
		printf("-------------------------\n");
	}
	
	//10 frame ---------------------------------------
	int score10, score11, score12;
	
	printf("10 frame first  cast: ");
	scanf("%d", &score10);
	
	if(score10 == 10){sum = sum + 0;}
	else{sum = sum + score10;}
	
	printf("10 frame bonus  cast: ");
	scanf("%d", &score11);
	sum = sum + score11;

	printf("10 frame spare  cast: ");
	scanf("%d", &score12);
	sum = sum + score12;
	
	printf("sum =  %d\n", sum);
	printf("-------------------------\n");
	
	return 0;
}
//*/
//---------------------------------------------------------------

/*
int main(void)
{ 

	int frameScore[11] = {0,};

	//1~9 frame
	int score[10][3] = {0, };
	
	for(int i = 0 ; i < 10 ; ++i){
		printf("%d frame first  cast: ", i+1);
		scanf("%d", &score[i]);
		if(score[i][j] < 10){
			printf("%d frame second  cast: ", i+1);
			scanf("%d", &score[i+1]);
		}else{
			for(int j=0 ; j<2 ; ++j){
				scanf("%d", &score[i][j]);
				frameScore[i] = score[i][j];
				printf("sum: %d\n", frameScore[i]);
			}
		}
	}

		//1st cast
		//cal score
		//2nd cast, ? 1st cast != 10
		//cla score

	
	return 0;
}
*/
	//10 frame
	//int score10[4]= {0, };

	
	






