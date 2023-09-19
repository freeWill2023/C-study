#include<stdio.h>

int sumMatrix(const int (*pMat)[4], int row, int col) //const: 입력으로만 사용
{
	int sum = 0;
	for(int i=0 ; i<row ; ++i){
		for(int j=0 ; j<col ; ++j){
			sum = sum + pMat[i][j];     //*(pMat[i]+j) == *(*(pMat + i) + j)
		}
	}
	return sum;
}

int main(void)
{
	int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	
	int sum = sumMatrix(matrix, 3, 4);   // &matrix[0][0]  ==> matrix[0]
	
	printf("sum: %d\n", sum);
	return 0;
}




