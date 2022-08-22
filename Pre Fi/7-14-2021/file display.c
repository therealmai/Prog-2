#include<stdio.h>
#define max 60
#include<conio.h>
	typedef struct name{
		char Fname[24];
		char MI;
		char Lname[16];
	}Nametype;
	
void displayName(Nametype N);
	
void main(){	
	FILE* fp;
	
	Nametype N;
	char filename[16];
	
	printf("\nEnter name of File: ");
	gets(filename);
	
	fp = fopen(filename,"ab+");
	if(fp != NULL){
		printf("Success");
		getch();
		while(fread(&N,sizeof(Nametype),1,fp) != 0){
		 		displayName(N);
		}
		fclose(fp); 
	}else{
		printf("Unable to open file");
	}		 	
}
	
	void displayName(Nametype N){
		printf("\n%-16s",N.Fname);
		printf("%-16s",N.Lname);
		printf("%-5c",N.MI);
	}
