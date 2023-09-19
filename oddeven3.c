#include<stdio.h>

int main(void)
{
	int num;
	printf("input number:");
	scanf("%d", &num);
/*	
	//int oddOReven;
	//oddOReven = (num%2 == 0);
	
	ifc{
	//if(num%2==1){
		printf("num %d is odd)\n",num);
	}
	else{
	printf("num %d is even)\n",num);
	}
	//printf("num %d is %d(even=1, odd=0)\n",num, oddOReven);
*/	
	printf("num %d is %s\n", num, (num%2==1) ? "odd" : "even");
	
	return 0;
}



