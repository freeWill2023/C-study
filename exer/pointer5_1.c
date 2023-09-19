#include<stdio.h>

int addUDF(int c, int d)
{
    return c + d;
}

int subUDF(int e, int f)
{
    return e - f;
}

int main(void)
{
    int a = 4;
    int b = 3;

    int add = addUDF(a, b);
    int sub = subUDF(a, b);

    printf("add a + b =  %d\n", add);
    printf("sub a - b =  %d\n", sub);

    return 0;
}