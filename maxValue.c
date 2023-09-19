#include<stdio.h>

int main(void)
{
	int nums[10] = {1,9,3,4,5,10,7,8,2,6};

	int max = nums[10]; //데이터 없는 빈 배열
	
	for(int i=0 ; i<10 ; ++i){
		if(max < nums[i]){
		max = nums[i];
		}
	}

	printf("max: %d\n", max);

	return 0;
}




