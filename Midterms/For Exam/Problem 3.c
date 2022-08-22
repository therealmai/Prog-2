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

    void sortList(Studlist*list,Studtype elem, int mode);
    void main(){
        Studlist List = { "Jomar", "Leano", 'M',20102650,"BSCS", 1,
                           "Matt", "Leano", 'M',20102342,"BSIT", 5, 
                           "Try", "Leano", 'M',20102430,"BSCS", 3,
                           "New", "Leano", 'M',20101231,"BSCS", 2,
                           };
       List.count = 4;                   
        Studtype newElem = {"Leano", "Versace", 'M', 20102430, "BSCS", 3};
        sortList(&List,newElem,1);
    }
    
        void sortList(Studlist*list,Studtype elem, int mode){
            int x,y;
            Studtype temp;
                 for(x=0; x<list->count-1;x++){
                    for(y=0; y<list->count-1;y++){
                        if(list->stud[y].YrLevel > list->stud[y+1].YrLevel){
                            temp = list->stud[y];
                            list->stud[y] = list->stud[y+1];
                            list->stud[y+1] = temp;
                        }
                    }
                }
               for(x=0; x<list->count; x++){}
               list->stud[x] = elem;
               list->count++;           
        }
