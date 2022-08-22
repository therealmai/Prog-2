#include<stdio.h>


		void selectionSort(int arr[], int size){
			int x,y,min, temp;
			
			for(y=0; y<size-1;y++){
				min = y;
				for(x=y+1; x<size; x++){
					if(arr[x] < arr[min]){
						min = x;
					}
				}
				if(min != y){
					temp = arr[y];
					arr[y] = arr[min];
					arr[min] = temp;
				}
			}
		}
