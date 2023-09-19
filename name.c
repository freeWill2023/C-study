#include<stdio.h>

int main(void)
{
	char name[21];
	//char *name;
	//name = names;
	
	scanf("%20s", name);   //("%s", &name[0])
	
	printf("%s\n", name);  //("%s", &name[0])

	return 0;
}
