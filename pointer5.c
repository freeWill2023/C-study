#include<stdio.h>

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int main(void)
{
	int re;
	re = add(4, 3);
	printf("re: %d\n", re);
	
	int (*fpa)(int, int);
	fpa = &add;
	re = (*fpa)(4, 3);
	printf("re: %d\n", re);
	
	int (*fps)(int, int);
	fps = &sub;
	re = (*fps)(4, 3);
	printf("re: %d\n", re);
	
	return 0;
}
