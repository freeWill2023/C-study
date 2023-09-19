/*
#include<stdio.h>

int main(void)
{

	int adjacent;		//밑변
	scanf("%d\n", &adjacent);
	
	int hight;		//높이
	scanf("%d\n", &hight);

	double area;
	area = 1.0/2.0 * adjacent * hight;

	printf("area: %.2f\n", area);
	
	return 0;
}
*/
#include<stdio.h>

int main(void)
{
	int adjacent, oposite;		//밑변, 높이
	
	printf("adjacent:");
	scanf("%d", &adjacent);
	
	printf("oposite:");
	scanf("%d", &oposite);

	double area;
	area = adjacent * oposite * 1 / 2;
	//area = 1.0 / 2.0 *adjacent * oposite;
	
	printf("area: %.1f\n", area);
	
	return 0;
}


