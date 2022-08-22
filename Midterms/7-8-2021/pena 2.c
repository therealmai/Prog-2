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

   void changeList(Studlist *List, Studtype newElement);
    void main(){
        Studlist List = { "Jomar", "Leano", 'M',20102650,"BSCS", 4,
                           "Matt", "Leano", 'M',20102342,"BSIT", 1, 
                           "Try", "Leano", 'M',20102430,"BSCS", 4,
                           "New", "Leano", 'M',20101231,"BSCS", 4,
                           };
       List.count = 4;                   
        Studtype newElem = {"Leano", "Versace", 'M', 20102430, "BSCS", 3};
        changeList(&List, newElem);
    }
    
    void changeList(Studlist *List, Studtype newElement){
       int x,y;
       Studtype temp;
       for(x = 0; x < List->count; x++){
           if(List->stud[x].ID==newElement.ID){
                 for(y=x;y<List->count;y++){
                       List->stud[y]= List->stud[y+1];
                 }
                 
           }
       }
       List->count--;
    }
