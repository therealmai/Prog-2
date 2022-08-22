#include <stdio.h>
#include <stdlib.h>

		int evenNum(int num[], int size);
	void main(){
		int x;
		int *catcher;
		int num[]={1,2,3,4,5,6,7,8};
		int size = 8, newsize =0;
		for(x = 0; x<size; x++){
			newsize += (num[x] % 2 == 0) ? 1: 0;
		}
		catcher = evenNum(num, size);
		for( x=0 ; x <newsize+1; x++){
			printf("%d ", catcher[x]);
		}
		
	}
	
	int evenNum (int num[], int size){
		int x,y, newsize=0; 
		int* evn;
		
		for(x = 0; x<size; x++){
			newsize += (num[x] % 2 == 0) ? 1: 0;
		}
		
		evn = (int*) calloc (newsize+1, sizeof(int));
		
		for(x=0, y=0; x <size; x++){
			if(num[x] %2 == 0){
				evn[y] = num[x];
				y++;
			}
		}
		evn[newsize] = -1;
		return evn;
	}
