#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int num;
  struct node* link;
  }*LL;

void deleteFirst(LL* list, int pos);
void display(LL L);
int main() {
  LL list = (LL)malloc(sizeof(struct node));
  LL m;
  list->num = 4;
  list->link = (LL)malloc(sizeof(struct node));
  list->link->num = 5;
  list->link->link =(LL)malloc(sizeof(struct node));
  list->link->link->num = 2;
  list->link->link->link = NULL;
  deleteFirst(&list,1);
  display(list);
  return 0;
}

void deleteFirst(LL* list, int pos){
  LL *trav, temp;
  int x;
  for(trav = list, x =0; *trav!= NULL && x <pos; trav= &(*trav)->link,x++){}
  temp = *trav;
  *trav = temp->link;
  free(temp);
  
  }
void display(LL L){
  LL trav;
  
  for(trav = L; trav!=NULL; trav= trav->link){
    printf("%d ",trav->num);
    }
  
  }

