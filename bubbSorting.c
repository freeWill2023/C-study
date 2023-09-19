#include<stdio.h>

int main(void)
{
	int nums[10] = {1,3,8,4,10,6,7,2,9,5};
	
	for(int i=9 ; i >= 0+1 ; --i){
		for(int j = 0 ; j < i ; ++j){
		if(nums[j] > nums[j+1]){
				int tmp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = tmp;
				printf("%d\n", tmp);
			}
		}
	}
	
	for(int i=0 ; i<10 ; ++i){
		printf("%d", nums[i]);
	}
	printf("\n");
	return 0;
}
