#include<stdio.h>
#include<stdlib.h>
typedef MyMatrix [2][2];

MyMatrix* sum (MyMatrix X, MyMatrix Y);
int main() {
	int x,y;
	MyMatrix* catcher;
	
  MyMatrix X = {1,2,3,4};
  MyMatrix Y = {4,3,2,1};
  catcher= sum(X,Y);
 for(x=0 ; x<2; x++){
 	for(y=0; y<2; y++){
 		printf("%d ", *catcher[x][y]);
	 }
	 printf("\n");
 }
  return 0;
}

MyMatrix* sum (MyMatrix X, MyMatrix Y){
  int x,y;
  MyMatrix* retval = (MyMatrix*)malloc(sizeof(MyMatrix));
  
  for(x=0; x<2; x++){
    for(y=0; y<2; y++){
      *retval[x][y] = X[x][y] + Y[x][y];
      }
    }
  return retval;
  }
