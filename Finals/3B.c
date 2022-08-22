#include <stdio.h>
#include <stdlib.h>
#define row 2
#define col 3

typedef int MyMatrix[row][col];
 int **addMatrix(MyMatrix A, MyMatrix  B);
 
 
int main(){
    
    MyMatrix A = {1,2,3,
                  4,5,6};
MyMatrix B = {6,5,4,
              3,2,1};
    addMatrix(A,B);
}

int **addMatrix(MyMatrix A, MyMatrix  B){
    int x,y;
    int **temp = (int **)malloc(row*sizeof(int*));
    if(temp!=NULL){
        for(x = 0; x<row;x++){
            temp[x] = (int *)malloc(col*sizeof(int));
        
        if(temp[x] != NULL){
            for(y=0; y<col;y++){
         
        temp[x][y] = A[x][y] + B[x][y];
        }
        }
 }
         
        
    }
        return temp;
    }
