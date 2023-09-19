#include<stdio.h>

int main(void)
{
	char a = 'A';
	
	while(a<='Z'){
		printf("%c, ", a);
		++a;
	}
	printf("\n");
	
	for(char c = 'A' ; c <= 'Z' ; ++c){
		printf("%c, ",c);
	}
	printf("\n");	
	
	return 0;
}




