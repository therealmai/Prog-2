#include <stdio.h>
#define SIZE 4
typedef struct{
	char Lname[16];
	char Fname[24];
	char MI;
}nametype;


void writeFile(nametype stud[]);
void main(){
	 nametype stud[] = { {"Leano", "Jomar", 'M'},
	 					 {"Leano", "Marianne", 'L'},
						 {"Leano", "Versace", 'M'}	
						};
						
    writeFile(stud);
}

void writeFile(nametype stud[]){
	int x;
	FILE *fp;
	fp = fopen("try.txt", "w");
	
	if(fp != NULL){
		for(x=0;x<3; x++){
				fwrite(&stud[x],sizeof(nametype),1,fp);
				printf("%s\n",stud[x].Fname);	
		}
		printf("Success");	
	}
	fclose(fp);
}
