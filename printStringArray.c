#include<stdio.h>

void printStringArray1(char (*arr)[20], int size)
{
	for(int i=0 ; i<size ; ++i){
		printf("%s\n", &arr[i][1]);		// arr[i]
	}
}

void printStringArray2(char **arr, int size)
{
	for(int i=0 ; i<size ; ++i){
		printf("%s\n", arr[i]);		// &arr[i][0]
	}
}

int main(void)
{
	cities1[][20] = {"seoul", "los angeles", "rio de janeiro", "moscow", "paris"};
	
	printStringArray1(cities1, 5);

	cities2[][20] = {"seoul", "los angeles", "rio de janeiro", "moscow", "paris"};

	printStringArray2(cities2, 5);

}
