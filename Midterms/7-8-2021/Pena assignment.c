#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct{
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

typedef struct{
    Studtype stud[SIZE];
    int count;
}Studlist;

    void changeList(Studlist* List, Studtype newElement);
    void main(){
        Studlist List = { "Jomar", "Leano", 'M',20102650,"BSCS", 4,
                           "Matt", "Leano", 'M',20102342,"BSIT", 1, 
                           "Try", "Leano", 'M',20102650,"BSCS", 4,
                           "New", "Leano", 'M',20102650,"BSCS", 4,
                           };
       List.count = 4;                   
        Studtype newElem = {"Leano", "Versace", 'M', 2012312, "BSCS", 3};
        changeList(&List, newElem);
    }
    
    void changeList(Studlist *List, Studtype newElement){
      int x;
       Studtype temp;
       if(List->count < SIZE){
       for(x = List->count; x >= 0; x--){
           List->stud[x+1] = List->stud[x];
         }
      }
       List->stud[0]= newElement;
}
