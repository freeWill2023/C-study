#include<stdio.h>
#include<time.h> //time함수 헤더

void my_srand(int);//declaration 함수 정의
int my_rand(void);

int main(void)
{
	my_srand(time(NULL));

	for(int i=1 ; i<=10 ; ++i){
		int num = my_rand();
		printf("num : %d\n", num);
	
	}

	return 0;
}

//delaration 함수ㅍ정의
int seed;

void my_srand(int s)  // 
{
	seed = s;
}

int my_rand(void)
{
	seed = seed * 1103515245 + 12345;
	return ((unsigned)(seed / 65536) % 32768);
}
