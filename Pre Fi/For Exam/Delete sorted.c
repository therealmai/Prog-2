#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int num;
  struct node* link;
  }*LL;

void deleteElem(LL* list, int elem);
void display(LL L);
int main() {
  LL list = (LL)malloc(sizeof(struct node));
  LL m;
  list->num = 4;
  list->link = (LL)malloc(sizeof(struct node));
  list->link->num = 5;
  list->link->link =(LL)malloc(sizeof(struct node));
  list->link->link->num = 2;
  list->link->link->link =(LL)malloc(sizeof(struct node));
  list->link->link->link->num = 5;
  list->link->link->link->link = NULL;
  deleteElem(&list,5);
  display(list);
  return 0;
}

void deleteElem(LL* list, int elem){
  LL *trav, temp;

  for(trav = list ; *trav!= NULL && (*trav)->num <= elem;){
    if((*trav)->num == elem){
      temp = *trav;
      *trav = temp->link;
      free(temp);
    }else{
      trav = &(*trav)->link;
      }
  }
}
void display(LL L){
  LL trav;
  
  for(trav = L; trav!=NULL; trav= trav->link){
    printf("%d ",trav->num);
    }
  
  }

