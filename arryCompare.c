#include<stdio.h>

int main(void)
{
	int nums1[]={1,2,3,4,5};
	int nums2[]={1,2,3,4,5};
	/*
	if(nums1 == nums2){    // &nums1[0] == &nums2[0] ==> false
		printf();	
	}else{
		printf();
	}
	*/
	int i;
	for(int i=0 ; i<5 ; ++i){
		if(nums1[i]==nums2[i]) {break;}
	}
		
	if(i=5){
		printf("nums1 and nums2 are equsl\n");
	}else{
		printf("nums1 and nums2 are not equsl\n");
	}
		
	return 0;
}




