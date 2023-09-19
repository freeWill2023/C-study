#include<stdio.h>

int main(void)
{
    void *p;

    int i =100;
    p = &i;
    *(int *)p = 200;     //===  *p = 200;

    //printf("*p :  %d\n", *p); 적용불가
    printf("*p-> i :  %d\n", i);

    double pi = 3.141592;
    p = &pi ;
    *(double *)p =2.71;     //===  *p= 2.71;

    //printf("*p :  %d\n", *p); 적용불가
    printf("*p-> pi :  %.2f\n", pi); 

    return 0;
}