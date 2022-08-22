
typedef struct node{
  struct{
    char name[10];
    char desc[15];
    int qty;
    }data;
  struct node *link;
  }celltype, *List;
int main() {
List L = NULL;
celltype c1 = {"Apple","Heals 10HP", 17};
celltype c2 = {"Clover", "Nothing",3};
celltype c3 = {"O-Lance", "AP+10", 1};

L = &c1;
c1.link = &c2;
c2.link = &c3;
c3.link = NULL;
  return 0;
}
