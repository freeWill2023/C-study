#include<stdio.h>

int main(void)
{
	char name[5][4] = {"HKL", "DRV", "GHR", "KLF", "POU"};
	// 5개 문자열, 각각 문자3개+문자구분용 null(\0) 문자1개= 총 4문자 이상 필요
	int kor[5] = {70, 36, 59, 66, 78};
	int eng[5] = {80, 90, 65, 38, 90};
	int mat[5] = {45, 52, 90, 57, 43};
	
	printf("name  kor eng mat\n");

   for(int i=0 ; i<5 ; ++i){
        printf("%s :  %d, %d, %d\n", name[i], kor[i], eng[i], mat[i]);
    }

   return 0;
}
