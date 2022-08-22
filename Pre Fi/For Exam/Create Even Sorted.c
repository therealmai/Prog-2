#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int num;
  struct node* link;
  }*LL;

LL createEven(LL list);
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
  display(list);
  printf("\n");
  m = createEven(list);
  display(m);
  return 0;
}

LL createEven(LL list){
  LL*newTrav, temp, oldTrav,newList=NULL;
  for(oldTrav = list; oldTrav != NULL; oldTrav = oldTrav -> link){
      if(oldTrav-> num % 2 ==0){
        for(newTrav = &newList; *newTrav != NULL && oldTrav->num>(*newTrav)->num;newTrav= &(*newTrav)->link){}
        temp = (LL)malloc(sizeof(struct node));
        temp->num = oldTrav -> num;
        temp->link = *newTrav;
        *newTrav = temp;
        }
    }
    return newList;
  }

void display(LL L){
  LL trav;
  
  for(trav = L; trav!=NULL; trav= trav->link){
    printf("%d ",trav->num);
    }
  
  }

