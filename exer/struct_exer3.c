#include<stdio.h>

struct student
{
	char name[3];
	int kor;
	int eng;
	int mat;
};

void print_std(struct student para[5])
{
    printf("name: kor eng mat\n");
    for(int i=0 ; i<5 ; ++i){
        printf("%3s : %d  %d  %d\n", para[i].name, para[i].kor, para[i].eng, para[i].mat);
    }
}


int main(void)
{
	struct student std[5] = {
	
	{"HKL", 70, 80, 45},
	{"DRV", 36, 90, 52},
	{"GHR", 59, 65, 90},
	{"KLF", 66, 38, 57},
	{"POU", 78, 90, 43}
	};

    print_std(std);

    return 0;
}

