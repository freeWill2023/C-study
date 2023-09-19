#include <iostream>
#include "safeArray.h"

int main()
{
	safeArray arr1;

	int nums[] = {1, 2, 3, 4, 5};
	safeArray arr3(nums, 5);
	safeArray arr4 = arr3;
	
	arr1 = arr3;
	
	if(arr1 == arr3)
	{
		std::cout << "arr1 and arr3 are equal" << std::endl;
	}
	else
	{
		std::cout << 	"arr1 and arr3 are not equal" << std::endl;
	}
	
	for(int i=0 ; i < arr1.size() ; ++i)
	{
		std::cout << arr1[i] << std::endl;
	}
	
	for(int i=0 ; i < arr4.size() ; ++i)
	{
		std::cout << arr4[i] << std::endl;
	}

	return 0;
}
