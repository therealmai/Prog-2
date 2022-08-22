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
  m = createEven(list);
  display(m);
  return 0;
}

LL createEven(LL list){
  LL temp, newList=NULL, trav;
  for(trav=list; trav != NULL; trav = trav->link){
    if(trav->num % 2 ==0){
      temp = (LL)malloc(sizeof(struct node));
      temp->num = trav->num;
      temp->link = newList;
      newList = temp;
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

