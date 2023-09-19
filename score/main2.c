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
	FILE *fin, *fout;
	fin = fopen("score.dat", "r");
	fout = fopen("score.out", "w");
	if(fin == NULL || fout == NULL){
		fprintf(stderr, "can't open file\n");
		return 1;  //	 비정상 실행됨 의미
	}
	
	
	struct student stu[10];
	for(int i=0 ; i<10 ; ++i){
		fscanf(fin, "%s %d %d %d", stu[i].name, &stu[i].kor, &stu[i].eng, &stu[i].math);
		
		stu[i].sum = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].average = (double)stu[i].sum / 3.0;
		stu[i].rank = 1;
	}
	
	//rank
	for(int i=0 ; i<10 ; ++i){
		for(int j=0 ; j<10 ; ++j){
			if (stu[i].sum < stu[j].sum){
				++stu[i].rank;
			}
		}
	}
	
	//sort
/*
	for(int i=0 ; i<10 ; ++i){
		for(int j=0 ; j<10-1 ; ++j){
			if(stu[i].sum < stu[j].sum){
				struct student temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
*/	
	
	struct student *ptable[10];
	
	for(int i = 0 ; i < 10 ; ++i){
		ptable[i] = &stu[i];
	}

	for(int i = 0 ; i < 10-1 ; ++i){
		for(int j = 0 ; j < 10 ; ++j){
			if (ptable[i]->sum   <   ptable[j]->sum){
				struct student *temp = ptable[i];
				ptable[i] = ptable[j];
				ptable[j] = temp;
			}
		}
	}

	
	fprintf(stdout, "-------------------------------------\n");
	fprintf(stdout, "  name  kor eng mat sum avg  rnk  \n");
	fprintf(stdout, "-------------------------------------\n");
/*	
	for(int j=0 ; j<10 ; ++j){
		fprintf(stdout, "%6s %3d %3d %3d %3d %.1f   %d\n", 
			stu[j].name, stu[j].kor, stu[j].eng, stu[j].math,
			stu[j].sum, stu[j].average, stu[j].rank);
	}
*/
	for(int j=0 ; j<10 ; ++j){
		fprintf(stdout, "%6s %3d %3d %3d %3d %.1f   %d\n", 
			ptable[i]->name, ptable[i]->kor, ptable[i]->eng, ptable[i]->math,
			ptable[i]->sum, ptable[i]->average, ptable[i]->rank);
	}
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
