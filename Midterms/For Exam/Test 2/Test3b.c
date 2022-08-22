#define SIZE 4
typedef struct {
   float longitude;
   float latitude;
}coordinate;
typedef struct {
  char name[8];
  float elevation;
  coordinate gCoor;
}point;
typedef struct {
   int count;
   point data[SIZE];  
} pointList;

point highestLatitude(pointList* L);
int main() {
  point catcher;
  pointList list ={4,{{"Toledo", 134.0,{123.0,125}}, {"Cebu", 154.0,{10.0,112}}, {"Lutopan", 69.0,{311.0,135}},{"Poog", 121.0,{301.0,198}}}};
  catcher = highestLatitude(&list);
  return 0;
}

point highestLatitude(pointList* L){
      int x,y;
     point temp;
     for(x=0; x < L->count-1; x++){
          for(y=0; y<L->count-x-1;y++){
               if(L->data[y].gCoor.latitude < L->data[y+1].gCoor.latitude){
                     temp = L->data[y];
                     L->data[y] = L->data[y+1];
                     L->data[y+1] = temp;
                 }   
           }
      } 
   return L->data[0];
  
  
  }
