#include<stdio.h>

	void getLargest(int num[], int size);
	void displayLarge(int temp);
	
	void main(){
		int size = 3;
		int x;
		int num[size];
		for(x=0; x<size;x++){
			scanf("%d", &num[x]);
		}
		getLargest(num, 3);
	}
	void getLargest(int num[], int size){
	
	int x, temp = 0;
	for(x=0; x<size; x++){
		if(num[x] >= temp){
			temp = num[x];
		}	
	}
	displayLarge(temp);
}

	void displayLarge(int temp){
		printf("Largest number: %d", temp);
	}
