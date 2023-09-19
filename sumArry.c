#include<stdio.h>

int main(void){
	                  //초기화 리스트
	int nums[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int sum;    //i != 10
	for(int i=0 ; i < 10 ; ++i){
		sum = sum + nums[i];
	}
	
	printf("sum: %d\n", sum);
	
	return 0;
}
