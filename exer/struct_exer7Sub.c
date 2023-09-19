//서브 파일화 하기
#include<stdio.h>

typedef struct student
{
	char name[3];
	int kor;
	int eng;
	int mat;
}stdType;

void print_std(stdType *ps)
{
    printf("name: kor eng mat\n");
    for(int i=0 ; i<5 ; ++i){
        printf("%3s : %d  %d  %d\n", (ps+i)->name, (ps+i)->kor, (ps+i)->eng, (ps+i)->mat);
    }
}

//$ alot@ubnt22:~/c_src/exer$ cc -c struct_exer7.c
