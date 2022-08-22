#include<stdio.h>
#define SIZE 5

typedef struct{
	char Lname[16];
	char Fname[24];
	char MI;
}nametype;

typedef struct {
	int ID;
	nametype name;
	char course[8];
	int yrLevel;
}person;

typedef struct{
	int count;
	person student[SIZE];
}PList;

void displayCourse(char course[]);
void main(){
	displayCourse("BSCS");
}

void displayCourse(char course[]){
	FILE* fp;
	fp = fopen("FirstYear.txt", "rb");
	PList var;
	int x=0;
	
	if(fp != NULL){
		
		while(fread(&var.student[x],sizeof(person),1,fp) != 0){
				printf("%d %-8s,%-4s %c %-4s, Year Level - %d\n", var.student[x].ID,var.student[x].name.Lname,var.student[x].name.Fname,var.student[x].name.MI,var.student[x].course,var.student[x].yrLevel);
				x++;	
		}
		fseek(fp,sizeof(person)*3,SEEK_SET);
		while(fread(&var.count,sizeof(int),1,fp) != 0){
				printf("Count: %d\n", var.count);	
		}
	}
	fclose(fp);
}
