#include<stdio.h>
#include<stdlib.h>
#define col 3
#define row 2

typedef int myMatrix[row][col];

myMatrix* addMatrix(myMatrix A, myMatrix B);
void main(){
myMatrix* x;
int i,j;
myMatrix A = {1,2,3,
              4,5,6};
myMatrix B = {6,5,4,
              3,2,1};
              
 x = addMatrix(A,B);
 for(i=0;i<row;i++){
 	for(j=0;j<col;j++){
 		printf("%d ", *x[i][j]);
	 }
	 printf("\n");
   }
}

myMatrix* addMatrix(myMatrix A, myMatrix B){
  int x,y;
  myMatrix z;
  myMatrix* retval = (myMatrix*)calloc(row*col,sizeof(myMatrix));
  for(x=0;x<row;x++){
    for(y=0;y<col;y++){
      *retval[x][y] = A[x][y] + B[x][y];
      }
    }
    return retval;
  }

