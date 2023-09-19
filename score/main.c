#include<stdio.h>

struct student{
	char name[3];
	int kor;
	int eng;
	int math;
	int sum;
	double average;
	int rank;	
};

int main(void)
{
	struct student stu[10];
	for(int i=0 ; i<10 ; ++i){
		scanf("%s %d %d %d", stu[i].name, &stu[i].kor, &stu[i].eng, &stu[i].math);
		
		stu[i].sum = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].average = (double)stu[i].sum / 3.0;
		stu[i].rank = 1;
	}
	
	
	
	for(int i=0 ; i<10 ; ++i){
		for(int j=0 ; j<10 ; ++j){
			if (stu[i].sum < stu[j].sum){
				++stu[i].rank;
			}
		}
	}
	
	
	
	printf("-------------------------------------\n");
	printf("  name  kor eng mat sum avg  rnk  \n");
	printf("-------------------------------------\n");
	for(int j=0 ; j<10 ; ++j){
		printf("%6s %3d %3d %3d %3d %.1f %d\n", 
			stu[j].name, stu[j].kor, stu[j].eng, stu[j].math,
			stu[j].sum, stu[j].average, stu[j].rank);
	}
	
	return 0;
}
