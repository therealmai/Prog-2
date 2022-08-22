#include<stdio.h>

    void displayUnique(int arr[],int size);
    void main(){
        int arr[5] = {1,2,2,3,4};
        displayUnique(arr,5);
    }
    void displayUnique(int arr[],int size){
        int x,y, count=0;
        
        for(x=0,y=0; x<size; y++){
        	if(arr[x] == arr[y]){
        		count++;
			}else{
				x++;
				count=0;
			}
            if(count == 1){
            	printf("%d ", arr[x]);
			}
        }
    }
