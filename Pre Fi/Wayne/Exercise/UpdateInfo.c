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

void updateInfo();

void main(){
	updateInfo();
}

void updateInfo(){
	FILE* fp;
	fp = fopen("FirstYear.txt", "rb+");
	int x=0,ctr=0;
	PList var;
	
	if(fp != NULL){
		while(fread(&var.student[x], sizeof(person), 1, fp) != 0){
			var.student[x].yrLevel++;
			fseek(fp,ctr*sizeof(person),SEEK_SET);
			printf("\n%d\n",ftell(fp));
			fwrite(&var.student[x],sizeof(person),1,fp);
			fseek(fp,(ctr+1)*sizeof(person),SEEK_SET);
			ctr++;
			x++;	
		}
		printf("%d %d ", ctr, x);
		printf("Success");
	}
	fclose(fp);
}
