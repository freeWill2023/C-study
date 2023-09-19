#include<stdio.h>

int main(void)
{
	int a, b, c;
	printf("input a: ");
	scanf("%d", &a);
	printf("input b: ");
	scanf("%d", &b);
	printf("input c: ");
	scanf("%d", &c);
	
	int max, min, mid;
	if(a > b){
		max=a;
		min=b;
	}else{
		max=b;
		min=a;
	}
	
	if(c > max){
		mid = max;
		max = c;
	}else if(c > min){
		mid = c;
	}else{
		mid = min;
		min = c;
	}
	
	printf("max: %d mid: %d min: %d\n", max, mid, min);
	
	return 0;
}
