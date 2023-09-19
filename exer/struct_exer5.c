//함수의 전달인자로서 포인터를 사용할 수 있다.
//함수형식은 포인터형식으로 바꿔 쓸 수 있다.
//구조체 포인터 배열 역참조는 '(포인터 인자)->멤버'로 표현한다. 인자: 데이터의 첫번째 주소값
#include<stdio.h>

//type define
typedef struct student
{
	char name[3];
	int kor;
	int eng;
	int mat;
}stdType;

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

