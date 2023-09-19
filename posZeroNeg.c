#include<stdio.h>
// posi, zero, nega
int main(void)
{
	int num;
	printf("input number: ");
	scanf("%d", &num);
		
	if(num > 0){ //positive
			printf("%d is a positive\n", num);
	
	}
	else if(num == 0){ //zero
			printf("%d is a zero\n", num);		
	}
	else{  //negative
			printf("%d is a negative\n", num);
	}

	printf("%d is a %s\n", num, (num>0) ? "positive" : (num==0) ? "zero" : "negative");

	return 0;
}




