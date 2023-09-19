#include<stdio.h>

int main(void)
{
	int nums[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int value;
	printf("input value:");
	scanf("%d", &value);
		
	int i;
	for(i=0 ; i<10 ; ++i){
		if(value == nums[i]){
			break;
		}
	}

	if(i == 10){
		printf("%d is not find\n", value);
	}
	else{
		printf("%d is founded index: %d\n", value, i);
	}

	return 0;
}




