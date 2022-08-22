#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    char letter;
    struct node *link; 
}celltype, *list;
    void insertLast(list*A, char letter);
    void insertFirst(list*L, char letter);
    void displayList(list L);
    void main(){
        int x;
        list L= NULL;
        char name1='J';
        for(x=1; x>0; x--){
           insertFirst(&L,name1);
        }
        insertLast(&L,'S');
        displayList(L);
    }
    void insertFirst(list*L,char letter){
      list temp;

      temp = (celltype*) malloc(sizeof(struct node));
      if (temp != NULL){
           temp->letter = letter;
           temp->link = *L;
           *L = temp;
          }
      }
      
    void insertLast(list*A, char letter){
        list*ptr;
        list temp;
        temp = (celltype*)malloc(sizeof(celltype));
        if(temp != NULL){
        
        for( ptr=A;*ptr != NULL; ptr = &(*ptr)->link){}
        temp->letter = letter;
        temp->link = NULL;
        *ptr = temp;
    }
}
      
    void displayList(list L){
        list trav;
        for(trav = L; trav != NULL; trav = trav->link){
            printf("%c", trav->letter);
        }
    }
