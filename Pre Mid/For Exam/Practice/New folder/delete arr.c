#include<stdio.h>

void deleteArr(int arr[],int size, int x);
void main(){
 int arr[5]={1,3,2,5,4};
 int x= 3;
 deleteArr(arr, 5,x);
}

void deleteArr(int arr[], int size, int x){
    int z,y,temp;
    for(z = 0; z < size; z++){
        if(arr[z] == x){
            for(;z < size;z++){

            arr[z] = arr[z+1];
        }
            size--;
        }
    }
    for(y = 0; y < size; y++){
        printf("%d",arr[y]);
    }
}
