#include<stdio.h>

struct student
{
	char name[3];
	int kor;
	int eng;
	int mat;
};

int main(void)
{
	struct student std[5] = {
	
	{"HKL", 70, 80, 45},
	{"DRV", 36, 90, 52},
	{"GHR", 59, 65, 90},
	{"KLF", 66, 38, 57},
	{"POU", 78, 90, 43}
	};

	printf("name  kor eng mat\n");

    for(int i=0 ; i<5 ; ++i){
        printf("%s %d %d %d\n", std[i].name, std[i].kor, std[i].eng, std[i].mat);
    }

    return 0;
}

