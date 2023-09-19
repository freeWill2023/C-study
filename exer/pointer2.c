#include<stdio.h>

int main(void)
{
    int *p;
    p = NULL;

    int num;
    p = &num;
    *p = 200;

    printf("*p=> num: %d\n", num);

    //배열에 적용 => 개별 배열에 주소값 저장
    int nums[5];
    p = &nums[2];
    *p = 300;

    printf("*p=> nums[2]: %d\n", nums[2]);

    return 0;
}