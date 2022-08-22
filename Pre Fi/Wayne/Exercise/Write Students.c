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

void writeStudents(PList stud);
void main(){
	PList stud = {3, 20102650,"Leano", "Jomar", 'M',"BSCS",2,
					201022342,"Leano", "Marianne", 'L',"BSPT",2,
					20122340,"Leano", "Versace", 'M',"BSCS",2};
	writeStudents(stud);
}

void writeStudents(PList stud){
	FILE* fp;
	int x;
	fp = fopen("FirstYear.txt", "wb");
	
	if(fp != NULL){
		for(x=0; x<stud.count;x++){
			fwrite(&stud.student[x],sizeof(person),1,fp);
		}
		fwrite(&stud.count,sizeof(int),1,fp);
		printf("Success");
	}
	fclose(fp);
}
