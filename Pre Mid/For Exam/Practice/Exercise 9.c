#include<stdio.h>
#include<stdlib.h>
    int createCountArray(int arr[], int size);
    void main(){
        int arr[10] = {12,14,4,18,1,5,12,9,8,5};
        createCountArray(arr,10);
    }
    int createCountArray(int arr[], int size){
        int* retval;
        int x, count,newsize;
        
        newsize = arr[0];
        
        for(x=0; x<size; x++){
          if(newsize <arr[x]){
             newsize = arr[x];
             }
          }
          
        retval = (int*) calloc(newsize+2, sizeof(int));
        
        for(x=0; x<size; x++){
            retval[arr[x]]++;
        }
        
        retval[newsize+1] = -1;
        return retval;
    }
        

