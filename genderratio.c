#include<stdio.h>

int main(void)
{
	double g, w;
	//printf("Gen=");
	scanf("%lf %lf", &g, &w);
	//printf("Wom=");
	//scanf("%lf\n", &wom);

	double Gratio, Wratio;
	//Gratio = ((gen/wom)) * 100;
	Gratio = 100.0*(g/(g+w));
	Wratio = 100.0*(w/(g+w));
	
	//double Gratio = (double)g / (g + w) * 100;
	//double Wratio = (double)w / (g + w) * 100;

	printf("G_ratio= %.2f\n", Gratio);
	printf("W_ratio= %.2f\n", Wratio);

	return 0;
}












