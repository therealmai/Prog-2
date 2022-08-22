#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
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
	
	Studtype* newArr(Studtype stud[],int size);
	void main(){
	int x;
	Studtype* catcher;
	Studtype stud[SIZE] = {{{"Jomar", "Leano", 'M'},20102650,"BSCS", 4},
							{{"Matt", "Leano", 'M'},20102342,"BSIT", 1},
						   {{"Christian", "Leano", 'M'},20102342,"BSIT", 3} ,
						   {{"Marianne", "Leano", 'M'},20102342,"BSIT", 4}  
						   };
	catcher= newArr(stud, 4);
	for (x=0; x<5; x++){
		printf("%s, %s %c ID: %d Course: %s Year: %d\n", catcher[x].name.LName, catcher[x].name.FName, catcher[x].name.MI, catcher[x].ID, catcher[x].Course, catcher[x].YrLevel);
	}
 }
	
	Studtype* newArr(Studtype stud[],int size){
		int x,y=0;
		Studtype dummy = {{"XXXX", "XXXXX", 'X'},0,"XXXX", 0};
		Studtype* retArr;
		
		retArr = (Studtype*) calloc(size+1,sizeof(Studtype));
		if(retArr != NULL){
			for(x=0; x<size; x++){
				if(strcmp(stud[x].Course, "BSIT") == 0){
					retArr[y] = stud[x]; 
					y++;
				}
			}
		}
		retArr[size] = dummy;
		return retArr;
	}
