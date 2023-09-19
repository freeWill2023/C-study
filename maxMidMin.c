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

	if(a>b){
		if(c>a){
			printf("max: %d mid: %d min: %d\n", c, a, b);
		}else if(c > b)
			{printf("max: %d mid: %d min: %d\n", a, c, b);
		else{
			printf("max: %d mid: %d min: %d\n", a, c, b);
		}
	}else{
		if(c>b){
			printf("max: %d mid: %d min: %d\n", c, b, a);
			}else if(c > a){
				printf("max: %d mid: %d min: %d\n", b, c, a);
			}else{
				printf("max: %d mid: %d min: %d\n", a, c, b);
			}
	}
	
/*

	int max, min, mid;

	if(a>b){max=a;}
	else if(b>c){max=b;}
	else{max=c;}
	printf("max is : %d\n", max);
	
	if(a<b){min=a;}
	else if(b<c){min=b;}
	else{min=c;}
	printf("min is : %d\n", min);
/*
----------------------------------------------------------
	if(a > b && a > c){ max = a;}
	else if(b > a && b > c){ max=b;}
	else if (c > a && c > b){ max=c;}
	printf("max is : %d\n", max); 
	
	if(a < b && a < c){ min = a;}	
	else if(b < a && b < c){ min = b;}
	else if(c < a && c < b){ min = c;}
	printf("min is : %d\n", min);
	
	if(mid > min && mid < max){mid=a;}
	else if(mid > min && mid < max){mid=b;}
	else if(mid > min && mid < max){mid=c;}
	printf("mid is : %d\n", mid);
*/	
	return 0;
}
