//전처리 지시자(헤더 파일 만들기)
//서브 파일화 하기
#include<stdio.h>
#include "struct_exer8.h"

void print_std(stdType *);

int main(void)
{
	stdType std[5] = {
	
	{"HKL", 70, 80, 45},
	{"DRV", 36, 90, 52},
	{"GHR", 59, 65, 90},
	{"KLF", 66, 38, 57},
	{"POU", 78, 90, 43}
	};

    print_std(std);

    return 0;
}
//$ alot@ubnt22:~/c_src/exer$ cc -c struct_exer8Sub.c
//$ alot@ubnt22:~/c_src/exer$ cc -c struct_exer8Main.c
//$ alot@ubnt22:~/c_src/exer$ cc struct_exer8Main.o struct_exer8Sub.o -o struct_exer8
//$ alot@ubnt22:~/c_src/exer$ ./struct_exer8