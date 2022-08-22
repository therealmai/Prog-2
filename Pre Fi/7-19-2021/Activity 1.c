#include <stdio.h>
#define SIZE 5

typedef struct{
char LName[16];
char FName[8];
char MI;
}nametype;

typedef struct{
nametype name;
int ID;
char Course[8];
int Year;
}person;

typedef struct{
int count;
person stud[SIZE];
}StudList;

void updateIS(StudList* A);
void main(){
    StudList A = {3,"Leano", "Jomar", 'M', 201231, "BSCS", 1
                    ,"Leano", "J234", 'M', 202342, "BSICT", 1,
                    "Leano", "Marianne", 'L', 22341, "BSICT", 1};
    updateIS(&A);
}

void updateIS(StudList* A){
    int x;
    
    for(x=0; x<A->count; x++){
        if(strcmp(A->stud[x].Course, "BSICT") == 0){
            strcpy(A->stud[x].Course, "BSIS");
        }
    }
}
