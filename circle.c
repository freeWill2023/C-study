//원의 넓이
#include<stdio.h>
#define PI 3.141592 //매크로 상수 PI가 3.14로 대체된다.

int main(void)
{
	int radius;
	printf("radius input=");
	scanf("%d", &radius);
	
	double area;
	area = PI * radius * radius;
	
	printf("area = %.2f\n", area);

	return 0;
}



