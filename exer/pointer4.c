#include<stdio.h>


int main(void)
{
    int a;
    int *pa;    //단일 포인터: a주소값인 pa변수
    int **ppa;  //다중 포인터: a주소값인 pa변수의 주소값 변수ppa

    a = 100;

    pa = &a;
    ppa = &pa;

    //*pa = 123;
    **ppa = 123;

    printf("**ppa =  %d\n", a);
    printf("**ppa =  %d\n", **ppa);

    return 0;
}