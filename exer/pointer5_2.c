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

    //int add = addUDF(a, b);
    int (*fpadd)(int, int);
    fpadd = &addUDF;
    int add = (*fpadd)(a, b);

    //int sub = subUDF(a, b);
    int (*fpsub)(int, int);
    fpsub = &subUDF;
    int sub = (*fpsub)(a, b); 

    printf("add_p a + b =  %d\n", add);
    printf("sub_p a - b =  %d\n", sub);

    return 0;
}