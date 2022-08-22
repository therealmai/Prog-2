#include<stdio.h>


void main(){
        int x, y, temp;
        char arr[] = {'c','C','2','3'};  /*Change*/
        for(x=0; x<4; x++){ /*Change*/
            for(y=0;y<4; y++){ /*Change*/
                if(arr[y] > arr[y+1]){
                    temp = arr[y];
                    arr[y] =arr[y+1];
                    arr[y+1] = temp;
                }
            }
        }
        for(x=0; x<4; x++){
        	printf("%c", arr[x]);/*Change*/
		}
    }	
