#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int letter;
    struct node *link; 
}celltype, *list;

    void insertLast(list*A, int num);
    void insertFirst(list*L, int num);
    void deleteList(list*A);
    int searchElem(list L, int letter);
    void deleteFirstOcc(list* L, int letter);
    void insertPos(list*L, int letter, int pos);
    void sortedList(list L);
    void displayList(list L);
    
    void main(){
        int x, catcher;
        list L= NULL;
        int name1=5;
        for(x=1; x>0; x--){
           insertFirst(&L,name1);
        }
        insertLast(&L,4);
        insertLast(&L,3);
        catcher = searchElem(L,3);
        deleteFirstOcc(&L, 4);
        insertPos(&L,4, 1);
        sortedList(L)
        displayList(L);
    }
    
    void insertFirst(list*L,int letter){
      list temp;

      temp = (celltype*) malloc(sizeof(struct node));
      if (temp != NULL){
           temp->letter = letter;
           temp->link = *L;
           *L = temp;
          }
      }
      
    void insertLast(list*A, int letter){
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
    
    int searchElem(list L, int letter){
        int x=0;
        list trav;
        for(trav = L; trav != NULL && trav->letter != letter; trav = trav->link, x++ ){}
        return x;
    }
    
    void deleteFirstOcc(list* L, int letter){
        list *trav;
        list temp;
        
        for(trav = L; *trav !=NULL && (*trav)->letter != letter; trav = &(*trav)->link){}
        if((*trav)->letter == letter){
            temp = *trav;
            *trav = temp->link;
            free(temp);
        }
    }
    
    void insertPos(list*L,int letter, int pos){
        list* trav, temp;
        int x;
        temp = (list)malloc(sizeof(celltype));
        for(trav = L,x=0; (*trav)!= NULL && x<pos; trav = &(*trav)->link,x++){}
        if(x == pos){
            temp->letter = letter;
            temp->link = *trav;
            *trav = temp;    
        }
    }
    
    void sortedList(list L){
    	list trav;
    	for(trav = L; trav!=NULL; trav= trav->link){
    		
		}
	}
    
    void displayList(list L){
        list trav;
        for(trav = L; trav != NULL; trav = trav->link){
            printf("%d", trav->letter);
        }
    }
