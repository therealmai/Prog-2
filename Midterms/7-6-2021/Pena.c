#include<stdio.h>
#define SIZE 2
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
	
	Studtype getData(Studtype stud[]);
	int main (){
	Studtype stud[SIZE];
	getData(stud);		
	
	printf("%s %c %s",stud[0].name.FName, stud[0].name.MI, stud[0].name.LName);
		printf(" %s ", stud[0].Course);
		printf(" %d ", stud[0].YrLevel);
		printf(" %d ", stud[0].ID);	
		
		
	return 0;	
	}
	
	Studtype getData(Studtype stud[]){
		int x;
		for(x=0; x<SIZE; x++){
			printf("\nStudent no.%d", x+1);
			
			printf("\nEnter Firstname ");
			scanf(" %s", &stud[x].name.FName);
			
			printf("\nEnter Lastname ");
			scanf(" %s", &stud[x].name.LName);
			
			printf("Enter Middle Initial");
			scanf(" %c", &stud[x].name.MI);
			
			printf("\nEnter ID ");
			stud[x].ID = 12312;
			
			printf("\nCourse ");
			strcpy(stud[x].Course, "BSCS");
			
			printf("\nYrLevel ");
			stud[x].YrLevel = 2; 
		}
		
	}
