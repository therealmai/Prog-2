#include<stdio.h>
#include<stdlib.h>
	int getEven(int arr[],int size);
	void main(){
		int size,x;
		int* catcher;
		printf("How many integers would you like to input?");
		scanf("%d", &size);
		int arr[size];
		for(x=0; x<size; x++){
			printf("Enter an integer");
			scanf("%d", &arr[x]);
		}
		catcher = getEven(arr,size);
		for(x=0;x<size;x++){
			printf("%d ",catcher[x]);
		}
	}
	
	int getEven(int arr[],int size){
		int *evn;
		int x,y, newsize=0;
		
		for(x=0; x<size; x++){
			newsize += (arr[x] % 2 == 0) ? 1: 0;
		}
		evn = (int*) calloc(newsize, sizeof(int));
		
		for(x=0,y=0; x<size;x++){
			if(arr[x] % 2 == 0){
				evn[y] = arr[x];
				y++;
			}
		}
		return evn;
	}
