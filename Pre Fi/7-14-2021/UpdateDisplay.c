#include<stdio.h>
#define max 60
#include<conio.h>
#include<string.h>
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
	int ctr=0;
	printf("\nEnter name of File: ");
	gets(filename);	
	fp = fopen(filename,"rb+");
	if(fp != NULL){
		printf("Success");
		getch();
		while(fread(&N,sizeof(Nametype),1,fp) != 0){
		 	if(strcmp(N.Lname,"Perez") ==0){
		 		strcpy(N.Lname, "Sanchez");
		 		fseek(fp,ctr*sizeof(Nametype),SEEK_SET);
		 		fwrite(&N,sizeof(Nametype),1,fp);
		 		fseek(fp,(ctr+1)*sizeof(Nametype),SEEK_SET);
			 }
			 ctr++;
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
