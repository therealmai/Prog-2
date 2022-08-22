#include <stdio.h>

    void deleteX(int a[], int size, int X);
    void main(){
        int a[5] = {1,2,3,4,5};
        int X = 3;
        deleteX(a,5,X);
    }
    
    void deleteX(int a[], int size, int X){
        int* newArr;
        int newsize=0;
        int x, y;
        for(x=0; x<size; x++){
            if(a[x] != X){
                newsize++;
            }
        }
        newArr = (int*) calloc(newsize, sizeof(int));
        for(x=0,y=0; x<size;x++){
                if(a[x] != X){
                    newArr[y] = a[x];
                    y++;
                }    
        }
        newArr[newsize];
    }
