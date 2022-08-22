#include<stdio.h>
#define col 5
#define row 5

typedef int myMatrix[row][col];

int checkMagicSquare(myMatrix A);
void main(){
  int x;
myMatrix A = {17,24,1,8,15,
              23,5,7,14,16,
              4,6,13,20,22,
              10,12,19,21,3,
              11,18,25,2,9};
 x= checkMagicSquare(A);
}

int checkMagicSquare(myMatrix A){
  int rowSum=0, colSum=0, diagSum=0,x,y,z;
  for(x=0;x<row && rowSum% 65 == 0 && colSum % 65 == 0; x++){
    for(y=0; y<col; y++){
      rowSum += A[x][y];
      colSum += A[y][x];
      if(x == y){
        diagSum += A[x][y];
        }
      }
    }
    return (diagSum % 65 == 0)? 1: 0;
  }
