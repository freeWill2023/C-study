#include<stdio.h>

int main(void)
{
	int nums[10] = {1,3,8,4,10,6,7,2,9,5};
	
	for(int i=0 ; i < 10-1 ; ++i){
		for(int j = i+1 ; j < 10 ; ++j){
		if(nums[i] > nums[j]){
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
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




