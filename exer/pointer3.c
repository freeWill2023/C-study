#include<stdio.h>

int main(void)
{
    int a = 0x12345678; //[0001|0010|0011|0100|0101|0110|0111|1000]
    //char *p; 변수타입 다름 => error
    int *p;
    char *q;

    p = &a;
    q = (char *) &a; // 정수형을 문자형으로 전환 포인터 표현식

    printf("*p =  0x%x\n", *p);
    printf("*q =  0x%x\n", *q);

    return 0;
}