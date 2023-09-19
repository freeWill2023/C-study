//서브 파일화 하기
#include<stdio.h>

typedef struct student
{
	char name[3];
	int kor;
	int eng;
	int mat;
}stdType;

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
//$ alot@ubnt22:~/c_src/exer$ cc -c struct_exer7Sub.c
//$ alot@ubnt22:~/c_src/exer$ cc -c struct_exer7Main.c
//$ alot@ubnt22:~/c_src/exer$ cc struct_exer7Main.o struct_exer7Sub.o -o struct_exer7
//$ alot@ubnt22:~/c_src/exer$ ./struct_exer7