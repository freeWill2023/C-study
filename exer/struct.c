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
    struct student std[5];

    std[0] = {HKL, 70, 80, 45};
    std[1] = {DRV, 36, 90, 52};
    std[2] = {GHR, 59, 65, 90};
    std[3] = {KLF, 66, 38, 57};
    std[4] = {POU, 78, 90, 43};

    for(int i=0 ; i<5 ; ++i){
        printf("%s %d %d %d\n", std[i].name, std[i].kor, std[i].eng, std[i].mat);
    }

    return 0;
}