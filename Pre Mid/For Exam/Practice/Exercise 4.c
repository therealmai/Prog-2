#include<stdio.h>
#include<stdlib.h>

	int* findEven(int num[], int size);
	void main(){
		int*catcher;
		int num[6] = {1,2,3,4,5,6};
		catcher = findEven(num, 6);
	}
	
	int* findEven(int num[], int size){
		int x, y, newsize=0;
		int* evn;
		
		for(x=0; x<size; x++){
			if(num[x] % 2 == 0){
				newsize++;
			}
		}
		
		evn = (int*) calloc(newsize+1, sizeof(int));
		
		for(x=0,y=0; x<size; x++){
			if(num[x] % 2 == 0 ){
				evn[y] = num[x];
				y++;
			}
		}
		
		evn[newsize] = -1;
	}
