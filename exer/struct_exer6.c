//전처리 지시자(헤더 파일 만들기)
#include<stdio.h>
#include "struct_exer6.h"

void print_std(stdType *sp)
{
    printf("name: kor eng mat\n");
    for(int i=0 ; i<5 ; ++i){
        printf("%3s : %d  %d  %d\n", (sp+i)->name, (sp+i)->kor, (sp+i)->eng, (sp+i)->mat);
    }
}

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
//$ alot@ubnt22:~/c_src/exer$ cc -c struct_exer6.h
//$ alot@ubnt22:~/c_src/exer$ cc struct_exer6.c -o struct_exer6
//$ alot@ubnt22:~/c_src/exer$ ./struct_exer6