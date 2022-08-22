#include<stdio.h>
#define SIZE 10
#include<string.h>

	typedef struct {
		char FName[24];
		char LName[16];
		char MI;
	}Nametype;
	
	typedef struct {
		Nametype name;
		unsigned int ID;
		char Course[8];
		int YrLevel;
	}Studtype;
	
	int bsitStud(Studtype stud[], int size);
	void main(){ 
	Studtype stud[SIZE] = {{{"Jomar", "Leano", 'M'},20102650,"BSCS", 4},
						   {{"Matt", "Leano", 'M'},20102342,"BSIT", 1},
						   {{"Christian", "Leano", 'M'},20102342,"BSCS", 3}  
						   };
	printf("%d",bsitStud(stud,3));
	}
	int bsitStud(Studtype stud[], int size){
		int x, count =0;
		for(x=0; x<size; x++){
			if(strcmp(stud[x].Course, "BSCS") == 0){
				count++;
			}
		}
		return count;
	}
