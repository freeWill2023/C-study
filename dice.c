#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	srand(time(NULL));	//랜덤함수의 기준값 seed, 초단위, 1970.01.01 ~ now
	for(int i = 1 ; i <= 10 ; ++i){
		int num = rand() % 6 +1 ;  //123456 주사위 면수
		printf("num: %d\n", num);
	}
	
	return 0;
}




