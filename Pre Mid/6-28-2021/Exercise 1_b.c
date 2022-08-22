#include <stdio.h>
#include <stdlib.h>
#define size 3

	void displayNeg(int negative[], int newsize);
	void main(){
		int num[size];
		int newsize=0;
		int* negative;
		int x,y;
		for(x=0; x<size; x++){
			printf("Enter an integer:\n");
			scanf("%d", &num[x]);
		}
		for(x=0;x<size;x++){
			if(num[x] < 0){
				newsize++;
			}
		}
		negative = (int*) calloc(newsize, sizeof(int));
		for(x=0, y=0; x<size; x++){
			if(num[x] < 0){
				negative[y] = num[x];
				y++;
			}
		}
		displayNeg(negative, newsize);
	}
	
	void displayNeg(int negative[], int newsize){
		int x;
		for(x=0; x<newsize; x++){
			printf("%d\n", negative[x]);
		}
	}
