#include<stdio.h>
//#include<string.h>
#include"string.h"

int main(void)
{
	char *str1[6] = "hello";
	char str2[10];

	my_strcpy(str2, str1);  //배열과 배열을 복사
	
	printf("%s\n", str2);
	printf("str1 length : %ld\n", my_strlen(str1));
	
	str1 == str2;        // 주소값 비교
	
	my_strcmp(str1, str2);  //문자열의 내용 비교, 참0/거짓1 출력
	if(my_strcmp(str1, str2) == 0){
		printf("str1 and str2 are equal\n");
	}else{
		printf("str1 and str2 are not equal\n");
	}
	
	//문자열 더하기
	char *title = "just the way you are";
	char *singer = "billy joel";
	char result[100];            // 더한 결과를 저장할 배열크기 
	
	my_strcpy(result, title);
	my_strcat(result, " - ");
	my_strcat(result, singer);	
	
	printf("result: %s\n", result);
		
	return 0;
}
