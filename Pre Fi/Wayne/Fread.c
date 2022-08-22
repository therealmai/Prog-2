#include <stdio.h>
#define SIZE 4
#include<string.h>
typedef struct{
	char Lname[16];
	char Fname[24];
	char MI;
}nametype;

void displayList();
void main(){	
	displayList();
}

void displayList(){
	FILE* fp;
	fp = fopen("try.txt", "r");
	nametype var;
	if(fp != NULL){
		while( fread(&var,sizeof(nametype),1,fp) != 0){
			printf("%-16s %-24s %c\n", var.Fname,var.Lname,var.MI);
			}
		}	
	fclose(fp);	
}
